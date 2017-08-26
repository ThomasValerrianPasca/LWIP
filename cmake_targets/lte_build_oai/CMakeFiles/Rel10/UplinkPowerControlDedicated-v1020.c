/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "UplinkPowerControlDedicated-v1020.h"

static int
memb_pSRS_OffsetAp_r10_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_pSRS_OffsetAp_r10_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_v1020_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlDedicated_v1020, deltaTxD_OffsetListPUCCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaTxD_OffsetListPUCCH_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaTxD-OffsetListPUCCH-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlDedicated_v1020, pSRS_OffsetAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pSRS_OffsetAp_r10_constraint_1,
		&asn_PER_memb_pSRS_OffsetAp_r10_constr_3,
		0,
		"pSRS-OffsetAp-r10"
		},
};
static int asn_MAP_UplinkPowerControlDedicated_v1020_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_UplinkPowerControlDedicated_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlDedicated_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaTxD-OffsetListPUCCH-r10 at 2839 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pSRS-OffsetAp-r10 at 2840 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_v1020_specs_1 = {
	sizeof(struct UplinkPowerControlDedicated_v1020),
	offsetof(struct UplinkPowerControlDedicated_v1020, _asn_ctx),
	asn_MAP_UplinkPowerControlDedicated_v1020_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlDedicated_v1020_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1020 = {
	"UplinkPowerControlDedicated-v1020",
	"UplinkPowerControlDedicated-v1020",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UplinkPowerControlDedicated_v1020_tags_1,
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlDedicated_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPowerControlDedicated_v1020_1,
	2,	/* Elements count */
	&asn_SPC_UplinkPowerControlDedicated_v1020_specs_1	/* Additional specs */
};

