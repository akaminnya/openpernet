// Defines the entry point for the console application.
//
#ifdef __WIN32__
//#include "../win32/stdafx.h"
#include <winsock2.h>
#endif

#include "BasicUsageEnvironment.h"
#include "RTSPServer.h"
#include "MPEG4ESVideoRTPSink.h"
//#include "H264VideoRTPSink.h"
#include "RTCP.h"
#include "EncoderMediaSubsession.h"
#include "EncoderSource.h"
#include "RTSPCommon.h"
#ifndef __WIN32__
#include <netdb.h>
#include <sys/socket.h>
#endif

#ifdef __WIN32__
#include <iostream.h>
#else
#include <iostream>
#endif

#include "rsa_crypto.h"
#include "RTSPSdk.h"
#include "Debug.h"
#include <stdio.h>
#include "HikData.h"
//#include "../CrashReport/ExceptionHandler.h"
UsageEnvironment* env;
#define BUFSIZE  1024 

#ifdef SDKH264
	H264VideoRTPSink *videoSink;
#else
	MPEG4ESVideoRTPSink* videoSink;
	static hikProfile pro;
#endif

typedef unsigned long (__stdcall *StarvThreadFuncCallback)(void *);

LPhikProfile getProfileParamenterInfo(void)
{
	return &pro;	 
}

int httpRequestKey(char *recvBuffer, char *mac)
{
	ssize_t i = 0;
	char sndBuffer[BUFSIZE]={0};
	int sockfd, sndLen = 0;
	struct sockaddr_in dest_addr; 
	char *p = (char *)sndBuffer;
	char host[60] = {0};
	unsigned short port = 0;
	getHttpServerInfo(host, &port);
#if 1
	p += snprintf((char *)p, sizeof(sndBuffer)-1, "%s ","GET");
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "%s", "http://");
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "%s", host);
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "%s", "/com/devfy/devfy.php?");
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "mac=%s ", mac);
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "%s\r\n", "HTTP/1.1");
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "Host:%s\r\n", host);
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "User-Agent:%s\r\n", "wayde");
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "Accept:%s\r\n", "*/*");
	p += snprintf((char *)p, sizeof(sndBuffer)-1 - (p-(char *)sndBuffer), "Connection:%s\r\n\r\n", "Keep-Alive");
#endif
	sndLen = strlen(sndBuffer);

	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket is failed");
		exit(1);
	}
	dest_addr.sin_family = AF_INET; 
	dest_addr.sin_port = htons(port); 
	dest_addr.sin_addr.s_addr = inet_addr(host);
	
	if (connect(sockfd, (struct sockaddr *)&dest_addr,sizeof(struct sockaddr)) == -1)
	{
		perror("connect is error\n");
		exit(1);
	}

	if (writesocket(sockfd,sndBuffer,sndLen) == -1)
	{
		perror("write is error\n");
		exit(1);
	}

	while (i = readsocket(sockfd, recvBuffer, BUFSIZE-1))
	{ 
		if (i <= 0)
		{
			return i;	
		}
		recvBuffer[i]='\0';
//		Debug(ckite_log_message, "recvBuffer = %s\n", recvBuffer);
		fprintf(stderr, "recvBuffer = %s\n", recvBuffer);
		break;	
	}
	closesocket(sockfd);
	return i;
}

