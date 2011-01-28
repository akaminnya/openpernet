/* soapH.h
   Generated by gSOAP 2.7.13 from webservice.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapH_H
#define soapH_H
#include "soapStub.h"
#ifndef WITH_NOIDREF

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

SOAP_FMAC3 void * SOAP_FMAC4 soap_instantiate(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fdelete(struct soap_clist*);
SOAP_FMAC3 void* SOAP_FMAC4 soap_class_id_enter(struct soap*, const char*, void*, int, size_t, const char*, const char*);

SOAP_FMAC3 void* SOAP_FMAC4 soap_container_id_forward(struct soap*, const char*, void*, size_t, int, int, size_t, unsigned int);

SOAP_FMAC3 void SOAP_FMAC4 soap_container_insert(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);

#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);

#ifndef SOAP_TYPE_ns1__UrlsResult
#define SOAP_TYPE_ns1__UrlsResult (12)
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__UrlsResult(struct soap*, const char*, int, const ns1__UrlsResult *, const char*);
SOAP_FMAC3 ns1__UrlsResult * SOAP_FMAC4 soap_get_ns1__UrlsResult(struct soap*, ns1__UrlsResult *, const char*, const char*);
SOAP_FMAC3 ns1__UrlsResult * SOAP_FMAC4 soap_in_ns1__UrlsResult(struct soap*, const char*, ns1__UrlsResult *, const char*);

#define soap_new_ns1__UrlsResult(soap, n) soap_instantiate_ns1__UrlsResult(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__UrlsResult(soap, p) soap_delete(soap, p)

SOAP_FMAC3 ns1__UrlsResult * SOAP_FMAC4 soap_instantiate_ns1__UrlsResult(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__UrlsResult(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_UrlsResultArray
#define SOAP_TYPE_UrlsResultArray (11)
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_out_UrlsResultArray(struct soap*, const char*, int, const UrlsResultArray *, const char*);
SOAP_FMAC3 UrlsResultArray * SOAP_FMAC4 soap_get_UrlsResultArray(struct soap*, UrlsResultArray *, const char*, const char*);
SOAP_FMAC3 UrlsResultArray * SOAP_FMAC4 soap_in_UrlsResultArray(struct soap*, const char*, UrlsResultArray *, const char*);

#define soap_new_UrlsResultArray(soap, n) soap_instantiate_UrlsResultArray(soap, n, NULL, NULL, NULL)


#define soap_delete_UrlsResultArray(soap, p) soap_delete(soap, p)

SOAP_FMAC3 UrlsResultArray * SOAP_FMAC4 soap_instantiate_UrlsResultArray(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_UrlsResultArray(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1__DevCamerasUrlsResult
#define SOAP_TYPE_ns1__DevCamerasUrlsResult (10)
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__DevCamerasUrlsResult(struct soap*, const char*, int, const ns1__DevCamerasUrlsResult *, const char*);
SOAP_FMAC3 ns1__DevCamerasUrlsResult * SOAP_FMAC4 soap_get_ns1__DevCamerasUrlsResult(struct soap*, ns1__DevCamerasUrlsResult *, const char*, const char*);
SOAP_FMAC3 ns1__DevCamerasUrlsResult * SOAP_FMAC4 soap_in_ns1__DevCamerasUrlsResult(struct soap*, const char*, ns1__DevCamerasUrlsResult *, const char*);

#define soap_new_ns1__DevCamerasUrlsResult(soap, n) soap_instantiate_ns1__DevCamerasUrlsResult(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__DevCamerasUrlsResult(soap, p) soap_delete(soap, p)

SOAP_FMAC3 ns1__DevCamerasUrlsResult * SOAP_FMAC4 soap_instantiate_ns1__DevCamerasUrlsResult(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__DevCamerasUrlsResult(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_xsd__integer
#define SOAP_TYPE_xsd__integer (9)
#endif

#define soap_default_xsd__integer(soap, a) soap_default_std__string(soap, a)


#define soap_serialize_xsd__integer(soap, a) soap_serialize_std__string(soap, a)


SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__integer(struct soap*, const std::string *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__integer(struct soap*, const char*, int, const std::string*, const char*);
SOAP_FMAC3 std::string * SOAP_FMAC4 soap_get_xsd__integer(struct soap*, std::string *, const char*, const char*);
SOAP_FMAC3 std::string * SOAP_FMAC4 soap_in_xsd__integer(struct soap*, const char*, std::string*, const char*);

#define soap_new_xsd__integer(soap, n) soap_instantiate_xsd__integer(soap, n, NULL, NULL, NULL)


#define soap_delete_xsd__integer(soap, p) soap_delete(soap, p)


#define soap_instantiate_xsd__integer soap_instantiate_std__string


#define soap_copy_xsd__integer soap_copy_std__string

#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (8)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_std__string(struct soap*, std::string *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_std__string(struct soap*, const std::string *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_std__string(struct soap*, const std::string *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_std__string(struct soap*, const char*, int, const std::string*, const char*);
SOAP_FMAC3 std::string * SOAP_FMAC4 soap_get_std__string(struct soap*, std::string *, const char*, const char*);
SOAP_FMAC3 std::string * SOAP_FMAC4 soap_in_std__string(struct soap*, const char*, std::string*, const char*);

#define soap_new_std__string(soap, n) soap_instantiate_std__string(soap, n, NULL, NULL, NULL)


#define soap_delete_std__string(soap, p) soap_delete(soap, p)

SOAP_FMAC3 std::string * SOAP_FMAC4 soap_instantiate_std__string(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_std__string(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (37)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);

#define soap_new_SOAP_ENV__Fault(soap, n) soap_instantiate_SOAP_ENV__Fault(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Fault(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Fault(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (36)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);

#define soap_new_SOAP_ENV__Reason(soap, n) soap_instantiate_SOAP_ENV__Reason(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Reason(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Reason(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (33)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);

#define soap_new_SOAP_ENV__Detail(soap, n) soap_instantiate_SOAP_ENV__Detail(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Detail(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Detail(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (31)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);

#define soap_new_SOAP_ENV__Code(soap, n) soap_instantiate_SOAP_ENV__Code(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Code(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Code(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (30)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);

#define soap_new_SOAP_ENV__Header(soap, n) soap_instantiate_SOAP_ENV__Header(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Header(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Header(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef SOAP_TYPE_ns1___USCORE_USCOREdestruct
#define SOAP_TYPE_ns1___USCORE_USCOREdestruct (29)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1___USCORE_USCOREdestruct(struct soap*, struct ns1___USCORE_USCOREdestruct *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1___USCORE_USCOREdestruct(struct soap*, const struct ns1___USCORE_USCOREdestruct *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1___USCORE_USCOREdestruct(struct soap*, const struct ns1___USCORE_USCOREdestruct *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1___USCORE_USCOREdestruct(struct soap*, const char*, int, const struct ns1___USCORE_USCOREdestruct *, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREdestruct * SOAP_FMAC4 soap_get_ns1___USCORE_USCOREdestruct(struct soap*, struct ns1___USCORE_USCOREdestruct *, const char*, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREdestruct * SOAP_FMAC4 soap_in_ns1___USCORE_USCOREdestruct(struct soap*, const char*, struct ns1___USCORE_USCOREdestruct *, const char*);

#define soap_new_ns1___USCORE_USCOREdestruct(soap, n) soap_instantiate_ns1___USCORE_USCOREdestruct(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1___USCORE_USCOREdestruct(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct ns1___USCORE_USCOREdestruct * SOAP_FMAC4 soap_instantiate_ns1___USCORE_USCOREdestruct(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1___USCORE_USCOREdestruct(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1___USCORE_USCOREdestructResponse
#define SOAP_TYPE_ns1___USCORE_USCOREdestructResponse (26)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1___USCORE_USCOREdestructResponse(struct soap*, struct ns1___USCORE_USCOREdestructResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1___USCORE_USCOREdestructResponse(struct soap*, const struct ns1___USCORE_USCOREdestructResponse *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1___USCORE_USCOREdestructResponse(struct soap*, const struct ns1___USCORE_USCOREdestructResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1___USCORE_USCOREdestructResponse(struct soap*, const char*, int, const struct ns1___USCORE_USCOREdestructResponse *, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREdestructResponse * SOAP_FMAC4 soap_get_ns1___USCORE_USCOREdestructResponse(struct soap*, struct ns1___USCORE_USCOREdestructResponse *, const char*, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREdestructResponse * SOAP_FMAC4 soap_in_ns1___USCORE_USCOREdestructResponse(struct soap*, const char*, struct ns1___USCORE_USCOREdestructResponse *, const char*);

#define soap_new_ns1___USCORE_USCOREdestructResponse(soap, n) soap_instantiate_ns1___USCORE_USCOREdestructResponse(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1___USCORE_USCOREdestructResponse(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct ns1___USCORE_USCOREdestructResponse * SOAP_FMAC4 soap_instantiate_ns1___USCORE_USCOREdestructResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1___USCORE_USCOREdestructResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1___USCORE_USCOREconstruct
#define SOAP_TYPE_ns1___USCORE_USCOREconstruct (25)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1___USCORE_USCOREconstruct(struct soap*, struct ns1___USCORE_USCOREconstruct *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1___USCORE_USCOREconstruct(struct soap*, const struct ns1___USCORE_USCOREconstruct *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1___USCORE_USCOREconstruct(struct soap*, const struct ns1___USCORE_USCOREconstruct *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1___USCORE_USCOREconstruct(struct soap*, const char*, int, const struct ns1___USCORE_USCOREconstruct *, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREconstruct * SOAP_FMAC4 soap_get_ns1___USCORE_USCOREconstruct(struct soap*, struct ns1___USCORE_USCOREconstruct *, const char*, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREconstruct * SOAP_FMAC4 soap_in_ns1___USCORE_USCOREconstruct(struct soap*, const char*, struct ns1___USCORE_USCOREconstruct *, const char*);

#define soap_new_ns1___USCORE_USCOREconstruct(soap, n) soap_instantiate_ns1___USCORE_USCOREconstruct(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1___USCORE_USCOREconstruct(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct ns1___USCORE_USCOREconstruct * SOAP_FMAC4 soap_instantiate_ns1___USCORE_USCOREconstruct(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1___USCORE_USCOREconstruct(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1___USCORE_USCOREconstructResponse
#define SOAP_TYPE_ns1___USCORE_USCOREconstructResponse (22)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1___USCORE_USCOREconstructResponse(struct soap*, struct ns1___USCORE_USCOREconstructResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1___USCORE_USCOREconstructResponse(struct soap*, const struct ns1___USCORE_USCOREconstructResponse *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1___USCORE_USCOREconstructResponse(struct soap*, const struct ns1___USCORE_USCOREconstructResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1___USCORE_USCOREconstructResponse(struct soap*, const char*, int, const struct ns1___USCORE_USCOREconstructResponse *, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREconstructResponse * SOAP_FMAC4 soap_get_ns1___USCORE_USCOREconstructResponse(struct soap*, struct ns1___USCORE_USCOREconstructResponse *, const char*, const char*);
SOAP_FMAC3 struct ns1___USCORE_USCOREconstructResponse * SOAP_FMAC4 soap_in_ns1___USCORE_USCOREconstructResponse(struct soap*, const char*, struct ns1___USCORE_USCOREconstructResponse *, const char*);

#define soap_new_ns1___USCORE_USCOREconstructResponse(soap, n) soap_instantiate_ns1___USCORE_USCOREconstructResponse(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1___USCORE_USCOREconstructResponse(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct ns1___USCORE_USCOREconstructResponse * SOAP_FMAC4 soap_instantiate_ns1___USCORE_USCOREconstructResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1___USCORE_USCOREconstructResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1__GetDevCamerasUrls
#define SOAP_TYPE_ns1__GetDevCamerasUrls (21)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__GetDevCamerasUrls(struct soap*, struct ns1__GetDevCamerasUrls *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__GetDevCamerasUrls(struct soap*, const struct ns1__GetDevCamerasUrls *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__GetDevCamerasUrls(struct soap*, const struct ns1__GetDevCamerasUrls *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__GetDevCamerasUrls(struct soap*, const char*, int, const struct ns1__GetDevCamerasUrls *, const char*);
SOAP_FMAC3 struct ns1__GetDevCamerasUrls * SOAP_FMAC4 soap_get_ns1__GetDevCamerasUrls(struct soap*, struct ns1__GetDevCamerasUrls *, const char*, const char*);
SOAP_FMAC3 struct ns1__GetDevCamerasUrls * SOAP_FMAC4 soap_in_ns1__GetDevCamerasUrls(struct soap*, const char*, struct ns1__GetDevCamerasUrls *, const char*);

#define soap_new_ns1__GetDevCamerasUrls(soap, n) soap_instantiate_ns1__GetDevCamerasUrls(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__GetDevCamerasUrls(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct ns1__GetDevCamerasUrls * SOAP_FMAC4 soap_instantiate_ns1__GetDevCamerasUrls(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__GetDevCamerasUrls(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1__GetDevCamerasUrlsResponse
#define SOAP_TYPE_ns1__GetDevCamerasUrlsResponse (17)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__GetDevCamerasUrlsResponse(struct soap*, struct ns1__GetDevCamerasUrlsResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__GetDevCamerasUrlsResponse(struct soap*, const struct ns1__GetDevCamerasUrlsResponse *);

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__GetDevCamerasUrlsResponse(struct soap*, const struct ns1__GetDevCamerasUrlsResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__GetDevCamerasUrlsResponse(struct soap*, const char*, int, const struct ns1__GetDevCamerasUrlsResponse *, const char*);
SOAP_FMAC3 struct ns1__GetDevCamerasUrlsResponse * SOAP_FMAC4 soap_get_ns1__GetDevCamerasUrlsResponse(struct soap*, struct ns1__GetDevCamerasUrlsResponse *, const char*, const char*);
SOAP_FMAC3 struct ns1__GetDevCamerasUrlsResponse * SOAP_FMAC4 soap_in_ns1__GetDevCamerasUrlsResponse(struct soap*, const char*, struct ns1__GetDevCamerasUrlsResponse *, const char*);

#define soap_new_ns1__GetDevCamerasUrlsResponse(soap, n) soap_instantiate_ns1__GetDevCamerasUrlsResponse(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__GetDevCamerasUrlsResponse(soap, p) soap_delete(soap, p)

SOAP_FMAC3 struct ns1__GetDevCamerasUrlsResponse * SOAP_FMAC4 soap_instantiate_ns1__GetDevCamerasUrlsResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__GetDevCamerasUrlsResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (39)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (38)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (32)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);

#endif

#ifndef SOAP_TYPE_PointerTons1__DevCamerasUrlsResult
#define SOAP_TYPE_PointerTons1__DevCamerasUrlsResult (18)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons1__DevCamerasUrlsResult(struct soap*, ns1__DevCamerasUrlsResult *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons1__DevCamerasUrlsResult(struct soap*, ns1__DevCamerasUrlsResult *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons1__DevCamerasUrlsResult(struct soap*, const char *, int, ns1__DevCamerasUrlsResult *const*, const char *);
SOAP_FMAC3 ns1__DevCamerasUrlsResult ** SOAP_FMAC4 soap_get_PointerTons1__DevCamerasUrlsResult(struct soap*, ns1__DevCamerasUrlsResult **, const char*, const char*);
SOAP_FMAC3 ns1__DevCamerasUrlsResult ** SOAP_FMAC4 soap_in_PointerTons1__DevCamerasUrlsResult(struct soap*, const char*, ns1__DevCamerasUrlsResult **, const char*);

#ifndef SOAP_TYPE_PointerToPointerTons1__UrlsResult
#define SOAP_TYPE_PointerToPointerTons1__UrlsResult (16)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons1__UrlsResult(struct soap*, ns1__UrlsResult **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons1__UrlsResult(struct soap*, ns1__UrlsResult **const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons1__UrlsResult(struct soap*, const char *, int, ns1__UrlsResult **const*, const char *);
SOAP_FMAC3 ns1__UrlsResult *** SOAP_FMAC4 soap_get_PointerToPointerTons1__UrlsResult(struct soap*, ns1__UrlsResult ***, const char*, const char*);
SOAP_FMAC3 ns1__UrlsResult *** SOAP_FMAC4 soap_in_PointerToPointerTons1__UrlsResult(struct soap*, const char*, ns1__UrlsResult ***, const char*);

#ifndef SOAP_TYPE_PointerTons1__UrlsResult
#define SOAP_TYPE_PointerTons1__UrlsResult (15)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons1__UrlsResult(struct soap*, ns1__UrlsResult *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons1__UrlsResult(struct soap*, ns1__UrlsResult *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons1__UrlsResult(struct soap*, const char *, int, ns1__UrlsResult *const*, const char *);
SOAP_FMAC3 ns1__UrlsResult ** SOAP_FMAC4 soap_get_PointerTons1__UrlsResult(struct soap*, ns1__UrlsResult **, const char*, const char*);
SOAP_FMAC3 ns1__UrlsResult ** SOAP_FMAC4 soap_in_PointerTons1__UrlsResult(struct soap*, const char*, ns1__UrlsResult **, const char*);

#ifndef SOAP_TYPE_PointerToUrlsResultArray
#define SOAP_TYPE_PointerToUrlsResultArray (13)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToUrlsResultArray(struct soap*, UrlsResultArray *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToUrlsResultArray(struct soap*, UrlsResultArray *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToUrlsResultArray(struct soap*, const char *, int, UrlsResultArray *const*, const char *);
SOAP_FMAC3 UrlsResultArray ** SOAP_FMAC4 soap_get_PointerToUrlsResultArray(struct soap*, UrlsResultArray **, const char*, const char*);
SOAP_FMAC3 UrlsResultArray ** SOAP_FMAC4 soap_in_PointerToUrlsResultArray(struct soap*, const char*, UrlsResultArray **, const char*);

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

#define soap_default__QName(soap, a) soap_default_string(soap, a)


#define soap_serialize__QName(soap, a) soap_serialize_string(soap, a)

SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);

#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);

#endif

/* End of soapH.h */
