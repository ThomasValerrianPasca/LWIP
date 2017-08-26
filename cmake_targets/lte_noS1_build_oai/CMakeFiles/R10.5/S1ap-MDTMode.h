/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_MDTMode_H_
#define	_S1ap_MDTMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-ImmediateMDT.h"
#include "S1ap-LoggedMDT.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_MDTMode_PR {
	S1ap_MDTMode_PR_NOTHING,	/* No components present */
	S1ap_MDTMode_PR_immediateMDT,
	S1ap_MDTMode_PR_loggedMDT,
	/* Extensions may appear below */
	
} S1ap_MDTMode_PR;

/* S1ap-MDTMode */
typedef struct S1ap_MDTMode {
	S1ap_MDTMode_PR present;
	union S1ap_MDTMode_u {
		S1ap_ImmediateMDT_t	 immediateMDT;
		S1ap_LoggedMDT_t	 loggedMDT;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_MDTMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_MDTMode;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_MDTMode_H_ */
#include <asn_internal.h>