void supportMoreVideoAccess(RTSPServer *rtsp_server, int width, int height, char *type, unsigned char channel)
{
	unsigned int video_bitrate = 0;
	unsigned int framerate = 0;
	unsigned int keyinterval = 0;
	unsigned int audio_bitrate = 0;
	unsigned int framelength = 0;
	unsigned int samplerate = 0;

	getSubsessionParaConfig(type, width, height, video_bitrate, framerate, keyinterval, audio_bitrate, framelength, samplerate);

	EncoderMediaSubsession* audioSubsession, *videoSubsession;
	ServerMediaSession* sms
		= ServerMediaSession::createNew(*env, type, 
				"", 
				"RTSP session",
				True /*SSM*/);

    if (strcmp(type, "store") != 0)
	{
		videoSubsession = EncoderMediaSubsession::createNew(*env, NULL, False, False, 6970);
		videoSubsession->SetVideoParameters(channel, width, height, video_bitrate, framerate, keyinterval, type);
		sms->addSubsession(videoSubsession);
#if 0 
		audioSubsession = EncoderMediaSubsession::createNew(*env, NULL, True, False, 6970);
		audioSubsession->SetAudioParameters(audio_bitrate, framelength, samplerate, type);
		sms->addSubsession(audioSubsession);
#endif
	}
	rtsp_server->addServerMediaSession(sms);

	struct sockaddr_in sa;
	char host_name[60] = {0};
	unsigned short host_port = 0;
	char local_name[20] = {0};
	unsigned short local_port = 0;
	char local_mac_addr[20] = {0};
	char UserAgent[256] = {0};
	char *ptr = host_name;
	char **pptr;
	int i=0;
	struct hostent *hptr;

	getServerInfo(host_name, &host_port, 1);
	if(strlen((char const *)host_name) < 5 || host_port == 0)
	{
		getServerInfo(host_name, &host_port, 0);
	}
#if 1
	while( host_name[i] == ' '){
		ptr++;	
		i++;
	}

	if(ptr[0] >= 'A' && ptr[0] <= 'Z' || ptr[0] >= 'a' && ptr[0] <= 'z')
	{
		if((hptr = gethostbyname(ptr)) == NULL)
		{
			setSessionState(type,DNSFAILED);
			printf(" gethostbyname error for host:%s\n", host_name);
			return ;
		}
		switch(hptr->h_addrtype)
		{
		case AF_INET:
		case AF_INET6:
			//pptr=hptr->h_addr_list;
			//for(; *pptr!=NULL; pptr++)
				//inet_ntop(hptr->h_addrtype, *pptr, host_name, sizeof(host_name));
			strcpy(host_name, inet_ntoa(*(struct in_addr *)*(hptr->h_addr_list)));
			printf("host_name = %s\n",host_name);
			break;
		default:
			printf("unknown address type\n");
			break;
		}
	}
#endif
	//Debug(ckite_log_message, "host_name = %s\n", host_name);
	sa.sin_family = AF_INET;
	sa.sin_addr.s_addr = inet_addr(host_name);
	sa.sin_port = htons(host_port);
	getDeviceInfo(channel, local_name, &local_port, local_mac_addr);
	getUserAgent(UserAgent, sizeof(UserAgent));

	/*key*/
	char key[BUFSIZE] = {0};
	char *key_ptr = key;
	readkey(channel, key);

	if(strlen(key) < 256)
	{
		while(1)
		{
			memset(key, 0, sizeof(key));
			httpRequestKey(key, local_mac_addr);
			key_ptr = strstr(key, "Key:");
			if(key_ptr != NULL)
			{
				memcpy(key, key_ptr + 4, 256);
				writekey(channel, key);
				memset(key, 0, BUFSIZE);
				readkey(channel, key);
				if(strlen(key) < 256)
					continue;
				else 
					break;
			}
			else 
			{
				setSessionState(type,KEYFAILED);
				Sleep(30*60*1000);  
			}
		}
	}


	RTSPServer::RTSPEncoderSession* encoderSession = rtsp_server->createNewEncoderSession(sms, 1, sa,
				local_name, local_port, (char *)type, local_mac_addr, NULL, UserAgent, channel);
	char* url = rtsp_server->rtspURL(sms);
	*env << "Play this stream using the URL \"" << url << "\"\n";
	delete[] url;

}

void eventLoop()
{
	env->taskScheduler().doEventLoop(); // does not return
}


