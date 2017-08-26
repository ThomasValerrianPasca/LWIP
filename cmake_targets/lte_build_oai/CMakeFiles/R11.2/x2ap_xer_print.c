/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.0  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*******************************************************************************
 * This file had been created by asn1tostruct.py script v1.0.2
 * Please do not modify this file but regenerate it via script.
 * Created on: 2017-08-26 22:57:22.782465 by oai
 * from ['/home/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-PDU-Contents.asn']
 ******************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#include <asn_application.h>
#include <asn_internal.h>

#include "x2ap_common.h"
#include "x2ap_ies_defs.h"

size_t x2ap_string_total_size = 0;

int
x2ap_xer__print2fp(const void *buffer, size_t size, void *app_key) {
    FILE *stream = (FILE *)app_key;

    if(fwrite(buffer, 1, size, stream) != size)
        return -1;

    return 0;
}

int x2ap_xer__print2sp(const void *buffer, size_t size, void *app_key) {
    char *string = (char *)app_key;

    /* Copy buffer to the formatted string */
    memcpy(&string[x2ap_string_total_size], buffer, size);

    x2ap_string_total_size += size;

    return 0;
}

static asn_enc_rval_t
xer_encode_local(asn_TYPE_descriptor_t *td, void *sptr,
        asn_app_consume_bytes_f *cb, void *app_key, int indent) {
    asn_enc_rval_t er, tmper;
    const char *mname;
    size_t mlen;
    int xcan = 2;

    if(!td || !sptr) goto cb_failed;

    mname = td->xml_tag;
    mlen = strlen(mname);

    _i_ASN_TEXT_INDENT(0, indent);
    _ASN_CALLBACK3("<", 1, mname, mlen, ">", 1);

    tmper = td->xer_encoder(td, sptr, indent + 1, XER_F_BASIC, cb, app_key);
    if(tmper.encoded == -1) return tmper;

    _ASN_CALLBACK3("</", 2, mname, mlen, ">\n", xcan);

    er.encoded = 4 + xcan + (2 * mlen) + tmper.encoded;

    _ASN_ENCODED_OK(er);
cb_failed:
    _ASN_ENCODE_FAILED;
}
asn_enc_rval_t x2ap_xer_print_x2setupresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2SetupResponse_IEs_t *x2SetupResponse_IEs;
    asn_enc_rval_t er;
    x2SetupResponse_IEs = &message_p->msg.x2SetupResponse_IEs;

    cb("<X2SetupResponse-IEs-PDU>\n", 26, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2SetupResponse-IEs>\n", 26, app_key);
    xer_encode_local(&asn_DEF_X2ap_GlobalENB_ID, &x2SetupResponse_IEs->globalENB_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ServedCells, &x2SetupResponse_IEs->servedCells, cb, app_key, 2);
    /* Optional field */
    if (x2SetupResponse_IEs->presenceMask & X2SETUPRESPONSE_IES_GUGROUPIDLIST_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_GUGroupIDList, &x2SetupResponse_IEs->guGroupIDList, cb, app_key, 2);
    /* Optional field */
    if (x2SetupResponse_IEs->presenceMask & X2SETUPRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2SetupResponse_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2SetupResponse-IEs>\n", 27, app_key);
    cb("</X2SetupResponse-IEs-PDU>\n", 27, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_handovercancel_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_HandoverCancel_IEs_t *x2ap_HandoverCancel_IEs;
    asn_enc_rval_t er;
    x2ap_HandoverCancel_IEs = &message_p->msg.x2ap_HandoverCancel_IEs;

    cb("<X2ap-HandoverCancel-IEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-HandoverCancel-IEs>\n", 30, app_key);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_HandoverCancel_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    /* Optional field */
    if (x2ap_HandoverCancel_IEs->presenceMask & X2AP_HANDOVERCANCEL_IES_NEW_ENB_UE_X2AP_ID_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_HandoverCancel_IEs->new_eNB_UE_X2AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_HandoverCancel_IEs->cause, cb, app_key, 2);
    cb("    </X2ap-HandoverCancel-IEs>\n", 31, app_key);
    cb("</X2ap-HandoverCancel-IEs-PDU>\n", 31, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_cellinformation_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CellInformation_ListIEs_t *x2ap_CellInformation_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_CellInformation_ListIEs->x2ap_CellInformation_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_CellInformation_Item, x2ap_CellInformation_ListIEs->x2ap_CellInformation_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_errorindication_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ErrorIndication_IEs_t *x2ap_ErrorIndication_IEs;
    asn_enc_rval_t er;
    x2ap_ErrorIndication_IEs = &message_p->msg.x2ap_ErrorIndication_IEs;

    cb("<X2ap-ErrorIndication-IEs-PDU>\n", 31, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ErrorIndication-IEs>\n", 31, app_key);
    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_OLD_ENB_UE_X2AP_ID_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_ErrorIndication_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_NEW_ENB_UE_X2AP_ID_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_ErrorIndication_IEs->new_eNB_UE_X2AP_ID, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_CAUSE_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_ErrorIndication_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_ErrorIndication_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-ErrorIndication-IEs>\n", 32, app_key);
    cb("</X2ap-ErrorIndication-IEs-PDU>\n", 32, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_measurementfailurecause_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_MeasurementFailureCause_ListIEs_t *x2ap_MeasurementFailureCause_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_MeasurementFailureCause_ListIEs->x2ap_MeasurementFailureCause_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_MeasurementFailureCause_Item, x2ap_MeasurementFailureCause_ListIEs->x2ap_MeasurementFailureCause_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_completefailurecauseinformation_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CompleteFailureCauseInformation_ListIEs_t *x2ap_CompleteFailureCauseInformation_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_CompleteFailureCauseInformation_ListIEs->x2ap_CompleteFailureCauseInformation_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_CompleteFailureCauseInformation_Item, x2ap_CompleteFailureCauseInformation_ListIEs->x2ap_CompleteFailureCauseInformation_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_cellactivationfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_CellActivationFailure_IEs_t *x2ap_CellActivationFailure_IEs;
    asn_enc_rval_t er;
    x2ap_CellActivationFailure_IEs = &message_p->msg.x2ap_CellActivationFailure_IEs;

    cb("<X2ap-CellActivationFailure-IEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-CellActivationFailure-IEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_CellActivationFailure_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2ap_CellActivationFailure_IEs->presenceMask & X2AP_CELLACTIVATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_CellActivationFailure_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-CellActivationFailure-IEs>\n", 38, app_key);
    cb("</X2ap-CellActivationFailure-IEs-PDU>\n", 38, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2setuprequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2SetupRequest_IEs_t *x2SetupRequest_IEs;
    asn_enc_rval_t er;
    x2SetupRequest_IEs = &message_p->msg.x2SetupRequest_IEs;

    cb("<X2SetupRequest-IEs-PDU>\n", 25, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2SetupRequest-IEs>\n", 25, app_key);
    xer_encode_local(&asn_DEF_X2ap_GlobalENB_ID, &x2SetupRequest_IEs->globalENB_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ServedCells, &x2SetupRequest_IEs->servedCells, cb, app_key, 2);
    /* Optional field */
    if (x2SetupRequest_IEs->presenceMask & X2SETUPREQUEST_IES_GUGROUPIDLIST_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_GUGroupIDList, &x2SetupRequest_IEs->guGroupIDList, cb, app_key, 2);
    cb("    </X2SetupRequest-IEs>\n", 26, app_key);
    cb("</X2SetupRequest-IEs-PDU>\n", 26, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ResourceStatusResponse_IEs_t *x2ap_ResourceStatusResponse_IEs;
    asn_enc_rval_t er;
    x2ap_ResourceStatusResponse_IEs = &message_p->msg.x2ap_ResourceStatusResponse_IEs;

    cb("<X2ap-ResourceStatusResponse-IEs-PDU>\n", 38, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ResourceStatusResponse-IEs>\n", 38, app_key);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusResponse_IEs->enB1_Measurement_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusResponse_IEs->enB2_Measurement_ID, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ResourceStatusResponse_IEs->presenceMask & X2AP_RESOURCESTATUSRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_ResourceStatusResponse_IEs->criticalityDiagnostics, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ResourceStatusResponse_IEs->presenceMask & X2AP_RESOURCESTATUSRESPONSE_IES_MEASUREMENTINITIATIONRESULT_LIST_PRESENT)
        x2ap_xer_print_x2ap_measurementinitiationresult_list(cb, app_key, &x2ap_ResourceStatusResponse_IEs->measurementInitiationResult_List);
    cb("    </X2ap-ResourceStatusResponse-IEs>\n", 39, app_key);
    cb("</X2ap-ResourceStatusResponse-IEs-PDU>\n", 39, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2setupfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2SetupFailure_IEs_t *x2SetupFailure_IEs;
    asn_enc_rval_t er;
    x2SetupFailure_IEs = &message_p->msg.x2SetupFailure_IEs;

    cb("<X2SetupFailure-IEs-PDU>\n", 25, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2SetupFailure-IEs>\n", 25, app_key);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2SetupFailure_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2SetupFailure_IEs->presenceMask & X2SETUPFAILURE_IES_TIMETOWAIT_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_TimeToWait, &x2SetupFailure_IEs->timeToWait, cb, app_key, 2);
    /* Optional field */
    if (x2SetupFailure_IEs->presenceMask & X2SETUPFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2SetupFailure_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2SetupFailure-IEs>\n", 26, app_key);
    cb("</X2SetupFailure-IEs-PDU>\n", 26, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_enbconfigurationupdateacknowledge_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ENBConfigurationUpdateAcknowledge_IEs_t *x2ap_ENBConfigurationUpdateAcknowledge_IEs;
    asn_enc_rval_t er;
    x2ap_ENBConfigurationUpdateAcknowledge_IEs = &message_p->msg.x2ap_ENBConfigurationUpdateAcknowledge_IEs;

    cb("<X2ap-ENBConfigurationUpdateAcknowledge-IEs-PDU>\n", 49, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ENBConfigurationUpdateAcknowledge-IEs>\n", 49, app_key);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdateAcknowledge_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_ENBConfigurationUpdateAcknowledge_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-ENBConfigurationUpdateAcknowledge-IEs>\n", 50, app_key);
    cb("</X2ap-ENBConfigurationUpdateAcknowledge-IEs-PDU>\n", 50, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_e_rabs_tobesetup_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_E_RABs_ToBeSetup_ListIEs_t *x2ap_E_RABs_ToBeSetup_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_E_RABs_ToBeSetup_ListIEs->x2ap_E_RABs_ToBeSetup_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_E_RABs_ToBeSetup_Item, x2ap_E_RABs_ToBeSetup_ListIEs->x2ap_E_RABs_ToBeSetup_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_handoverpreparationfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_HandoverPreparationFailure_IEs_t *x2ap_HandoverPreparationFailure_IEs;
    asn_enc_rval_t er;
    x2ap_HandoverPreparationFailure_IEs = &message_p->msg.x2ap_HandoverPreparationFailure_IEs;

    cb("<X2ap-HandoverPreparationFailure-IEs-PDU>\n", 42, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-HandoverPreparationFailure-IEs>\n", 42, app_key);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_HandoverPreparationFailure_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_HandoverPreparationFailure_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2ap_HandoverPreparationFailure_IEs->presenceMask & X2AP_HANDOVERPREPARATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_HandoverPreparationFailure_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-HandoverPreparationFailure-IEs>\n", 43, app_key);
    cb("</X2ap-HandoverPreparationFailure-IEs-PDU>\n", 43, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_resetrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ResetRequest_IEs_t *x2ap_ResetRequest_IEs;
    asn_enc_rval_t er;
    x2ap_ResetRequest_IEs = &message_p->msg.x2ap_ResetRequest_IEs;

    cb("<X2ap-ResetRequest-IEs-PDU>\n", 28, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ResetRequest-IEs>\n", 28, app_key);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_ResetRequest_IEs->cause, cb, app_key, 2);
    cb("    </X2ap-ResetRequest-IEs>\n", 29, app_key);
    cb("</X2ap-ResetRequest-IEs-PDU>\n", 29, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_rlfindication_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_RLFIndication_IEs_t *x2ap_RLFIndication_IEs;
    asn_enc_rval_t er;
    x2ap_RLFIndication_IEs = &message_p->msg.x2ap_RLFIndication_IEs;

    cb("<X2ap-RLFIndication-IEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-RLFIndication-IEs>\n", 29, app_key);
    xer_encode_local(&asn_DEF_X2ap_PCI, &x2ap_RLFIndication_IEs->failureCellPCI, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_RLFIndication_IEs->re_establishmentCellECGI, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_CRNTI, &x2ap_RLFIndication_IEs->failureCellCRNTI, cb, app_key, 2);
    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_SHORTMAC_I_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_ShortMAC_I, &x2ap_RLFIndication_IEs->shortMAC_I, cb, app_key, 2);
    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_UE_RLF_REPORT_CONTAINER_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_UE_RLF_Report_Container, &x2ap_RLFIndication_IEs->uE_RLF_Report_Container, cb, app_key, 2);
    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_RRCCONNSETUPINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_RRCConnSetupIndicator, &x2ap_RLFIndication_IEs->rrcConnSetupIndicator, cb, app_key, 2);
    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_RRCCONNREESTABINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_RRCConnReestabIndicator, &x2ap_RLFIndication_IEs->rrcConnReestabIndicator, cb, app_key, 2);
    cb("    </X2ap-RLFIndication-IEs>\n", 30, app_key);
    cb("</X2ap-RLFIndication-IEs-PDU>\n", 30, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_e_rabs_subjecttostatustransfer_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t *x2ap_E_RABs_SubjectToStatusTransfer_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_E_RABs_SubjectToStatusTransfer_ListIEs->x2ap_E_RABs_SubjectToStatusTransfer_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_Item, x2ap_E_RABs_SubjectToStatusTransfer_ListIEs->x2ap_E_RABs_SubjectToStatusTransfer_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_mobilitychangefailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_MobilityChangeFailure_IEs_t *x2ap_MobilityChangeFailure_IEs;
    asn_enc_rval_t er;
    x2ap_MobilityChangeFailure_IEs = &message_p->msg.x2ap_MobilityChangeFailure_IEs;

    cb("<X2ap-MobilityChangeFailure-IEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-MobilityChangeFailure-IEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_MobilityChangeFailure_IEs->enB1_Cell_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_MobilityChangeFailure_IEs->enB2_Cell_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_MobilityChangeFailure_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2ap_MobilityChangeFailure_IEs->presenceMask & X2AP_MOBILITYCHANGEFAILURE_IES_ENB2_MOBILITY_PARAMETERS_MODIFICATION_RANGE_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_MobilityParametersModificationRange, &x2ap_MobilityChangeFailure_IEs->enB2_Mobility_Parameters_Modification_Range, cb, app_key, 2);
    /* Optional field */
    if (x2ap_MobilityChangeFailure_IEs->presenceMask & X2AP_MOBILITYCHANGEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_MobilityChangeFailure_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-MobilityChangeFailure-IEs>\n", 38, app_key);
    cb("</X2ap-MobilityChangeFailure-IEs-PDU>\n", 38, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_cellactivationrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_CellActivationRequest_IEs_t *x2ap_CellActivationRequest_IEs;
    asn_enc_rval_t er;
    x2ap_CellActivationRequest_IEs = &message_p->msg.x2ap_CellActivationRequest_IEs;

    cb("<X2ap-CellActivationRequest-IEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-CellActivationRequest-IEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_ServedCellsToActivate, &x2ap_CellActivationRequest_IEs->servedCellsToActivate, cb, app_key, 2);
    cb("    </X2ap-CellActivationRequest-IEs>\n", 38, app_key);
    cb("</X2ap-CellActivationRequest-IEs-PDU>\n", 38, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ResourceStatusRequest_IEs_t *x2ap_ResourceStatusRequest_IEs;
    asn_enc_rval_t er;
    x2ap_ResourceStatusRequest_IEs = &message_p->msg.x2ap_ResourceStatusRequest_IEs;

    cb("<X2ap-ResourceStatusRequest-IEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ResourceStatusRequest-IEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusRequest_IEs->enB1_Measurement_ID, cb, app_key, 2);
    /* Conditional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_ENB2_MEASUREMENT_ID_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusRequest_IEs->enB2_Measurement_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Registration_Request, &x2ap_ResourceStatusRequest_IEs->registration_Request, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_REPORTCHARACTERISTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_ReportCharacteristics, &x2ap_ResourceStatusRequest_IEs->reportCharacteristics, cb, app_key, 2);
    x2ap_xer_print_x2ap_celltoreport_list(cb, app_key, &x2ap_ResourceStatusRequest_IEs->cellToReport);
    /* Optional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_REPORTINGPERIODICITY_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_ReportingPeriodicity, &x2ap_ResourceStatusRequest_IEs->reportingPeriodicity, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_PARTIALSUCCESSINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_PartialSuccessIndicator, &x2ap_ResourceStatusRequest_IEs->partialSuccessIndicator, cb, app_key, 2);
    cb("    </X2ap-ResourceStatusRequest-IEs>\n", 38, app_key);
    cb("</X2ap-ResourceStatusRequest-IEs-PDU>\n", 38, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_snstatustransfer_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_SNStatusTransfer_IEs_t *x2ap_SNStatusTransfer_IEs;
    asn_enc_rval_t er;
    x2ap_SNStatusTransfer_IEs = &message_p->msg.x2ap_SNStatusTransfer_IEs;

    cb("<X2ap-SNStatusTransfer-IEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-SNStatusTransfer-IEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_SNStatusTransfer_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_SNStatusTransfer_IEs->new_eNB_UE_X2AP_ID, cb, app_key, 2);
    x2ap_xer_print_x2ap_e_rabs_subjecttostatustransfer_list(cb, app_key, &x2ap_SNStatusTransfer_IEs->e_RABs_SubjectToStatusTransfer_List);
    cb("    </X2ap-SNStatusTransfer-IEs>\n", 33, app_key);
    cb("</X2ap-SNStatusTransfer-IEs-PDU>\n", 33, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_loadinformation_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_LoadInformation_IEs_t *x2ap_LoadInformation_IEs;
    asn_enc_rval_t er;
    x2ap_LoadInformation_IEs = &message_p->msg.x2ap_LoadInformation_IEs;

    cb("<X2ap-LoadInformation-IEs-PDU>\n", 31, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-LoadInformation-IEs>\n", 31, app_key);
    x2ap_xer_print_x2ap_cellinformation_list(cb, app_key, &x2ap_LoadInformation_IEs->cellInformation);
    cb("    </X2ap-LoadInformation-IEs>\n", 32, app_key);
    cb("</X2ap-LoadInformation-IEs-PDU>\n", 32, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_celltoreport_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CellToReport_ListIEs_t *x2ap_CellToReport_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_CellToReport_ListIEs->x2ap_CellToReport_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_CellToReport_Item, x2ap_CellToReport_ListIEs->x2ap_CellToReport_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_cellactivationresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_CellActivationResponse_IEs_t *x2ap_CellActivationResponse_IEs;
    asn_enc_rval_t er;
    x2ap_CellActivationResponse_IEs = &message_p->msg.x2ap_CellActivationResponse_IEs;

    cb("<X2ap-CellActivationResponse-IEs-PDU>\n", 38, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-CellActivationResponse-IEs>\n", 38, app_key);
    xer_encode_local(&asn_DEF_X2ap_ActivatedCellList, &x2ap_CellActivationResponse_IEs->activatedCellList, cb, app_key, 2);
    /* Optional field */
    if (x2ap_CellActivationResponse_IEs->presenceMask & X2AP_CELLACTIVATIONRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_CellActivationResponse_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-CellActivationResponse-IEs>\n", 39, app_key);
    cb("</X2ap-CellActivationResponse-IEs-PDU>\n", 39, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_handoverreport_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_HandoverReport_IEs_t *x2ap_HandoverReport_IEs;
    asn_enc_rval_t er;
    x2ap_HandoverReport_IEs = &message_p->msg.x2ap_HandoverReport_IEs;

    cb("<X2ap-HandoverReport-IEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-HandoverReport-IEs>\n", 30, app_key);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_HandoverReport_IEs->cause, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_HandoverReport_IEs->sourceCellECGI, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_HandoverReport_IEs->failureCellECGI, cb, app_key, 2);
    /* Conditional field */
    if (x2ap_HandoverReport_IEs->presenceMask & X2AP_HANDOVERREPORT_IES_RE_ESTABLISHMENTCELLECGI_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_HandoverReport_IEs->re_establishmentCellECGI, cb, app_key, 2);
    /* Conditional field */
    if (x2ap_HandoverReport_IEs->presenceMask & X2AP_HANDOVERREPORT_IES_TARGETCELLINUTRAN_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_TargetCellInUTRAN, &x2ap_HandoverReport_IEs->targetCellInUTRAN, cb, app_key, 2);
    cb("    </X2ap-HandoverReport-IEs>\n", 31, app_key);
    cb("</X2ap-HandoverReport-IEs-PDU>\n", 31, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusupdate_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ResourceStatusUpdate_IEs_t *x2ap_ResourceStatusUpdate_IEs;
    asn_enc_rval_t er;
    x2ap_ResourceStatusUpdate_IEs = &message_p->msg.x2ap_ResourceStatusUpdate_IEs;

    cb("<X2ap-ResourceStatusUpdate-IEs-PDU>\n", 36, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ResourceStatusUpdate-IEs>\n", 36, app_key);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusUpdate_IEs->enB1_Measurement_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusUpdate_IEs->enB2_Measurement_ID, cb, app_key, 2);
    x2ap_xer_print_x2ap_cellmeasurementresult_list(cb, app_key, &x2ap_ResourceStatusUpdate_IEs->cellMeasurementResult);
    cb("    </X2ap-ResourceStatusUpdate-IEs>\n", 37, app_key);
    cb("</X2ap-ResourceStatusUpdate-IEs-PDU>\n", 37, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_measurementinitiationresult_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_MeasurementInitiationResult_ListIEs_t *x2ap_MeasurementInitiationResult_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_MeasurementInitiationResult_ListIEs->x2ap_MeasurementInitiationResult_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_MeasurementInitiationResult_Item, x2ap_MeasurementInitiationResult_ListIEs->x2ap_MeasurementInitiationResult_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_cellmeasurementresult_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CellMeasurementResult_ListIEs_t *x2ap_CellMeasurementResult_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_CellMeasurementResult_ListIEs->x2ap_CellMeasurementResult_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_CellMeasurementResult_Item, x2ap_CellMeasurementResult_ListIEs->x2ap_CellMeasurementResult_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_resetresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ResetResponse_IEs_t *x2ap_ResetResponse_IEs;
    asn_enc_rval_t er;
    x2ap_ResetResponse_IEs = &message_p->msg.x2ap_ResetResponse_IEs;

    cb("<X2ap-ResetResponse-IEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ResetResponse-IEs>\n", 29, app_key);
    /* Optional field */
    if (x2ap_ResetResponse_IEs->presenceMask & X2AP_RESETRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_ResetResponse_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-ResetResponse-IEs>\n", 30, app_key);
    cb("</X2ap-ResetResponse-IEs-PDU>\n", 30, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_handoverrequestacknowledge_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_HandoverRequestAcknowledge_IEs_t *x2ap_HandoverRequestAcknowledge_IEs;
    asn_enc_rval_t er;
    x2ap_HandoverRequestAcknowledge_IEs = &message_p->msg.x2ap_HandoverRequestAcknowledge_IEs;

    cb("<X2ap-HandoverRequestAcknowledge-IEs-PDU>\n", 42, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-HandoverRequestAcknowledge-IEs>\n", 42, app_key);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_HandoverRequestAcknowledge_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_HandoverRequestAcknowledge_IEs->new_eNB_UE_X2AP_ID, cb, app_key, 2);
    x2ap_xer_print_x2ap_e_rabs_admitted_list(cb, app_key, &x2ap_HandoverRequestAcknowledge_IEs->e_RABs_Admitted_List);
    /* Optional field */
    if (x2ap_HandoverRequestAcknowledge_IEs->presenceMask & X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_E_RABS_NOTADMITTED_LIST_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_E_RAB_List, &x2ap_HandoverRequestAcknowledge_IEs->e_RABs_NotAdmitted_List, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_TargeteNBtoSource_eNBTransparentContainer, &x2ap_HandoverRequestAcknowledge_IEs->targeteNBtoSource_eNBTransparentContainer, cb, app_key, 2);
    /* Optional field */
    if (x2ap_HandoverRequestAcknowledge_IEs->presenceMask & X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_HandoverRequestAcknowledge_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-HandoverRequestAcknowledge-IEs>\n", 43, app_key);
    cb("</X2ap-HandoverRequestAcknowledge-IEs-PDU>\n", 43, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_handoverrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_HandoverRequest_IEs_t *x2ap_HandoverRequest_IEs;
    asn_enc_rval_t er;
    x2ap_HandoverRequest_IEs = &message_p->msg.x2ap_HandoverRequest_IEs;

    cb("<X2ap-HandoverRequest-IEs-PDU>\n", 31, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-HandoverRequest-IEs>\n", 31, app_key);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_HandoverRequest_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_HandoverRequest_IEs->cause, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_HandoverRequest_IEs->targetCell_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_GUMMEI, &x2ap_HandoverRequest_IEs->gummei_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_UE_ContextInformation, &x2ap_HandoverRequest_IEs->uE_ContextInformation, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_UE_HistoryInformation, &x2ap_HandoverRequest_IEs->uE_HistoryInformation, cb, app_key, 2);
    /* Optional field */
    if (x2ap_HandoverRequest_IEs->presenceMask & X2AP_HANDOVERREQUEST_IES_TRACEACTIVATION_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_TraceActivation, &x2ap_HandoverRequest_IEs->traceActivation, cb, app_key, 2);
    /* Optional field */
    if (x2ap_HandoverRequest_IEs->presenceMask & X2AP_HANDOVERREQUEST_IES_SRVCCOPERATIONPOSSIBLE_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_SRVCCOperationPossible, &x2ap_HandoverRequest_IEs->srvccOperationPossible, cb, app_key, 2);
    /* Optional field */
    if (x2ap_HandoverRequest_IEs->presenceMask & X2AP_HANDOVERREQUEST_IES_CSGMEMBERSHIPSTATUS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CSGMembershipStatus, &x2ap_HandoverRequest_IEs->csgMembershipStatus, cb, app_key, 2);
    cb("    </X2ap-HandoverRequest-IEs>\n", 32, app_key);
    cb("</X2ap-HandoverRequest-IEs-PDU>\n", 32, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_mobilitychangerequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_MobilityChangeRequest_IEs_t *x2ap_MobilityChangeRequest_IEs;
    asn_enc_rval_t er;
    x2ap_MobilityChangeRequest_IEs = &message_p->msg.x2ap_MobilityChangeRequest_IEs;

    cb("<X2ap-MobilityChangeRequest-IEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-MobilityChangeRequest-IEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_MobilityChangeRequest_IEs->enB1_Cell_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_MobilityChangeRequest_IEs->enB2_Cell_ID, cb, app_key, 2);
    /* Optional field */
    if (x2ap_MobilityChangeRequest_IEs->presenceMask & X2AP_MOBILITYCHANGEREQUEST_IES_ENB1_MOBILITY_PARAMETERS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_MobilityParametersInformation, &x2ap_MobilityChangeRequest_IEs->enB1_Mobility_Parameters, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_MobilityParametersInformation, &x2ap_MobilityChangeRequest_IEs->enB2_Proposed_Mobility_Parameters, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_MobilityChangeRequest_IEs->cause, cb, app_key, 2);
    cb("    </X2ap-MobilityChangeRequest-IEs>\n", 38, app_key);
    cb("</X2ap-MobilityChangeRequest-IEs-PDU>\n", 38, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_enbconfigurationupdate_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ENBConfigurationUpdate_IEs_t *x2ap_ENBConfigurationUpdate_IEs;
    asn_enc_rval_t er;
    x2ap_ENBConfigurationUpdate_IEs = &message_p->msg.x2ap_ENBConfigurationUpdate_IEs;

    cb("<X2ap-ENBConfigurationUpdate-IEs-PDU>\n", 38, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ENBConfigurationUpdate-IEs>\n", 38, app_key);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOADD_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_ServedCells, &x2ap_ENBConfigurationUpdate_IEs->servedCellsToAdd, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOMODIFY_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_ServedCellsToModify, &x2ap_ENBConfigurationUpdate_IEs->servedCellsToModify, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTODELETE_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_Old_ECGIs, &x2ap_ENBConfigurationUpdate_IEs->servedCellsToDelete, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTOADDLIST_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_GUGroupIDList, &x2ap_ENBConfigurationUpdate_IEs->guGroupIDToAddList, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTODELETELIST_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_GUGroupIDList, &x2ap_ENBConfigurationUpdate_IEs->guGroupIDToDeleteList, cb, app_key, 2);
    cb("    </X2ap-ENBConfigurationUpdate-IEs>\n", 39, app_key);
    cb("</X2ap-ENBConfigurationUpdate-IEs-PDU>\n", 39, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_uecontextrelease_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_UEContextRelease_IEs_t *x2ap_UEContextRelease_IEs;
    asn_enc_rval_t er;
    x2ap_UEContextRelease_IEs = &message_p->msg.x2ap_UEContextRelease_IEs;

    cb("<X2ap-UEContextRelease-IEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-UEContextRelease-IEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_UEContextRelease_IEs->old_eNB_UE_X2AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_UE_X2AP_ID, &x2ap_UEContextRelease_IEs->new_eNB_UE_X2AP_ID, cb, app_key, 2);
    cb("    </X2ap-UEContextRelease-IEs>\n", 33, app_key);
    cb("</X2ap-UEContextRelease-IEs-PDU>\n", 33, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ResourceStatusFailure_IEs_t *x2ap_ResourceStatusFailure_IEs;
    asn_enc_rval_t er;
    x2ap_ResourceStatusFailure_IEs = &message_p->msg.x2ap_ResourceStatusFailure_IEs;

    cb("<X2ap-ResourceStatusFailure-IEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ResourceStatusFailure-IEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusFailure_IEs->enB1_Measurement_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Measurement_ID, &x2ap_ResourceStatusFailure_IEs->enB2_Measurement_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_ResourceStatusFailure_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ResourceStatusFailure_IEs->presenceMask & X2AP_RESOURCESTATUSFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_ResourceStatusFailure_IEs->criticalityDiagnostics, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ResourceStatusFailure_IEs->presenceMask & X2AP_RESOURCESTATUSFAILURE_IES_COMPLETEFAILURECAUSEINFORMATION_LIST_PRESENT)
        x2ap_xer_print_x2ap_completefailurecauseinformation_list(cb, app_key, &x2ap_ResourceStatusFailure_IEs->completeFailureCauseInformation_List);
    cb("    </X2ap-ResourceStatusFailure-IEs>\n", 38, app_key);
    cb("</X2ap-ResourceStatusFailure-IEs-PDU>\n", 38, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_mobilitychangeacknowledge_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_MobilityChangeAcknowledge_IEs_t *x2ap_MobilityChangeAcknowledge_IEs;
    asn_enc_rval_t er;
    x2ap_MobilityChangeAcknowledge_IEs = &message_p->msg.x2ap_MobilityChangeAcknowledge_IEs;

    cb("<X2ap-MobilityChangeAcknowledge-IEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-MobilityChangeAcknowledge-IEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_MobilityChangeAcknowledge_IEs->enB1_Cell_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_X2ap_ECGI, &x2ap_MobilityChangeAcknowledge_IEs->enB2_Cell_ID, cb, app_key, 2);
    /* Optional field */
    if (x2ap_MobilityChangeAcknowledge_IEs->presenceMask & X2AP_MOBILITYCHANGEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_MobilityChangeAcknowledge_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-MobilityChangeAcknowledge-IEs>\n", 42, app_key);
    cb("</X2ap-MobilityChangeAcknowledge-IEs-PDU>\n", 42, app_key);
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_e_rabs_admitted_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_E_RABs_Admitted_ListIEs_t *x2ap_E_RABs_Admitted_ListIEs) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < x2ap_E_RABs_Admitted_ListIEs->x2ap_E_RABs_Admitted_Item.count; i++) {
        er = xer_encode(&asn_DEF_X2ap_E_RABs_Admitted_Item, x2ap_E_RABs_Admitted_ListIEs->x2ap_E_RABs_Admitted_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    _ASN_ENCODED_OK(er);
}

asn_enc_rval_t x2ap_xer_print_x2ap_enbconfigurationupdatefailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p)
{
    X2ap_ENBConfigurationUpdateFailure_IEs_t *x2ap_ENBConfigurationUpdateFailure_IEs;
    asn_enc_rval_t er;
    x2ap_ENBConfigurationUpdateFailure_IEs = &message_p->msg.x2ap_ENBConfigurationUpdateFailure_IEs;

    cb("<X2ap-ENBConfigurationUpdateFailure-IEs-PDU>\n", 45, app_key);
    xer_encode_local(&asn_DEF_X2ap_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_X2ap_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <X2ap-ENBConfigurationUpdateFailure-IEs>\n", 45, app_key);
    xer_encode_local(&asn_DEF_X2ap_Cause, &x2ap_ENBConfigurationUpdateFailure_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdateFailure_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_TIMETOWAIT_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_TimeToWait, &x2ap_ENBConfigurationUpdateFailure_IEs->timeToWait, cb, app_key, 2);
    /* Optional field */
    if (x2ap_ENBConfigurationUpdateFailure_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_X2ap_CriticalityDiagnostics, &x2ap_ENBConfigurationUpdateFailure_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </X2ap-ENBConfigurationUpdateFailure-IEs>\n", 46, app_key);
    cb("</X2ap-ENBConfigurationUpdateFailure-IEs-PDU>\n", 46, app_key);
    _ASN_ENCODED_OK(er);
}

