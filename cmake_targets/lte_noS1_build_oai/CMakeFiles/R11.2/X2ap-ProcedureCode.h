/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "/home/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_ProcedureCode_H_
#define	_X2ap_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_ProcedureCode {
	X2ap_ProcedureCode_id_handoverPreparation	= 0,
	X2ap_ProcedureCode_id_handoverCancel	= 1,
	X2ap_ProcedureCode_id_loadIndication	= 2,
	X2ap_ProcedureCode_id_errorIndication	= 3,
	X2ap_ProcedureCode_id_snStatusTransfer	= 4,
	X2ap_ProcedureCode_id_uEContextRelease	= 5,
	X2ap_ProcedureCode_id_x2Setup	= 6,
	X2ap_ProcedureCode_id_reset	= 7,
	X2ap_ProcedureCode_id_eNBConfigurationUpdate	= 8,
	X2ap_ProcedureCode_id_resourceStatusReportingInitiation	= 9,
	X2ap_ProcedureCode_id_resourceStatusReporting	= 10,
	X2ap_ProcedureCode_id_privateMessage	= 11,
	X2ap_ProcedureCode_id_mobilitySettingsChange	= 12,
	X2ap_ProcedureCode_id_rLFIndication	= 13,
	X2ap_ProcedureCode_id_handoverReport	= 14,
	X2ap_ProcedureCode_id_cellActivation	= 15
} e_X2ap_ProcedureCode;

/* X2ap-ProcedureCode */
typedef long	 X2ap_ProcedureCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_ProcedureCode;
asn_struct_free_f X2ap_ProcedureCode_free;
asn_struct_print_f X2ap_ProcedureCode_print;
asn_constr_check_f X2ap_ProcedureCode_constraint;
ber_type_decoder_f X2ap_ProcedureCode_decode_ber;
der_type_encoder_f X2ap_ProcedureCode_encode_der;
xer_type_decoder_f X2ap_ProcedureCode_decode_xer;
xer_type_encoder_f X2ap_ProcedureCode_encode_xer;
per_type_decoder_f X2ap_ProcedureCode_decode_uper;
per_type_encoder_f X2ap_ProcedureCode_encode_uper;
per_type_decoder_f X2ap_ProcedureCode_decode_aper;
per_type_encoder_f X2ap_ProcedureCode_encode_aper;
type_compare_f     X2ap_ProcedureCode_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_ProcedureCode_H_ */
#include <asn_internal.h>
