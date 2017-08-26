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
 * Created on: 2017-08-26 22:34:47.341943 by oai
 * from ['/home/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-PDU-Contents.asn']
 ******************************************************************************/
#include "x2ap_common.h"
#include "x2ap_ies_defs.h"

int x2ap_decode_x2setupresponse_ies(
    X2SetupResponse_IEs_t *x2SetupResponse_IEs,
    ANY_t *any_p) {

    X2SetupResponse_t  x2SetupResponse;
    X2SetupResponse_t *x2SetupResponse_p = &x2SetupResponse;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2SetupResponse_IEs != NULL);

    X2AP_DEBUG("Decoding message X2SetupResponse_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2SetupResponse, (void**)&x2SetupResponse_p);

    for (i = 0; i < x2SetupResponse_p->x2SetupResponse_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2SetupResponse_p->x2SetupResponse_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_GlobalENB_ID:
            {
                X2ap_GlobalENB_ID_t *x2apGlobalENBID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GlobalENB_ID, (void**)&x2apGlobalENBID_p);
                if (tempDecoded < 0 || x2apGlobalENBID_p == NULL) {
                    X2AP_ERROR("Decoding of IE globalENB_ID failed\n");
                    if (x2apGlobalENBID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GlobalENB_ID, x2apGlobalENBID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GlobalENB_ID, x2apGlobalENBID_p);
                memcpy(&x2SetupResponse_IEs->globalENB_ID, x2apGlobalENBID_p, sizeof(X2ap_GlobalENB_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ServedCells:
            {
                X2ap_ServedCells_t *x2apServedCells_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ServedCells, (void**)&x2apServedCells_p);
                if (tempDecoded < 0 || x2apServedCells_p == NULL) {
                    X2AP_ERROR("Decoding of IE servedCells failed\n");
                    if (x2apServedCells_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ServedCells, x2apServedCells_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ServedCells, x2apServedCells_p);
                memcpy(&x2SetupResponse_IEs->servedCells, x2apServedCells_p, sizeof(X2ap_ServedCells_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_GUGroupIDList:
            {
                X2ap_GUGroupIDList_t *x2apGUGroupIDList_p = NULL;
                x2SetupResponse_IEs->presenceMask |= X2SETUPRESPONSE_IES_GUGROUPIDLIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GUGroupIDList, (void**)&x2apGUGroupIDList_p);
                if (tempDecoded < 0 || x2apGUGroupIDList_p == NULL) {
                    X2AP_ERROR("Decoding of IE guGroupIDList failed\n");
                    if (x2apGUGroupIDList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                memcpy(&x2SetupResponse_IEs->guGroupIDList, x2apGUGroupIDList_p, sizeof(X2ap_GUGroupIDList_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2SetupResponse_IEs->presenceMask |= X2SETUPRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2SetupResponse_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2setupresponse_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_handovercancel_ies(
    X2ap_HandoverCancel_IEs_t *x2ap_HandoverCancel_IEs,
    ANY_t *any_p) {

    X2ap_HandoverCancel_t  x2ap_HandoverCancel;
    X2ap_HandoverCancel_t *x2ap_HandoverCancel_p = &x2ap_HandoverCancel;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_HandoverCancel_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_HandoverCancel_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_HandoverCancel, (void**)&x2ap_HandoverCancel_p);

    for (i = 0; i < x2ap_HandoverCancel_p->x2ap_HandoverCancel_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_HandoverCancel_p->x2ap_HandoverCancel_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_HandoverCancel_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                x2ap_HandoverCancel_IEs->presenceMask |= X2AP_HANDOVERCANCEL_IES_NEW_ENB_UE_X2AP_ID_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE new_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_HandoverCancel_IEs->new_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_HandoverCancel_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_handovercancel_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_errorindication_ies(
    X2ap_ErrorIndication_IEs_t *x2ap_ErrorIndication_IEs,
    ANY_t *any_p) {

    X2ap_ErrorIndication_t  x2ap_ErrorIndication;
    X2ap_ErrorIndication_t *x2ap_ErrorIndication_p = &x2ap_ErrorIndication;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ErrorIndication_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ErrorIndication_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ErrorIndication, (void**)&x2ap_ErrorIndication_p);

    for (i = 0; i < x2ap_ErrorIndication_p->x2ap_ErrorIndication_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ErrorIndication_p->x2ap_ErrorIndication_ies.list.array[i];
        switch(ie_p->id) {
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                x2ap_ErrorIndication_IEs->presenceMask |= X2AP_ERRORINDICATION_IES_OLD_ENB_UE_X2AP_ID_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_ErrorIndication_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                x2ap_ErrorIndication_IEs->presenceMask |= X2AP_ERRORINDICATION_IES_NEW_ENB_UE_X2AP_ID_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE new_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_ErrorIndication_IEs->new_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                x2ap_ErrorIndication_IEs->presenceMask |= X2AP_ERRORINDICATION_IES_CAUSE_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_ErrorIndication_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_ErrorIndication_IEs->presenceMask |= X2AP_ERRORINDICATION_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_ErrorIndication_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_errorindication_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_cellactivationfailure_ies(
    X2ap_CellActivationFailure_IEs_t *x2ap_CellActivationFailure_IEs,
    ANY_t *any_p) {

    X2ap_CellActivationFailure_t  x2ap_CellActivationFailure;
    X2ap_CellActivationFailure_t *x2ap_CellActivationFailure_p = &x2ap_CellActivationFailure;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_CellActivationFailure_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_CellActivationFailure_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_CellActivationFailure, (void**)&x2ap_CellActivationFailure_p);

    for (i = 0; i < x2ap_CellActivationFailure_p->x2ap_CellActivationFailure_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_CellActivationFailure_p->x2ap_CellActivationFailure_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_CellActivationFailure_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_CellActivationFailure_IEs->presenceMask |= X2AP_CELLACTIVATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_CellActivationFailure_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_cellactivationfailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2setuprequest_ies(
    X2SetupRequest_IEs_t *x2SetupRequest_IEs,
    ANY_t *any_p) {

    X2SetupRequest_t  x2SetupRequest;
    X2SetupRequest_t *x2SetupRequest_p = &x2SetupRequest;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2SetupRequest_IEs != NULL);

    X2AP_DEBUG("Decoding message X2SetupRequest_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2SetupRequest, (void**)&x2SetupRequest_p);

    for (i = 0; i < x2SetupRequest_p->x2SetupRequest_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2SetupRequest_p->x2SetupRequest_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_GlobalENB_ID:
            {
                X2ap_GlobalENB_ID_t *x2apGlobalENBID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GlobalENB_ID, (void**)&x2apGlobalENBID_p);
                if (tempDecoded < 0 || x2apGlobalENBID_p == NULL) {
                    X2AP_ERROR("Decoding of IE globalENB_ID failed\n");
                    if (x2apGlobalENBID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GlobalENB_ID, x2apGlobalENBID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GlobalENB_ID, x2apGlobalENBID_p);
                memcpy(&x2SetupRequest_IEs->globalENB_ID, x2apGlobalENBID_p, sizeof(X2ap_GlobalENB_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ServedCells:
            {
                X2ap_ServedCells_t *x2apServedCells_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ServedCells, (void**)&x2apServedCells_p);
                if (tempDecoded < 0 || x2apServedCells_p == NULL) {
                    X2AP_ERROR("Decoding of IE servedCells failed\n");
                    if (x2apServedCells_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ServedCells, x2apServedCells_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ServedCells, x2apServedCells_p);
                memcpy(&x2SetupRequest_IEs->servedCells, x2apServedCells_p, sizeof(X2ap_ServedCells_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_GUGroupIDList:
            {
                X2ap_GUGroupIDList_t *x2apGUGroupIDList_p = NULL;
                x2SetupRequest_IEs->presenceMask |= X2SETUPREQUEST_IES_GUGROUPIDLIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GUGroupIDList, (void**)&x2apGUGroupIDList_p);
                if (tempDecoded < 0 || x2apGUGroupIDList_p == NULL) {
                    X2AP_ERROR("Decoding of IE guGroupIDList failed\n");
                    if (x2apGUGroupIDList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                memcpy(&x2SetupRequest_IEs->guGroupIDList, x2apGUGroupIDList_p, sizeof(X2ap_GUGroupIDList_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2setuprequest_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_resourcestatusresponse_ies(
    X2ap_ResourceStatusResponse_IEs_t *x2ap_ResourceStatusResponse_IEs,
    ANY_t *any_p) {

    X2ap_ResourceStatusResponse_t  x2ap_ResourceStatusResponse;
    X2ap_ResourceStatusResponse_t *x2ap_ResourceStatusResponse_p = &x2ap_ResourceStatusResponse;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ResourceStatusResponse_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ResourceStatusResponse_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ResourceStatusResponse, (void**)&x2ap_ResourceStatusResponse_p);

    for (i = 0; i < x2ap_ResourceStatusResponse_p->x2ap_ResourceStatusResponse_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ResourceStatusResponse_p->x2ap_ResourceStatusResponse_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusResponse_IEs->enB1_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusResponse_IEs->enB2_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_ResourceStatusResponse_IEs->presenceMask |= X2AP_RESOURCESTATUSRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_ResourceStatusResponse_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_MeasurementInitiationResult_List:
            {
                X2ap_MeasurementInitiationResult_List_t *x2apMeasurementInitiationResultList_p = NULL;
                x2ap_ResourceStatusResponse_IEs->presenceMask |= X2AP_RESOURCESTATUSRESPONSE_IES_MEASUREMENTINITIATIONRESULT_LIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_MeasurementInitiationResult_List, (void**)&x2apMeasurementInitiationResultList_p);
                if (tempDecoded < 0 || x2apMeasurementInitiationResultList_p == NULL) {
                    X2AP_ERROR("Decoding of IE measurementInitiationResult_List failed\n");
                    if (x2apMeasurementInitiationResultList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_MeasurementInitiationResult_List, x2apMeasurementInitiationResultList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_MeasurementInitiationResult_List, x2apMeasurementInitiationResultList_p);
                if (x2ap_decode_x2ap_measurementinitiationresult_list(&x2ap_ResourceStatusResponse_IEs->measurementInitiationResult_List, x2apMeasurementInitiationResultList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apMeasurementInitiationResultList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_MeasurementInitiationResult_List, x2apMeasurementInitiationResultList_p);
                }
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_resourcestatusresponse_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2setupfailure_ies(
    X2SetupFailure_IEs_t *x2SetupFailure_IEs,
    ANY_t *any_p) {

    X2SetupFailure_t  x2SetupFailure;
    X2SetupFailure_t *x2SetupFailure_p = &x2SetupFailure;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2SetupFailure_IEs != NULL);

    X2AP_DEBUG("Decoding message X2SetupFailure_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2SetupFailure, (void**)&x2SetupFailure_p);

    for (i = 0; i < x2SetupFailure_p->x2SetupFailure_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2SetupFailure_p->x2SetupFailure_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2SetupFailure_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_TimeToWait:
            {
                X2ap_TimeToWait_t *x2apTimeToWait_p = NULL;
                x2SetupFailure_IEs->presenceMask |= X2SETUPFAILURE_IES_TIMETOWAIT_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_TimeToWait, (void**)&x2apTimeToWait_p);
                if (tempDecoded < 0 || x2apTimeToWait_p == NULL) {
                    X2AP_ERROR("Decoding of IE timeToWait failed\n");
                    if (x2apTimeToWait_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_TimeToWait, x2apTimeToWait_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_TimeToWait, x2apTimeToWait_p);
                memcpy(&x2SetupFailure_IEs->timeToWait, x2apTimeToWait_p, sizeof(X2ap_TimeToWait_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2SetupFailure_IEs->presenceMask |= X2SETUPFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2SetupFailure_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2setupfailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_enbconfigurationupdateacknowledge_ies(
    X2ap_ENBConfigurationUpdateAcknowledge_IEs_t *x2ap_ENBConfigurationUpdateAcknowledge_IEs,
    ANY_t *any_p) {

    X2ap_ENBConfigurationUpdateAcknowledge_t  x2ap_ENBConfigurationUpdateAcknowledge;
    X2ap_ENBConfigurationUpdateAcknowledge_t *x2ap_ENBConfigurationUpdateAcknowledge_p = &x2ap_ENBConfigurationUpdateAcknowledge;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ENBConfigurationUpdateAcknowledge_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ENBConfigurationUpdateAcknowledge_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ENBConfigurationUpdateAcknowledge, (void**)&x2ap_ENBConfigurationUpdateAcknowledge_p);

    for (i = 0; i < x2ap_ENBConfigurationUpdateAcknowledge_p->x2ap_ENBConfigurationUpdateAcknowledge_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ENBConfigurationUpdateAcknowledge_p->x2ap_ENBConfigurationUpdateAcknowledge_ies.list.array[i];
        switch(ie_p->id) {
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_ENBConfigurationUpdateAcknowledge_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_ENBConfigurationUpdateAcknowledge_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdateacknowledge_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_handoverpreparationfailure_ies(
    X2ap_HandoverPreparationFailure_IEs_t *x2ap_HandoverPreparationFailure_IEs,
    ANY_t *any_p) {

    X2ap_HandoverPreparationFailure_t  x2ap_HandoverPreparationFailure;
    X2ap_HandoverPreparationFailure_t *x2ap_HandoverPreparationFailure_p = &x2ap_HandoverPreparationFailure;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_HandoverPreparationFailure_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_HandoverPreparationFailure_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_HandoverPreparationFailure, (void**)&x2ap_HandoverPreparationFailure_p);

    for (i = 0; i < x2ap_HandoverPreparationFailure_p->x2ap_HandoverPreparationFailure_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_HandoverPreparationFailure_p->x2ap_HandoverPreparationFailure_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_HandoverPreparationFailure_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_HandoverPreparationFailure_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_HandoverPreparationFailure_IEs->presenceMask |= X2AP_HANDOVERPREPARATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_HandoverPreparationFailure_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_handoverpreparationfailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_resetrequest_ies(
    X2ap_ResetRequest_IEs_t *x2ap_ResetRequest_IEs,
    ANY_t *any_p) {

    X2ap_ResetRequest_t  x2ap_ResetRequest;
    X2ap_ResetRequest_t *x2ap_ResetRequest_p = &x2ap_ResetRequest;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ResetRequest_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ResetRequest_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ResetRequest, (void**)&x2ap_ResetRequest_p);

    for (i = 0; i < x2ap_ResetRequest_p->x2ap_ResetRequest_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ResetRequest_p->x2ap_ResetRequest_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_ResetRequest_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_resetrequest_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_rlfindication_ies(
    X2ap_RLFIndication_IEs_t *x2ap_RLFIndication_IEs,
    ANY_t *any_p) {

    X2ap_RLFIndication_t  x2ap_RLFIndication;
    X2ap_RLFIndication_t *x2ap_RLFIndication_p = &x2ap_RLFIndication;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_RLFIndication_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_RLFIndication_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_RLFIndication, (void**)&x2ap_RLFIndication_p);

    for (i = 0; i < x2ap_RLFIndication_p->x2ap_RLFIndication_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_RLFIndication_p->x2ap_RLFIndication_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_FailureCellPCI:
            {
                X2ap_PCI_t *x2apPCI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_PCI, (void**)&x2apPCI_p);
                if (tempDecoded < 0 || x2apPCI_p == NULL) {
                    X2AP_ERROR("Decoding of IE failureCellPCI failed\n");
                    if (x2apPCI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_PCI, x2apPCI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_PCI, x2apPCI_p);
                memcpy(&x2ap_RLFIndication_IEs->failureCellPCI, x2apPCI_p, sizeof(X2ap_PCI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Re_establishmentCellECGI:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE re_establishmentCellECGI failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_RLFIndication_IEs->re_establishmentCellECGI, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_FailureCellCRNTI:
            {
                X2ap_CRNTI_t *x2apCRNTI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CRNTI, (void**)&x2apCRNTI_p);
                if (tempDecoded < 0 || x2apCRNTI_p == NULL) {
                    X2AP_ERROR("Decoding of IE failureCellCRNTI failed\n");
                    if (x2apCRNTI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CRNTI, x2apCRNTI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CRNTI, x2apCRNTI_p);
                memcpy(&x2ap_RLFIndication_IEs->failureCellCRNTI, x2apCRNTI_p, sizeof(X2ap_CRNTI_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ShortMAC_I:
            {
                X2ap_ShortMAC_I_t *x2apShortMACI_p = NULL;
                x2ap_RLFIndication_IEs->presenceMask |= X2AP_RLFINDICATION_IES_SHORTMAC_I_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ShortMAC_I, (void**)&x2apShortMACI_p);
                if (tempDecoded < 0 || x2apShortMACI_p == NULL) {
                    X2AP_ERROR("Decoding of IE shortMAC_I failed\n");
                    if (x2apShortMACI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ShortMAC_I, x2apShortMACI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ShortMAC_I, x2apShortMACI_p);
                memcpy(&x2ap_RLFIndication_IEs->shortMAC_I, x2apShortMACI_p, sizeof(X2ap_ShortMAC_I_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_UE_RLF_Report_Container:
            {
                X2ap_UE_RLF_Report_Container_t *x2apUERLFReportContainer_p = NULL;
                x2ap_RLFIndication_IEs->presenceMask |= X2AP_RLFINDICATION_IES_UE_RLF_REPORT_CONTAINER_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_RLF_Report_Container, (void**)&x2apUERLFReportContainer_p);
                if (tempDecoded < 0 || x2apUERLFReportContainer_p == NULL) {
                    X2AP_ERROR("Decoding of IE uE_RLF_Report_Container failed\n");
                    if (x2apUERLFReportContainer_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_RLF_Report_Container, x2apUERLFReportContainer_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_RLF_Report_Container, x2apUERLFReportContainer_p);
                memcpy(&x2ap_RLFIndication_IEs->uE_RLF_Report_Container, x2apUERLFReportContainer_p, sizeof(X2ap_UE_RLF_Report_Container_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_RRCConnSetupIndicator:
            {
                X2ap_RRCConnSetupIndicator_t *x2apRRCConnSetupIndicator_p = NULL;
                x2ap_RLFIndication_IEs->presenceMask |= X2AP_RLFINDICATION_IES_RRCCONNSETUPINDICATOR_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_RRCConnSetupIndicator, (void**)&x2apRRCConnSetupIndicator_p);
                if (tempDecoded < 0 || x2apRRCConnSetupIndicator_p == NULL) {
                    X2AP_ERROR("Decoding of IE rrcConnSetupIndicator failed\n");
                    if (x2apRRCConnSetupIndicator_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_RRCConnSetupIndicator, x2apRRCConnSetupIndicator_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_RRCConnSetupIndicator, x2apRRCConnSetupIndicator_p);
                memcpy(&x2ap_RLFIndication_IEs->rrcConnSetupIndicator, x2apRRCConnSetupIndicator_p, sizeof(X2ap_RRCConnSetupIndicator_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_RRCConnReestabIndicator:
            {
                X2ap_RRCConnReestabIndicator_t *x2apRRCConnReestabIndicator_p = NULL;
                x2ap_RLFIndication_IEs->presenceMask |= X2AP_RLFINDICATION_IES_RRCCONNREESTABINDICATOR_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_RRCConnReestabIndicator, (void**)&x2apRRCConnReestabIndicator_p);
                if (tempDecoded < 0 || x2apRRCConnReestabIndicator_p == NULL) {
                    X2AP_ERROR("Decoding of IE rrcConnReestabIndicator failed\n");
                    if (x2apRRCConnReestabIndicator_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_RRCConnReestabIndicator, x2apRRCConnReestabIndicator_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_RRCConnReestabIndicator, x2apRRCConnReestabIndicator_p);
                memcpy(&x2ap_RLFIndication_IEs->rrcConnReestabIndicator, x2apRRCConnReestabIndicator_p, sizeof(X2ap_RRCConnReestabIndicator_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_rlfindication_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_mobilitychangefailure_ies(
    X2ap_MobilityChangeFailure_IEs_t *x2ap_MobilityChangeFailure_IEs,
    ANY_t *any_p) {

    X2ap_MobilityChangeFailure_t  x2ap_MobilityChangeFailure;
    X2ap_MobilityChangeFailure_t *x2ap_MobilityChangeFailure_p = &x2ap_MobilityChangeFailure;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_MobilityChangeFailure_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_MobilityChangeFailure_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_MobilityChangeFailure, (void**)&x2ap_MobilityChangeFailure_p);

    for (i = 0; i < x2ap_MobilityChangeFailure_p->x2ap_MobilityChangeFailure_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_MobilityChangeFailure_p->x2ap_MobilityChangeFailure_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Cell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Cell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_MobilityChangeFailure_IEs->enB1_Cell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Cell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Cell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_MobilityChangeFailure_IEs->enB2_Cell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_MobilityChangeFailure_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ENB2_Mobility_Parameters_Modification_Range:
            {
                X2ap_MobilityParametersModificationRange_t *x2apMobilityParametersModificationRange_p = NULL;
                x2ap_MobilityChangeFailure_IEs->presenceMask |= X2AP_MOBILITYCHANGEFAILURE_IES_ENB2_MOBILITY_PARAMETERS_MODIFICATION_RANGE_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_MobilityParametersModificationRange, (void**)&x2apMobilityParametersModificationRange_p);
                if (tempDecoded < 0 || x2apMobilityParametersModificationRange_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Mobility_Parameters_Modification_Range failed\n");
                    if (x2apMobilityParametersModificationRange_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_MobilityParametersModificationRange, x2apMobilityParametersModificationRange_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_MobilityParametersModificationRange, x2apMobilityParametersModificationRange_p);
                memcpy(&x2ap_MobilityChangeFailure_IEs->enB2_Mobility_Parameters_Modification_Range, x2apMobilityParametersModificationRange_p, sizeof(X2ap_MobilityParametersModificationRange_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_MobilityChangeFailure_IEs->presenceMask |= X2AP_MOBILITYCHANGEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_MobilityChangeFailure_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_mobilitychangefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_cellactivationrequest_ies(
    X2ap_CellActivationRequest_IEs_t *x2ap_CellActivationRequest_IEs,
    ANY_t *any_p) {

    X2ap_CellActivationRequest_t  x2ap_CellActivationRequest;
    X2ap_CellActivationRequest_t *x2ap_CellActivationRequest_p = &x2ap_CellActivationRequest;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_CellActivationRequest_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_CellActivationRequest_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_CellActivationRequest, (void**)&x2ap_CellActivationRequest_p);

    for (i = 0; i < x2ap_CellActivationRequest_p->x2ap_CellActivationRequest_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_CellActivationRequest_p->x2ap_CellActivationRequest_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ServedCellsToActivate:
            {
                X2ap_ServedCellsToActivate_t *x2apServedCellsToActivate_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ServedCellsToActivate, (void**)&x2apServedCellsToActivate_p);
                if (tempDecoded < 0 || x2apServedCellsToActivate_p == NULL) {
                    X2AP_ERROR("Decoding of IE servedCellsToActivate failed\n");
                    if (x2apServedCellsToActivate_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ServedCellsToActivate, x2apServedCellsToActivate_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ServedCellsToActivate, x2apServedCellsToActivate_p);
                memcpy(&x2ap_CellActivationRequest_IEs->servedCellsToActivate, x2apServedCellsToActivate_p, sizeof(X2ap_ServedCellsToActivate_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_cellactivationrequest_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_resourcestatusrequest_ies(
    X2ap_ResourceStatusRequest_IEs_t *x2ap_ResourceStatusRequest_IEs,
    ANY_t *any_p) {

    X2ap_ResourceStatusRequest_t  x2ap_ResourceStatusRequest;
    X2ap_ResourceStatusRequest_t *x2ap_ResourceStatusRequest_p = &x2ap_ResourceStatusRequest;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ResourceStatusRequest_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ResourceStatusRequest_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ResourceStatusRequest, (void**)&x2ap_ResourceStatusRequest_p);

    for (i = 0; i < x2ap_ResourceStatusRequest_p->x2ap_ResourceStatusRequest_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ResourceStatusRequest_p->x2ap_ResourceStatusRequest_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusRequest_IEs->enB1_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            /* Conditional field */
            case X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                x2ap_ResourceStatusRequest_IEs->presenceMask |= X2AP_RESOURCESTATUSREQUEST_IES_ENB2_MEASUREMENT_ID_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusRequest_IEs->enB2_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Registration_Request:
            {
                X2ap_Registration_Request_t *x2apRegistrationRequest_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Registration_Request, (void**)&x2apRegistrationRequest_p);
                if (tempDecoded < 0 || x2apRegistrationRequest_p == NULL) {
                    X2AP_ERROR("Decoding of IE registration_Request failed\n");
                    if (x2apRegistrationRequest_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Registration_Request, x2apRegistrationRequest_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Registration_Request, x2apRegistrationRequest_p);
                memcpy(&x2ap_ResourceStatusRequest_IEs->registration_Request, x2apRegistrationRequest_p, sizeof(X2ap_Registration_Request_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ReportCharacteristics:
            {
                X2ap_ReportCharacteristics_t *x2apReportCharacteristics_p = NULL;
                x2ap_ResourceStatusRequest_IEs->presenceMask |= X2AP_RESOURCESTATUSREQUEST_IES_REPORTCHARACTERISTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ReportCharacteristics, (void**)&x2apReportCharacteristics_p);
                if (tempDecoded < 0 || x2apReportCharacteristics_p == NULL) {
                    X2AP_ERROR("Decoding of IE reportCharacteristics failed\n");
                    if (x2apReportCharacteristics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ReportCharacteristics, x2apReportCharacteristics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ReportCharacteristics, x2apReportCharacteristics_p);
                memcpy(&x2ap_ResourceStatusRequest_IEs->reportCharacteristics, x2apReportCharacteristics_p, sizeof(X2ap_ReportCharacteristics_t));
            } break;
            case X2ap_ProtocolIE_ID_id_CellToReport:
            {
                X2ap_CellToReport_List_t *x2apCellToReportList_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CellToReport_List, (void**)&x2apCellToReportList_p);
                if (tempDecoded < 0 || x2apCellToReportList_p == NULL) {
                    X2AP_ERROR("Decoding of IE cellToReport failed\n");
                    if (x2apCellToReportList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CellToReport_List, x2apCellToReportList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CellToReport_List, x2apCellToReportList_p);
                if (x2ap_decode_x2ap_celltoreport_list(&x2ap_ResourceStatusRequest_IEs->cellToReport, x2apCellToReportList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apCellToReportList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_CellToReport_List, x2apCellToReportList_p);
                }
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ReportingPeriodicity:
            {
                X2ap_ReportingPeriodicity_t *x2apReportingPeriodicity_p = NULL;
                x2ap_ResourceStatusRequest_IEs->presenceMask |= X2AP_RESOURCESTATUSREQUEST_IES_REPORTINGPERIODICITY_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ReportingPeriodicity, (void**)&x2apReportingPeriodicity_p);
                if (tempDecoded < 0 || x2apReportingPeriodicity_p == NULL) {
                    X2AP_ERROR("Decoding of IE reportingPeriodicity failed\n");
                    if (x2apReportingPeriodicity_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ReportingPeriodicity, x2apReportingPeriodicity_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ReportingPeriodicity, x2apReportingPeriodicity_p);
                memcpy(&x2ap_ResourceStatusRequest_IEs->reportingPeriodicity, x2apReportingPeriodicity_p, sizeof(X2ap_ReportingPeriodicity_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_PartialSuccessIndicator:
            {
                X2ap_PartialSuccessIndicator_t *x2apPartialSuccessIndicator_p = NULL;
                x2ap_ResourceStatusRequest_IEs->presenceMask |= X2AP_RESOURCESTATUSREQUEST_IES_PARTIALSUCCESSINDICATOR_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_PartialSuccessIndicator, (void**)&x2apPartialSuccessIndicator_p);
                if (tempDecoded < 0 || x2apPartialSuccessIndicator_p == NULL) {
                    X2AP_ERROR("Decoding of IE partialSuccessIndicator failed\n");
                    if (x2apPartialSuccessIndicator_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_PartialSuccessIndicator, x2apPartialSuccessIndicator_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_PartialSuccessIndicator, x2apPartialSuccessIndicator_p);
                memcpy(&x2ap_ResourceStatusRequest_IEs->partialSuccessIndicator, x2apPartialSuccessIndicator_p, sizeof(X2ap_PartialSuccessIndicator_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_resourcestatusrequest_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_snstatustransfer_ies(
    X2ap_SNStatusTransfer_IEs_t *x2ap_SNStatusTransfer_IEs,
    ANY_t *any_p) {

    X2ap_SNStatusTransfer_t  x2ap_SNStatusTransfer;
    X2ap_SNStatusTransfer_t *x2ap_SNStatusTransfer_p = &x2ap_SNStatusTransfer;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_SNStatusTransfer_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_SNStatusTransfer_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_SNStatusTransfer, (void**)&x2ap_SNStatusTransfer_p);

    for (i = 0; i < x2ap_SNStatusTransfer_p->x2ap_SNStatusTransfer_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_SNStatusTransfer_p->x2ap_SNStatusTransfer_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_SNStatusTransfer_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE new_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_SNStatusTransfer_IEs->new_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_E_RABs_SubjectToStatusTransfer_List:
            {
                X2ap_E_RABs_SubjectToStatusTransfer_List_t *x2apERABsSubjectToStatusTransferList_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List, (void**)&x2apERABsSubjectToStatusTransferList_p);
                if (tempDecoded < 0 || x2apERABsSubjectToStatusTransferList_p == NULL) {
                    X2AP_ERROR("Decoding of IE e_RABs_SubjectToStatusTransfer_List failed\n");
                    if (x2apERABsSubjectToStatusTransferList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List, x2apERABsSubjectToStatusTransferList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List, x2apERABsSubjectToStatusTransferList_p);
                if (x2ap_decode_x2ap_e_rabs_subjecttostatustransfer_list(&x2ap_SNStatusTransfer_IEs->e_RABs_SubjectToStatusTransfer_List, x2apERABsSubjectToStatusTransferList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apERABsSubjectToStatusTransferList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List, x2apERABsSubjectToStatusTransferList_p);
                }
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_snstatustransfer_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_loadinformation_ies(
    X2ap_LoadInformation_IEs_t *x2ap_LoadInformation_IEs,
    ANY_t *any_p) {

    X2ap_LoadInformation_t  x2ap_LoadInformation;
    X2ap_LoadInformation_t *x2ap_LoadInformation_p = &x2ap_LoadInformation;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_LoadInformation_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_LoadInformation_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_LoadInformation, (void**)&x2ap_LoadInformation_p);

    for (i = 0; i < x2ap_LoadInformation_p->x2ap_LoadInformation_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_LoadInformation_p->x2ap_LoadInformation_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_CellInformation:
            {
                X2ap_CellInformation_List_t *x2apCellInformationList_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CellInformation_List, (void**)&x2apCellInformationList_p);
                if (tempDecoded < 0 || x2apCellInformationList_p == NULL) {
                    X2AP_ERROR("Decoding of IE cellInformation failed\n");
                    if (x2apCellInformationList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CellInformation_List, x2apCellInformationList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CellInformation_List, x2apCellInformationList_p);
                if (x2ap_decode_x2ap_cellinformation_list(&x2ap_LoadInformation_IEs->cellInformation, x2apCellInformationList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apCellInformationList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_CellInformation_List, x2apCellInformationList_p);
                }
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_loadinformation_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_cellactivationresponse_ies(
    X2ap_CellActivationResponse_IEs_t *x2ap_CellActivationResponse_IEs,
    ANY_t *any_p) {

    X2ap_CellActivationResponse_t  x2ap_CellActivationResponse;
    X2ap_CellActivationResponse_t *x2ap_CellActivationResponse_p = &x2ap_CellActivationResponse;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_CellActivationResponse_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_CellActivationResponse_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_CellActivationResponse, (void**)&x2ap_CellActivationResponse_p);

    for (i = 0; i < x2ap_CellActivationResponse_p->x2ap_CellActivationResponse_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_CellActivationResponse_p->x2ap_CellActivationResponse_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ActivatedCellList:
            {
                X2ap_ActivatedCellList_t *x2apActivatedCellList_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ActivatedCellList, (void**)&x2apActivatedCellList_p);
                if (tempDecoded < 0 || x2apActivatedCellList_p == NULL) {
                    X2AP_ERROR("Decoding of IE activatedCellList failed\n");
                    if (x2apActivatedCellList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ActivatedCellList, x2apActivatedCellList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ActivatedCellList, x2apActivatedCellList_p);
                memcpy(&x2ap_CellActivationResponse_IEs->activatedCellList, x2apActivatedCellList_p, sizeof(X2ap_ActivatedCellList_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_CellActivationResponse_IEs->presenceMask |= X2AP_CELLACTIVATIONRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_CellActivationResponse_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_cellactivationresponse_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_handoverreport_ies(
    X2ap_HandoverReport_IEs_t *x2ap_HandoverReport_IEs,
    ANY_t *any_p) {

    X2ap_HandoverReport_t  x2ap_HandoverReport;
    X2ap_HandoverReport_t *x2ap_HandoverReport_p = &x2ap_HandoverReport;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_HandoverReport_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_HandoverReport_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_HandoverReport, (void**)&x2ap_HandoverReport_p);

    for (i = 0; i < x2ap_HandoverReport_p->x2ap_HandoverReport_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_HandoverReport_p->x2ap_HandoverReport_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_HandoverReport_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            case X2ap_ProtocolIE_ID_id_SourceCellECGI:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE sourceCellECGI failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_HandoverReport_IEs->sourceCellECGI, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_FailureCellECGI:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE failureCellECGI failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_HandoverReport_IEs->failureCellECGI, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            /* Conditional field */
            case X2ap_ProtocolIE_ID_id_Re_establishmentCellECGI:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                x2ap_HandoverReport_IEs->presenceMask |= X2AP_HANDOVERREPORT_IES_RE_ESTABLISHMENTCELLECGI_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE re_establishmentCellECGI failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_HandoverReport_IEs->re_establishmentCellECGI, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            /* Conditional field */
            case X2ap_ProtocolIE_ID_id_TargetCellInUTRAN:
            {
                X2ap_TargetCellInUTRAN_t *x2apTargetCellInUTRAN_p = NULL;
                x2ap_HandoverReport_IEs->presenceMask |= X2AP_HANDOVERREPORT_IES_TARGETCELLINUTRAN_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_TargetCellInUTRAN, (void**)&x2apTargetCellInUTRAN_p);
                if (tempDecoded < 0 || x2apTargetCellInUTRAN_p == NULL) {
                    X2AP_ERROR("Decoding of IE targetCellInUTRAN failed\n");
                    if (x2apTargetCellInUTRAN_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_TargetCellInUTRAN, x2apTargetCellInUTRAN_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_TargetCellInUTRAN, x2apTargetCellInUTRAN_p);
                memcpy(&x2ap_HandoverReport_IEs->targetCellInUTRAN, x2apTargetCellInUTRAN_p, sizeof(X2ap_TargetCellInUTRAN_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_handoverreport_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_resourcestatusupdate_ies(
    X2ap_ResourceStatusUpdate_IEs_t *x2ap_ResourceStatusUpdate_IEs,
    ANY_t *any_p) {

    X2ap_ResourceStatusUpdate_t  x2ap_ResourceStatusUpdate;
    X2ap_ResourceStatusUpdate_t *x2ap_ResourceStatusUpdate_p = &x2ap_ResourceStatusUpdate;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ResourceStatusUpdate_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ResourceStatusUpdate_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ResourceStatusUpdate, (void**)&x2ap_ResourceStatusUpdate_p);

    for (i = 0; i < x2ap_ResourceStatusUpdate_p->x2ap_ResourceStatusUpdate_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ResourceStatusUpdate_p->x2ap_ResourceStatusUpdate_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusUpdate_IEs->enB1_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusUpdate_IEs->enB2_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_CellMeasurementResult:
            {
                X2ap_CellMeasurementResult_List_t *x2apCellMeasurementResultList_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CellMeasurementResult_List, (void**)&x2apCellMeasurementResultList_p);
                if (tempDecoded < 0 || x2apCellMeasurementResultList_p == NULL) {
                    X2AP_ERROR("Decoding of IE cellMeasurementResult failed\n");
                    if (x2apCellMeasurementResultList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CellMeasurementResult_List, x2apCellMeasurementResultList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CellMeasurementResult_List, x2apCellMeasurementResultList_p);
                if (x2ap_decode_x2ap_cellmeasurementresult_list(&x2ap_ResourceStatusUpdate_IEs->cellMeasurementResult, x2apCellMeasurementResultList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apCellMeasurementResultList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_CellMeasurementResult_List, x2apCellMeasurementResultList_p);
                }
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_resourcestatusupdate_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_resetresponse_ies(
    X2ap_ResetResponse_IEs_t *x2ap_ResetResponse_IEs,
    ANY_t *any_p) {

    X2ap_ResetResponse_t  x2ap_ResetResponse;
    X2ap_ResetResponse_t *x2ap_ResetResponse_p = &x2ap_ResetResponse;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ResetResponse_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ResetResponse_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ResetResponse, (void**)&x2ap_ResetResponse_p);

    for (i = 0; i < x2ap_ResetResponse_p->x2ap_ResetResponse_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ResetResponse_p->x2ap_ResetResponse_ies.list.array[i];
        switch(ie_p->id) {
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_ResetResponse_IEs->presenceMask |= X2AP_RESETRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_ResetResponse_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_resetresponse_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_handoverrequestacknowledge_ies(
    X2ap_HandoverRequestAcknowledge_IEs_t *x2ap_HandoverRequestAcknowledge_IEs,
    ANY_t *any_p) {

    X2ap_HandoverRequestAcknowledge_t  x2ap_HandoverRequestAcknowledge;
    X2ap_HandoverRequestAcknowledge_t *x2ap_HandoverRequestAcknowledge_p = &x2ap_HandoverRequestAcknowledge;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_HandoverRequestAcknowledge_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_HandoverRequestAcknowledge_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_HandoverRequestAcknowledge, (void**)&x2ap_HandoverRequestAcknowledge_p);

    for (i = 0; i < x2ap_HandoverRequestAcknowledge_p->x2ap_HandoverRequestAcknowledge_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_HandoverRequestAcknowledge_p->x2ap_HandoverRequestAcknowledge_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_HandoverRequestAcknowledge_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE new_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_HandoverRequestAcknowledge_IEs->new_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_E_RABs_Admitted_List:
            {
                X2ap_E_RABs_Admitted_List_t *x2apERABsAdmittedList_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_E_RABs_Admitted_List, (void**)&x2apERABsAdmittedList_p);
                if (tempDecoded < 0 || x2apERABsAdmittedList_p == NULL) {
                    X2AP_ERROR("Decoding of IE e_RABs_Admitted_List failed\n");
                    if (x2apERABsAdmittedList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_Admitted_List, x2apERABsAdmittedList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_E_RABs_Admitted_List, x2apERABsAdmittedList_p);
                if (x2ap_decode_x2ap_e_rabs_admitted_list(&x2ap_HandoverRequestAcknowledge_IEs->e_RABs_Admitted_List, x2apERABsAdmittedList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apERABsAdmittedList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_Admitted_List, x2apERABsAdmittedList_p);
                }
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_E_RABs_NotAdmitted_List:
            {
                X2ap_E_RAB_List_t *x2apERABList_p = NULL;
                x2ap_HandoverRequestAcknowledge_IEs->presenceMask |= X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_E_RABS_NOTADMITTED_LIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_E_RAB_List, (void**)&x2apERABList_p);
                if (tempDecoded < 0 || x2apERABList_p == NULL) {
                    X2AP_ERROR("Decoding of IE e_RABs_NotAdmitted_List failed\n");
                    if (x2apERABList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_E_RAB_List, x2apERABList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_E_RAB_List, x2apERABList_p);
                memcpy(&x2ap_HandoverRequestAcknowledge_IEs->e_RABs_NotAdmitted_List, x2apERABList_p, sizeof(X2ap_E_RAB_List_t));
            } break;
            case X2ap_ProtocolIE_ID_id_TargeteNBtoSource_eNBTransparentContainer:
            {
                X2ap_TargeteNBtoSource_eNBTransparentContainer_t *x2apTargeteNBtoSourceeNBTransparentContainer_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_TargeteNBtoSource_eNBTransparentContainer, (void**)&x2apTargeteNBtoSourceeNBTransparentContainer_p);
                if (tempDecoded < 0 || x2apTargeteNBtoSourceeNBTransparentContainer_p == NULL) {
                    X2AP_ERROR("Decoding of IE targeteNBtoSource_eNBTransparentContainer failed\n");
                    if (x2apTargeteNBtoSourceeNBTransparentContainer_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_TargeteNBtoSource_eNBTransparentContainer, x2apTargeteNBtoSourceeNBTransparentContainer_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_TargeteNBtoSource_eNBTransparentContainer, x2apTargeteNBtoSourceeNBTransparentContainer_p);
                memcpy(&x2ap_HandoverRequestAcknowledge_IEs->targeteNBtoSource_eNBTransparentContainer, x2apTargeteNBtoSourceeNBTransparentContainer_p, sizeof(X2ap_TargeteNBtoSource_eNBTransparentContainer_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_HandoverRequestAcknowledge_IEs->presenceMask |= X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_HandoverRequestAcknowledge_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_handoverrequestacknowledge_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_handoverrequest_ies(
    X2ap_HandoverRequest_IEs_t *x2ap_HandoverRequest_IEs,
    ANY_t *any_p) {

    X2ap_HandoverRequest_t  x2ap_HandoverRequest;
    X2ap_HandoverRequest_t *x2ap_HandoverRequest_p = &x2ap_HandoverRequest;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_HandoverRequest_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_HandoverRequest_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_HandoverRequest, (void**)&x2ap_HandoverRequest_p);

    for (i = 0; i < x2ap_HandoverRequest_p->x2ap_HandoverRequest_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_HandoverRequest_p->x2ap_HandoverRequest_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_HandoverRequest_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_HandoverRequest_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            case X2ap_ProtocolIE_ID_id_TargetCell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE targetCell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_HandoverRequest_IEs->targetCell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_GUMMEI_ID:
            {
                X2ap_GUMMEI_t *x2apGUMMEI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GUMMEI, (void**)&x2apGUMMEI_p);
                if (tempDecoded < 0 || x2apGUMMEI_p == NULL) {
                    X2AP_ERROR("Decoding of IE gummei_id failed\n");
                    if (x2apGUMMEI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GUMMEI, x2apGUMMEI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GUMMEI, x2apGUMMEI_p);
                memcpy(&x2ap_HandoverRequest_IEs->gummei_id, x2apGUMMEI_p, sizeof(X2ap_GUMMEI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_UE_ContextInformation:
            {
                X2ap_UE_ContextInformation_t *x2apUEContextInformation_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_ContextInformation, (void**)&x2apUEContextInformation_p);
                if (tempDecoded < 0 || x2apUEContextInformation_p == NULL) {
                    X2AP_ERROR("Decoding of IE uE_ContextInformation failed\n");
                    if (x2apUEContextInformation_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_ContextInformation, x2apUEContextInformation_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_ContextInformation, x2apUEContextInformation_p);
                memcpy(&x2ap_HandoverRequest_IEs->uE_ContextInformation, x2apUEContextInformation_p, sizeof(X2ap_UE_ContextInformation_t));
            } break;
            case X2ap_ProtocolIE_ID_id_UE_HistoryInformation:
            {
                X2ap_UE_HistoryInformation_t *x2apUEHistoryInformation_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_HistoryInformation, (void**)&x2apUEHistoryInformation_p);
                if (tempDecoded < 0 || x2apUEHistoryInformation_p == NULL) {
                    X2AP_ERROR("Decoding of IE uE_HistoryInformation failed\n");
                    if (x2apUEHistoryInformation_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_HistoryInformation, x2apUEHistoryInformation_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_HistoryInformation, x2apUEHistoryInformation_p);
                memcpy(&x2ap_HandoverRequest_IEs->uE_HistoryInformation, x2apUEHistoryInformation_p, sizeof(X2ap_UE_HistoryInformation_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_TraceActivation:
            {
                X2ap_TraceActivation_t *x2apTraceActivation_p = NULL;
                x2ap_HandoverRequest_IEs->presenceMask |= X2AP_HANDOVERREQUEST_IES_TRACEACTIVATION_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_TraceActivation, (void**)&x2apTraceActivation_p);
                if (tempDecoded < 0 || x2apTraceActivation_p == NULL) {
                    X2AP_ERROR("Decoding of IE traceActivation failed\n");
                    if (x2apTraceActivation_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_TraceActivation, x2apTraceActivation_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_TraceActivation, x2apTraceActivation_p);
                memcpy(&x2ap_HandoverRequest_IEs->traceActivation, x2apTraceActivation_p, sizeof(X2ap_TraceActivation_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_SRVCCOperationPossible:
            {
                X2ap_SRVCCOperationPossible_t *x2apSRVCCOperationPossible_p = NULL;
                x2ap_HandoverRequest_IEs->presenceMask |= X2AP_HANDOVERREQUEST_IES_SRVCCOPERATIONPOSSIBLE_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_SRVCCOperationPossible, (void**)&x2apSRVCCOperationPossible_p);
                if (tempDecoded < 0 || x2apSRVCCOperationPossible_p == NULL) {
                    X2AP_ERROR("Decoding of IE srvccOperationPossible failed\n");
                    if (x2apSRVCCOperationPossible_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_SRVCCOperationPossible, x2apSRVCCOperationPossible_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_SRVCCOperationPossible, x2apSRVCCOperationPossible_p);
                memcpy(&x2ap_HandoverRequest_IEs->srvccOperationPossible, x2apSRVCCOperationPossible_p, sizeof(X2ap_SRVCCOperationPossible_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CSGMembershipStatus:
            {
                X2ap_CSGMembershipStatus_t *x2apCSGMembershipStatus_p = NULL;
                x2ap_HandoverRequest_IEs->presenceMask |= X2AP_HANDOVERREQUEST_IES_CSGMEMBERSHIPSTATUS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CSGMembershipStatus, (void**)&x2apCSGMembershipStatus_p);
                if (tempDecoded < 0 || x2apCSGMembershipStatus_p == NULL) {
                    X2AP_ERROR("Decoding of IE csgMembershipStatus failed\n");
                    if (x2apCSGMembershipStatus_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CSGMembershipStatus, x2apCSGMembershipStatus_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CSGMembershipStatus, x2apCSGMembershipStatus_p);
                memcpy(&x2ap_HandoverRequest_IEs->csgMembershipStatus, x2apCSGMembershipStatus_p, sizeof(X2ap_CSGMembershipStatus_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_handoverrequest_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_mobilitychangerequest_ies(
    X2ap_MobilityChangeRequest_IEs_t *x2ap_MobilityChangeRequest_IEs,
    ANY_t *any_p) {

    X2ap_MobilityChangeRequest_t  x2ap_MobilityChangeRequest;
    X2ap_MobilityChangeRequest_t *x2ap_MobilityChangeRequest_p = &x2ap_MobilityChangeRequest;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_MobilityChangeRequest_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_MobilityChangeRequest_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_MobilityChangeRequest, (void**)&x2ap_MobilityChangeRequest_p);

    for (i = 0; i < x2ap_MobilityChangeRequest_p->x2ap_MobilityChangeRequest_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_MobilityChangeRequest_p->x2ap_MobilityChangeRequest_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Cell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Cell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_MobilityChangeRequest_IEs->enB1_Cell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Cell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Cell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_MobilityChangeRequest_IEs->enB2_Cell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ENB1_Mobility_Parameters:
            {
                X2ap_MobilityParametersInformation_t *x2apMobilityParametersInformation_p = NULL;
                x2ap_MobilityChangeRequest_IEs->presenceMask |= X2AP_MOBILITYCHANGEREQUEST_IES_ENB1_MOBILITY_PARAMETERS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_MobilityParametersInformation, (void**)&x2apMobilityParametersInformation_p);
                if (tempDecoded < 0 || x2apMobilityParametersInformation_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Mobility_Parameters failed\n");
                    if (x2apMobilityParametersInformation_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_MobilityParametersInformation, x2apMobilityParametersInformation_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_MobilityParametersInformation, x2apMobilityParametersInformation_p);
                memcpy(&x2ap_MobilityChangeRequest_IEs->enB1_Mobility_Parameters, x2apMobilityParametersInformation_p, sizeof(X2ap_MobilityParametersInformation_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Proposed_Mobility_Parameters:
            {
                X2ap_MobilityParametersInformation_t *x2apMobilityParametersInformation_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_MobilityParametersInformation, (void**)&x2apMobilityParametersInformation_p);
                if (tempDecoded < 0 || x2apMobilityParametersInformation_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Proposed_Mobility_Parameters failed\n");
                    if (x2apMobilityParametersInformation_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_MobilityParametersInformation, x2apMobilityParametersInformation_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_MobilityParametersInformation, x2apMobilityParametersInformation_p);
                memcpy(&x2ap_MobilityChangeRequest_IEs->enB2_Proposed_Mobility_Parameters, x2apMobilityParametersInformation_p, sizeof(X2ap_MobilityParametersInformation_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_MobilityChangeRequest_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_mobilitychangerequest_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_enbconfigurationupdate_ies(
    X2ap_ENBConfigurationUpdate_IEs_t *x2ap_ENBConfigurationUpdate_IEs,
    ANY_t *any_p) {

    X2ap_ENBConfigurationUpdate_t  x2ap_ENBConfigurationUpdate;
    X2ap_ENBConfigurationUpdate_t *x2ap_ENBConfigurationUpdate_p = &x2ap_ENBConfigurationUpdate;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ENBConfigurationUpdate_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ENBConfigurationUpdate_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ENBConfigurationUpdate, (void**)&x2ap_ENBConfigurationUpdate_p);

    for (i = 0; i < x2ap_ENBConfigurationUpdate_p->x2ap_ENBConfigurationUpdate_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ENBConfigurationUpdate_p->x2ap_ENBConfigurationUpdate_ies.list.array[i];
        switch(ie_p->id) {
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ServedCellsToAdd:
            {
                X2ap_ServedCells_t *x2apServedCells_p = NULL;
                x2ap_ENBConfigurationUpdate_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOADD_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ServedCells, (void**)&x2apServedCells_p);
                if (tempDecoded < 0 || x2apServedCells_p == NULL) {
                    X2AP_ERROR("Decoding of IE servedCellsToAdd failed\n");
                    if (x2apServedCells_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ServedCells, x2apServedCells_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ServedCells, x2apServedCells_p);
                memcpy(&x2ap_ENBConfigurationUpdate_IEs->servedCellsToAdd, x2apServedCells_p, sizeof(X2ap_ServedCells_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ServedCellsToModify:
            {
                X2ap_ServedCellsToModify_t *x2apServedCellsToModify_p = NULL;
                x2ap_ENBConfigurationUpdate_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOMODIFY_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ServedCellsToModify, (void**)&x2apServedCellsToModify_p);
                if (tempDecoded < 0 || x2apServedCellsToModify_p == NULL) {
                    X2AP_ERROR("Decoding of IE servedCellsToModify failed\n");
                    if (x2apServedCellsToModify_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ServedCellsToModify, x2apServedCellsToModify_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ServedCellsToModify, x2apServedCellsToModify_p);
                memcpy(&x2ap_ENBConfigurationUpdate_IEs->servedCellsToModify, x2apServedCellsToModify_p, sizeof(X2ap_ServedCellsToModify_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_ServedCellsToDelete:
            {
                X2ap_Old_ECGIs_t *x2apOldECGIs_p = NULL;
                x2ap_ENBConfigurationUpdate_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTODELETE_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Old_ECGIs, (void**)&x2apOldECGIs_p);
                if (tempDecoded < 0 || x2apOldECGIs_p == NULL) {
                    X2AP_ERROR("Decoding of IE servedCellsToDelete failed\n");
                    if (x2apOldECGIs_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Old_ECGIs, x2apOldECGIs_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Old_ECGIs, x2apOldECGIs_p);
                memcpy(&x2ap_ENBConfigurationUpdate_IEs->servedCellsToDelete, x2apOldECGIs_p, sizeof(X2ap_Old_ECGIs_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_GUGroupIDToAddList:
            {
                X2ap_GUGroupIDList_t *x2apGUGroupIDList_p = NULL;
                x2ap_ENBConfigurationUpdate_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTOADDLIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GUGroupIDList, (void**)&x2apGUGroupIDList_p);
                if (tempDecoded < 0 || x2apGUGroupIDList_p == NULL) {
                    X2AP_ERROR("Decoding of IE guGroupIDToAddList failed\n");
                    if (x2apGUGroupIDList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                memcpy(&x2ap_ENBConfigurationUpdate_IEs->guGroupIDToAddList, x2apGUGroupIDList_p, sizeof(X2ap_GUGroupIDList_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_GUGroupIDToDeleteList:
            {
                X2ap_GUGroupIDList_t *x2apGUGroupIDList_p = NULL;
                x2ap_ENBConfigurationUpdate_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTODELETELIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_GUGroupIDList, (void**)&x2apGUGroupIDList_p);
                if (tempDecoded < 0 || x2apGUGroupIDList_p == NULL) {
                    X2AP_ERROR("Decoding of IE guGroupIDToDeleteList failed\n");
                    if (x2apGUGroupIDList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_GUGroupIDList, x2apGUGroupIDList_p);
                memcpy(&x2ap_ENBConfigurationUpdate_IEs->guGroupIDToDeleteList, x2apGUGroupIDList_p, sizeof(X2ap_GUGroupIDList_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdate_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_uecontextrelease_ies(
    X2ap_UEContextRelease_IEs_t *x2ap_UEContextRelease_IEs,
    ANY_t *any_p) {

    X2ap_UEContextRelease_t  x2ap_UEContextRelease;
    X2ap_UEContextRelease_t *x2ap_UEContextRelease_p = &x2ap_UEContextRelease;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_UEContextRelease_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_UEContextRelease_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_UEContextRelease, (void**)&x2ap_UEContextRelease_p);

    for (i = 0; i < x2ap_UEContextRelease_p->x2ap_UEContextRelease_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_UEContextRelease_p->x2ap_UEContextRelease_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE old_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_UEContextRelease_IEs->old_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID:
            {
                X2ap_UE_X2AP_ID_t *x2apUEX2APID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_UE_X2AP_ID, (void**)&x2apUEX2APID_p);
                if (tempDecoded < 0 || x2apUEX2APID_p == NULL) {
                    X2AP_ERROR("Decoding of IE new_eNB_UE_X2AP_ID failed\n");
                    if (x2apUEX2APID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_UE_X2AP_ID, x2apUEX2APID_p);
                memcpy(&x2ap_UEContextRelease_IEs->new_eNB_UE_X2AP_ID, x2apUEX2APID_p, sizeof(X2ap_UE_X2AP_ID_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_uecontextrelease_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_resourcestatusfailure_ies(
    X2ap_ResourceStatusFailure_IEs_t *x2ap_ResourceStatusFailure_IEs,
    ANY_t *any_p) {

    X2ap_ResourceStatusFailure_t  x2ap_ResourceStatusFailure;
    X2ap_ResourceStatusFailure_t *x2ap_ResourceStatusFailure_p = &x2ap_ResourceStatusFailure;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ResourceStatusFailure_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ResourceStatusFailure_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ResourceStatusFailure, (void**)&x2ap_ResourceStatusFailure_p);

    for (i = 0; i < x2ap_ResourceStatusFailure_p->x2ap_ResourceStatusFailure_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ResourceStatusFailure_p->x2ap_ResourceStatusFailure_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusFailure_IEs->enB1_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID:
            {
                X2ap_Measurement_ID_t *x2apMeasurementID_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Measurement_ID, (void**)&x2apMeasurementID_p);
                if (tempDecoded < 0 || x2apMeasurementID_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Measurement_ID failed\n");
                    if (x2apMeasurementID_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Measurement_ID, x2apMeasurementID_p);
                memcpy(&x2ap_ResourceStatusFailure_IEs->enB2_Measurement_ID, x2apMeasurementID_p, sizeof(X2ap_Measurement_ID_t));
            } break;
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_ResourceStatusFailure_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_ResourceStatusFailure_IEs->presenceMask |= X2AP_RESOURCESTATUSFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_ResourceStatusFailure_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CompleteFailureCauseInformation_List:
            {
                X2ap_CompleteFailureCauseInformation_List_t *x2apCompleteFailureCauseInformationList_p = NULL;
                x2ap_ResourceStatusFailure_IEs->presenceMask |= X2AP_RESOURCESTATUSFAILURE_IES_COMPLETEFAILURECAUSEINFORMATION_LIST_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CompleteFailureCauseInformation_List, (void**)&x2apCompleteFailureCauseInformationList_p);
                if (tempDecoded < 0 || x2apCompleteFailureCauseInformationList_p == NULL) {
                    X2AP_ERROR("Decoding of IE completeFailureCauseInformation_List failed\n");
                    if (x2apCompleteFailureCauseInformationList_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CompleteFailureCauseInformation_List, x2apCompleteFailureCauseInformationList_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CompleteFailureCauseInformation_List, x2apCompleteFailureCauseInformationList_p);
                if (x2ap_decode_x2ap_completefailurecauseinformation_list(&x2ap_ResourceStatusFailure_IEs->completeFailureCauseInformation_List, x2apCompleteFailureCauseInformationList_p) < 0) {
                    X2AP_ERROR("Decoding of encapsulated IE x2apCompleteFailureCauseInformationList failed\n");
                    ASN_STRUCT_FREE(asn_DEF_X2ap_CompleteFailureCauseInformation_List, x2apCompleteFailureCauseInformationList_p);
                }
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_resourcestatusfailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_mobilitychangeacknowledge_ies(
    X2ap_MobilityChangeAcknowledge_IEs_t *x2ap_MobilityChangeAcknowledge_IEs,
    ANY_t *any_p) {

    X2ap_MobilityChangeAcknowledge_t  x2ap_MobilityChangeAcknowledge;
    X2ap_MobilityChangeAcknowledge_t *x2ap_MobilityChangeAcknowledge_p = &x2ap_MobilityChangeAcknowledge;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_MobilityChangeAcknowledge_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_MobilityChangeAcknowledge_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_MobilityChangeAcknowledge, (void**)&x2ap_MobilityChangeAcknowledge_p);

    for (i = 0; i < x2ap_MobilityChangeAcknowledge_p->x2ap_MobilityChangeAcknowledge_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_MobilityChangeAcknowledge_p->x2ap_MobilityChangeAcknowledge_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_ENB1_Cell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB1_Cell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_MobilityChangeAcknowledge_IEs->enB1_Cell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            case X2ap_ProtocolIE_ID_id_ENB2_Cell_ID:
            {
                X2ap_ECGI_t *x2apECGI_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_ECGI, (void**)&x2apECGI_p);
                if (tempDecoded < 0 || x2apECGI_p == NULL) {
                    X2AP_ERROR("Decoding of IE enB2_Cell_ID failed\n");
                    if (x2apECGI_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_ECGI, x2apECGI_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_ECGI, x2apECGI_p);
                memcpy(&x2ap_MobilityChangeAcknowledge_IEs->enB2_Cell_ID, x2apECGI_p, sizeof(X2ap_ECGI_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_MobilityChangeAcknowledge_IEs->presenceMask |= X2AP_MOBILITYCHANGEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_MobilityChangeAcknowledge_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_mobilitychangeacknowledge_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_enbconfigurationupdatefailure_ies(
    X2ap_ENBConfigurationUpdateFailure_IEs_t *x2ap_ENBConfigurationUpdateFailure_IEs,
    ANY_t *any_p) {

    X2ap_ENBConfigurationUpdateFailure_t  x2ap_ENBConfigurationUpdateFailure;
    X2ap_ENBConfigurationUpdateFailure_t *x2ap_ENBConfigurationUpdateFailure_p = &x2ap_ENBConfigurationUpdateFailure;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(x2ap_ENBConfigurationUpdateFailure_IEs != NULL);

    X2AP_DEBUG("Decoding message X2ap_ENBConfigurationUpdateFailure_IEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_X2ap_ENBConfigurationUpdateFailure, (void**)&x2ap_ENBConfigurationUpdateFailure_p);

    for (i = 0; i < x2ap_ENBConfigurationUpdateFailure_p->x2ap_ENBConfigurationUpdateFailure_ies.list.count; i++) {
        X2ap_IE_t *ie_p;
        ie_p = x2ap_ENBConfigurationUpdateFailure_p->x2ap_ENBConfigurationUpdateFailure_ies.list.array[i];
        switch(ie_p->id) {
            case X2ap_ProtocolIE_ID_id_Cause:
            {
                X2ap_Cause_t *x2apCause_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_Cause, (void**)&x2apCause_p);
                if (tempDecoded < 0 || x2apCause_p == NULL) {
                    X2AP_ERROR("Decoding of IE cause failed\n");
                    if (x2apCause_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_Cause, x2apCause_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_Cause, x2apCause_p);
                memcpy(&x2ap_ENBConfigurationUpdateFailure_IEs->cause, x2apCause_p, sizeof(X2ap_Cause_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_TimeToWait:
            {
                X2ap_TimeToWait_t *x2apTimeToWait_p = NULL;
                x2ap_ENBConfigurationUpdateFailure_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_TIMETOWAIT_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_TimeToWait, (void**)&x2apTimeToWait_p);
                if (tempDecoded < 0 || x2apTimeToWait_p == NULL) {
                    X2AP_ERROR("Decoding of IE timeToWait failed\n");
                    if (x2apTimeToWait_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_TimeToWait, x2apTimeToWait_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_TimeToWait, x2apTimeToWait_p);
                memcpy(&x2ap_ENBConfigurationUpdateFailure_IEs->timeToWait, x2apTimeToWait_p, sizeof(X2ap_TimeToWait_t));
            } break;
            /* Optional field */
            case X2ap_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                X2ap_CriticalityDiagnostics_t *x2apCriticalityDiagnostics_p = NULL;
                x2ap_ENBConfigurationUpdateFailure_IEs->presenceMask |= X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CriticalityDiagnostics, (void**)&x2apCriticalityDiagnostics_p);
                if (tempDecoded < 0 || x2apCriticalityDiagnostics_p == NULL) {
                    X2AP_ERROR("Decoding of IE criticalityDiagnostics failed\n");
                    if (x2apCriticalityDiagnostics_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CriticalityDiagnostics, x2apCriticalityDiagnostics_p);
                memcpy(&x2ap_ENBConfigurationUpdateFailure_IEs->criticalityDiagnostics, x2apCriticalityDiagnostics_p, sizeof(X2ap_CriticalityDiagnostics_t));
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_cellinformation_list(
    X2ap_CellInformation_ListIEs_t *x2ap_CellInformation_ListIEs,
    X2ap_CellInformation_List_t *x2ap_CellInformation_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_CellInformation_List != NULL);
    assert(x2ap_CellInformation_ListIEs != NULL);

    for (i = 0; i < x2ap_CellInformation_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_CellInformation_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_CellInformation_Item:
            {
                X2ap_CellInformation_Item_t *x2apCellInformationItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CellInformation_Item, (void**)&x2apCellInformationItem_p);
                if (tempDecoded < 0 || x2apCellInformationItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE cellInformation_Item for message X2ap_CellInformation_List failed\n");
                    if (x2apCellInformationItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CellInformation_Item, x2apCellInformationItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CellInformation_Item, x2apCellInformationItem_p);
                ASN_SEQUENCE_ADD(&x2ap_CellInformation_ListIEs->x2ap_CellInformation_Item, x2apCellInformationItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_measurementfailurecause_list(
    X2ap_MeasurementFailureCause_ListIEs_t *x2ap_MeasurementFailureCause_ListIEs,
    X2ap_MeasurementFailureCause_List_t *x2ap_MeasurementFailureCause_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_MeasurementFailureCause_List != NULL);
    assert(x2ap_MeasurementFailureCause_ListIEs != NULL);

    for (i = 0; i < x2ap_MeasurementFailureCause_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_MeasurementFailureCause_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_MeasurementFailureCause_Item:
            {
                X2ap_MeasurementFailureCause_Item_t *x2apMeasurementFailureCauseItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_MeasurementFailureCause_Item, (void**)&x2apMeasurementFailureCauseItem_p);
                if (tempDecoded < 0 || x2apMeasurementFailureCauseItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE measurementFailureCause_Item for message X2ap_MeasurementFailureCause_List failed\n");
                    if (x2apMeasurementFailureCauseItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_MeasurementFailureCause_Item, x2apMeasurementFailureCauseItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_MeasurementFailureCause_Item, x2apMeasurementFailureCauseItem_p);
                ASN_SEQUENCE_ADD(&x2ap_MeasurementFailureCause_ListIEs->x2ap_MeasurementFailureCause_Item, x2apMeasurementFailureCauseItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_completefailurecauseinformation_list(
    X2ap_CompleteFailureCauseInformation_ListIEs_t *x2ap_CompleteFailureCauseInformation_ListIEs,
    X2ap_CompleteFailureCauseInformation_List_t *x2ap_CompleteFailureCauseInformation_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_CompleteFailureCauseInformation_List != NULL);
    assert(x2ap_CompleteFailureCauseInformation_ListIEs != NULL);

    for (i = 0; i < x2ap_CompleteFailureCauseInformation_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_CompleteFailureCauseInformation_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_CompleteFailureCauseInformation_Item:
            {
                X2ap_CompleteFailureCauseInformation_Item_t *x2apCompleteFailureCauseInformationItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CompleteFailureCauseInformation_Item, (void**)&x2apCompleteFailureCauseInformationItem_p);
                if (tempDecoded < 0 || x2apCompleteFailureCauseInformationItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE completeFailureCauseInformation_Item for message X2ap_CompleteFailureCauseInformation_List failed\n");
                    if (x2apCompleteFailureCauseInformationItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CompleteFailureCauseInformation_Item, x2apCompleteFailureCauseInformationItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CompleteFailureCauseInformation_Item, x2apCompleteFailureCauseInformationItem_p);
                ASN_SEQUENCE_ADD(&x2ap_CompleteFailureCauseInformation_ListIEs->x2ap_CompleteFailureCauseInformation_Item, x2apCompleteFailureCauseInformationItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_e_rabs_tobesetup_list(
    X2ap_E_RABs_ToBeSetup_ListIEs_t *x2ap_E_RABs_ToBeSetup_ListIEs,
    X2ap_E_RABs_ToBeSetup_List_t *x2ap_E_RABs_ToBeSetup_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_E_RABs_ToBeSetup_List != NULL);
    assert(x2ap_E_RABs_ToBeSetup_ListIEs != NULL);

    for (i = 0; i < x2ap_E_RABs_ToBeSetup_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_E_RABs_ToBeSetup_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_E_RABs_ToBeSetup_Item:
            {
                X2ap_E_RABs_ToBeSetup_Item_t *x2apERABsToBeSetupItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_E_RABs_ToBeSetup_Item, (void**)&x2apERABsToBeSetupItem_p);
                if (tempDecoded < 0 || x2apERABsToBeSetupItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE e_RABs_ToBeSetup_Item for message X2ap_E_RABs_ToBeSetup_List failed\n");
                    if (x2apERABsToBeSetupItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_ToBeSetup_Item, x2apERABsToBeSetupItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_E_RABs_ToBeSetup_Item, x2apERABsToBeSetupItem_p);
                ASN_SEQUENCE_ADD(&x2ap_E_RABs_ToBeSetup_ListIEs->x2ap_E_RABs_ToBeSetup_Item, x2apERABsToBeSetupItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_e_rabs_subjecttostatustransfer_list(
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t *x2ap_E_RABs_SubjectToStatusTransfer_ListIEs,
    X2ap_E_RABs_SubjectToStatusTransfer_List_t *x2ap_E_RABs_SubjectToStatusTransfer_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_E_RABs_SubjectToStatusTransfer_List != NULL);
    assert(x2ap_E_RABs_SubjectToStatusTransfer_ListIEs != NULL);

    for (i = 0; i < x2ap_E_RABs_SubjectToStatusTransfer_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_E_RABs_SubjectToStatusTransfer_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_E_RABs_SubjectToStatusTransfer_Item:
            {
                X2ap_E_RABs_SubjectToStatusTransfer_Item_t *x2apERABsSubjectToStatusTransferItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_Item, (void**)&x2apERABsSubjectToStatusTransferItem_p);
                if (tempDecoded < 0 || x2apERABsSubjectToStatusTransferItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE e_RABs_SubjectToStatusTransfer_Item for message X2ap_E_RABs_SubjectToStatusTransfer_List failed\n");
                    if (x2apERABsSubjectToStatusTransferItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_Item, x2apERABsSubjectToStatusTransferItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_Item, x2apERABsSubjectToStatusTransferItem_p);
                ASN_SEQUENCE_ADD(&x2ap_E_RABs_SubjectToStatusTransfer_ListIEs->x2ap_E_RABs_SubjectToStatusTransfer_Item, x2apERABsSubjectToStatusTransferItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_celltoreport_list(
    X2ap_CellToReport_ListIEs_t *x2ap_CellToReport_ListIEs,
    X2ap_CellToReport_List_t *x2ap_CellToReport_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_CellToReport_List != NULL);
    assert(x2ap_CellToReport_ListIEs != NULL);

    for (i = 0; i < x2ap_CellToReport_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_CellToReport_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_CellToReport_Item:
            {
                X2ap_CellToReport_Item_t *x2apCellToReportItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CellToReport_Item, (void**)&x2apCellToReportItem_p);
                if (tempDecoded < 0 || x2apCellToReportItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE cellToReport_Item for message X2ap_CellToReport_List failed\n");
                    if (x2apCellToReportItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CellToReport_Item, x2apCellToReportItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CellToReport_Item, x2apCellToReportItem_p);
                ASN_SEQUENCE_ADD(&x2ap_CellToReport_ListIEs->x2ap_CellToReport_Item, x2apCellToReportItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_measurementinitiationresult_list(
    X2ap_MeasurementInitiationResult_ListIEs_t *x2ap_MeasurementInitiationResult_ListIEs,
    X2ap_MeasurementInitiationResult_List_t *x2ap_MeasurementInitiationResult_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_MeasurementInitiationResult_List != NULL);
    assert(x2ap_MeasurementInitiationResult_ListIEs != NULL);

    for (i = 0; i < x2ap_MeasurementInitiationResult_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_MeasurementInitiationResult_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_MeasurementInitiationResult_Item:
            {
                X2ap_MeasurementInitiationResult_Item_t *x2apMeasurementInitiationResultItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_MeasurementInitiationResult_Item, (void**)&x2apMeasurementInitiationResultItem_p);
                if (tempDecoded < 0 || x2apMeasurementInitiationResultItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE measurementInitiationResult_Item for message X2ap_MeasurementInitiationResult_List failed\n");
                    if (x2apMeasurementInitiationResultItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_MeasurementInitiationResult_Item, x2apMeasurementInitiationResultItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_MeasurementInitiationResult_Item, x2apMeasurementInitiationResultItem_p);
                ASN_SEQUENCE_ADD(&x2ap_MeasurementInitiationResult_ListIEs->x2ap_MeasurementInitiationResult_Item, x2apMeasurementInitiationResultItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_cellmeasurementresult_list(
    X2ap_CellMeasurementResult_ListIEs_t *x2ap_CellMeasurementResult_ListIEs,
    X2ap_CellMeasurementResult_List_t *x2ap_CellMeasurementResult_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_CellMeasurementResult_List != NULL);
    assert(x2ap_CellMeasurementResult_ListIEs != NULL);

    for (i = 0; i < x2ap_CellMeasurementResult_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_CellMeasurementResult_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_CellMeasurementResult_Item:
            {
                X2ap_CellMeasurementResult_Item_t *x2apCellMeasurementResultItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_CellMeasurementResult_Item, (void**)&x2apCellMeasurementResultItem_p);
                if (tempDecoded < 0 || x2apCellMeasurementResultItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE cellMeasurementResult_Item for message X2ap_CellMeasurementResult_List failed\n");
                    if (x2apCellMeasurementResultItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_CellMeasurementResult_Item, x2apCellMeasurementResultItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_CellMeasurementResult_Item, x2apCellMeasurementResultItem_p);
                ASN_SEQUENCE_ADD(&x2ap_CellMeasurementResult_ListIEs->x2ap_CellMeasurementResult_Item, x2apCellMeasurementResultItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int x2ap_decode_x2ap_e_rabs_admitted_list(
    X2ap_E_RABs_Admitted_ListIEs_t *x2ap_E_RABs_Admitted_ListIEs,
    X2ap_E_RABs_Admitted_List_t *x2ap_E_RABs_Admitted_List) {

    int i, decoded = 0;
    int tempDecoded = 0;

    assert(x2ap_E_RABs_Admitted_List != NULL);
    assert(x2ap_E_RABs_Admitted_ListIEs != NULL);

    for (i = 0; i < x2ap_E_RABs_Admitted_List->list.count; i++) {
        X2ap_IE_t *ie_p = x2ap_E_RABs_Admitted_List->list.array[i];
        switch (ie_p->id) {
            case X2ap_ProtocolIE_ID_id_E_RABs_Admitted_Item:
            {
                X2ap_E_RABs_Admitted_Item_t *x2apERABsAdmittedItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_X2ap_E_RABs_Admitted_Item, (void**)&x2apERABsAdmittedItem_p);
                if (tempDecoded < 0 || x2apERABsAdmittedItem_p == NULL) {
                    X2AP_ERROR("Decoding of IE e_RABs_Admitted_Item for message X2ap_E_RABs_Admitted_List failed\n");
                    if (x2apERABsAdmittedItem_p)
                        ASN_STRUCT_FREE(asn_DEF_X2ap_E_RABs_Admitted_Item, x2apERABsAdmittedItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_X2ap_E_RABs_Admitted_Item, x2apERABsAdmittedItem_p);
                ASN_SEQUENCE_ADD(&x2ap_E_RABs_Admitted_ListIEs->x2ap_E_RABs_Admitted_Item, x2apERABsAdmittedItem_p);
            } break;
            default:
                X2AP_ERROR("Unknown protocol IE id (%d) for message x2ap_enbconfigurationupdatefailure_ies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

