/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_GUGroupIDList_H_
#define	_X2ap_GUGroupIDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_GU_Group_ID;

/* X2ap-GUGroupIDList */
typedef struct X2ap_GUGroupIDList {
	A_SEQUENCE_OF(struct X2ap_GU_Group_ID) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_GUGroupIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_GUGroupIDList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-GU-Group-ID.h"

#endif	/* _X2ap_GUGroupIDList_H_ */
#include <asn_internal.h>