void realEntryMain(unsigned char channel) {

	// Create 'groupsocks' for RTP and RTCP:
	struct in_addr destinationAddress;
	destinationAddress.s_addr = 0;
	// Note: This is a multicast address.  If you wish instead to stream
	// using unicast, then you should use the "testOnDemandRTSPServer"
	// test program - not this test program - as a model.

	const unsigned short rtpPortNum = 18888;
	const unsigned short rtcpPortNum = rtpPortNum+1;
	const unsigned char ttl = 255;

	const Port rtpPort(rtpPortNum);
	const Port rtcpPort(rtcpPortNum);

	static Groupsock rtpGroupsock(*env, destinationAddress, rtpPort, ttl);
	rtpGroupsock.multicastSendOnly(); // we're a SSM source
	static Groupsock rtcpGroupsock(*env, destinationAddress, rtcpPort, ttl);
	rtcpGroupsock.multicastSendOnly(); // we're a SSM source

	// Create a 'MPEG-4 Video RTP' sink from the RTP 'groupsock':
#ifdef SDKH264
	//videoSink = H264VideoRTPSink::createNew(*env, NULL, &rtpGroupsock, 96/*, 4366366, "Z0LADPICwS0IAAADAyAAAAMACHihUkA=,aMuDyyA="*/);
#else
	videoSink = MPEG4ESVideoRTPSink::createNew(*env, NULL, &rtpGroupsock, 96);
#endif

	// Create (and start) a 'RTCP instance' for this RTP sink:
	const unsigned estimatedSessionBandwidth = 500; // in kbps; for RTCP b/w share
	const unsigned maxCNAMElen = 100;
	unsigned char CNAME[maxCNAMElen+1];
	gethostname((char*)CNAME, maxCNAMElen);
	CNAME[maxCNAMElen] = '\0'; // just in case
	RTCPInstance* rtcp
		= RTCPInstance::createNew(*env, &rtcpGroupsock,
				estimatedSessionBandwidth, CNAME,
				videoSink, NULL /* we're a server */,
				True /* we're a SSM source */);
	// Note: This starts RTCP running automatically
	unsigned short listenPort = 0;
	getListenPortByChannel(&listenPort, channel);
	RTSPServer* rtspServer = RTSPServer::createNew(*env, listenPort);
	if (rtspServer == NULL) {
		*env << "Failed to create RTSP server: " << env->getResultMsg() << "\n";
		///    exit(1);
	}

	supportMoreVideoAccess(rtspServer, 352, 288, (char *)"live", channel);
	//supportMoreVideoAccess(rtspServer, 176, 144, (char *)"mobile");
	//supportMoreVideoAccess(rtspServer, 0, 0, (char *)"store"); // now , subsession isn't need created 
	//supportMoreVideoAccess(rtspServer, 720, 576, (char *)"livehd");
}

unsigned long  StarvThreadCallback(unsigned char *channel)
{
	unsigned char subChannel = *channel;
	fprintf(stderr, "subChannel = %d.\n", subChannel);
#ifdef __WIN32__
	__try{
#endif
	realEntryMain(subChannel);
#ifdef __WIN32__
		}
	__except(RecordExceptionInfo(GetExceptionInformation(), 
		"mainSdk.cpp - _Entry"))
	{
	}
#endif

	return TRUE;
}

void startStarvSDK(unsigned char channelTotal)
{
	HANDLE hThread;
	DWORD threadID;
	DWORD j = 0;

	StarvThreadFuncCallback ThreadFunc = (StarvThreadFuncCallback)StarvThreadCallback;
	for(int i=0; i<channelTotal; i++)
	{	
		j=i+1; // sdk channel number
		hThread = CreateThread(	NULL,  
			0, 
			ThreadFunc, 
			&j,
			0,
		&threadID); 
		Sleep(1000);
	}
}	
					
int main(int argc, char** argv)
{

	if (argc < 10)
	{
		fprintf(stderr, "You input the parameter is incorrect\n");
		return 0;
	}
	// Begin by setting up our usage environment:
	TaskScheduler* scheduler = BasicTaskScheduler::createNew();
	env = BasicUsageEnvironment::createNew(*scheduler);

	memset(pro.IpAddr, 0, sizeof(pro.IpAddr));
	memset(pro.userName, 0, sizeof(pro.IpAddr));
	memset(pro.password, 0, sizeof(pro.IpAddr));
	memcpy(pro.IpAddr, argv[1], strlen(argv[1]));
	pro.port = atoi(argv[2]);
	memcpy(pro.userName, argv[3], strlen(argv[3]));
	memcpy(pro.password, argv[4], strlen(argv[4]));
	pro.channelNumTotal = atoi(argv[5]);
	memcpy(pro.deviceMAC, argv[6], strlen(argv[6]));
	memcpy(pro.winServerIP, argv[7], strlen(argv[7]));
	pro.winPort = atoi(argv[8]);
	pro.winListenPort = atoi(argv[9]);
	pro.processID = atoi(argv[10]);
	getFrameByHikSDK(pro.channelNumTotal); // hik sdk
	//realEntryMain(pro.channelNumTotal);
	startStarvSDK(pro.channelNumTotal);
	eventLoop();

	return 0; 
}

