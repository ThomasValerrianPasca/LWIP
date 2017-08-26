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
 * Created on: 2017-08-26 22:57:22.779111 by oai
 * from ['/home/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-PDU-Contents.asn']
 ******************************************************************************/
#include "x2ap_common.h"
#include "x2ap_ies_defs.h"

int x2ap_encode_x2setupresponse_ies(
    X2SetupResponse_t *x2SetupResponse,
    X2SetupResponse_IEs_t *x2SetupResponse_IEs) {

    X2ap_IE_t *ie;

    assert(x2SetupResponse != NULL);
    assert(x2SetupResponse_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GlobalENB_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_GlobalENB_ID,
                          &x2SetupResponse_IEs->globalENB_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2SetupResponse->x2SetupResponse_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ServedCells,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ServedCells,
                          &x2SetupResponse_IEs->servedCells)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2SetupResponse->x2SetupResponse_ies.list, ie);

    /* Optional field */
    if (x2SetupResponse_IEs->presenceMask & X2SETUPRESPONSE_IES_GUGROUPIDLIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GUGroupIDList,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_GUGroupIDList,
                            &x2SetupResponse_IEs->guGroupIDList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2SetupResponse->x2SetupResponse_ies.list, ie);
    }

    /* Optional field */
    if (x2SetupResponse_IEs->presenceMask & X2SETUPRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2SetupResponse_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2SetupResponse->x2SetupResponse_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_handovercancel_ies(
    X2ap_HandoverCancel_t *x2ap_HandoverCancel,
    X2ap_HandoverCancel_IEs_t *x2ap_HandoverCancel_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_HandoverCancel != NULL);
    assert(x2ap_HandoverCancel_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_HandoverCancel_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverCancel->x2ap_HandoverCancel_ies.list, ie);

    /* Optional field */
    if (x2ap_HandoverCancel_IEs->presenceMask & X2AP_HANDOVERCANCEL_IES_NEW_ENB_UE_X2AP_ID_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_UE_X2AP_ID,
                            &x2ap_HandoverCancel_IEs->new_eNB_UE_X2AP_ID)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverCancel->x2ap_HandoverCancel_ies.list, ie);
    }

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_HandoverCancel_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverCancel->x2ap_HandoverCancel_ies.list, ie);

    return 0;
}

int x2ap_encode_x2ap_errorindication_ies(
    X2ap_ErrorIndication_t *x2ap_ErrorIndication,
    X2ap_ErrorIndication_IEs_t *x2ap_ErrorIndication_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ErrorIndication != NULL);
    assert(x2ap_ErrorIndication_IEs != NULL);

    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_OLD_ENB_UE_X2AP_ID_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_UE_X2AP_ID,
                            &x2ap_ErrorIndication_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ErrorIndication->x2ap_ErrorIndication_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_NEW_ENB_UE_X2AP_ID_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_UE_X2AP_ID,
                            &x2ap_ErrorIndication_IEs->new_eNB_UE_X2AP_ID)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ErrorIndication->x2ap_ErrorIndication_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_CAUSE_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_Cause,
                            &x2ap_ErrorIndication_IEs->cause)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ErrorIndication->x2ap_ErrorIndication_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ErrorIndication_IEs->presenceMask & X2AP_ERRORINDICATION_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_ErrorIndication_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ErrorIndication->x2ap_ErrorIndication_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_cellactivationfailure_ies(
    X2ap_CellActivationFailure_t *x2ap_CellActivationFailure,
    X2ap_CellActivationFailure_IEs_t *x2ap_CellActivationFailure_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_CellActivationFailure != NULL);
    assert(x2ap_CellActivationFailure_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_CellActivationFailure_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_CellActivationFailure->x2ap_CellActivationFailure_ies.list, ie);

    /* Optional field */
    if (x2ap_CellActivationFailure_IEs->presenceMask & X2AP_CELLACTIVATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_CellActivationFailure_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_CellActivationFailure->x2ap_CellActivationFailure_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2setuprequest_ies(
    X2SetupRequest_t *x2SetupRequest,
    X2SetupRequest_IEs_t *x2SetupRequest_IEs) {

    X2ap_IE_t *ie;

    assert(x2SetupRequest != NULL);
    assert(x2SetupRequest_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GlobalENB_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_GlobalENB_ID,
                          &x2SetupRequest_IEs->globalENB_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2SetupRequest->x2SetupRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ServedCells,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ServedCells,
                          &x2SetupRequest_IEs->servedCells)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2SetupRequest->x2SetupRequest_ies.list, ie);

    /* Optional field */
    if (x2SetupRequest_IEs->presenceMask & X2SETUPREQUEST_IES_GUGROUPIDLIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GUGroupIDList,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_GUGroupIDList,
                            &x2SetupRequest_IEs->guGroupIDList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2SetupRequest->x2SetupRequest_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_resourcestatusresponse_ies(
    X2ap_ResourceStatusResponse_t *x2ap_ResourceStatusResponse,
    X2ap_ResourceStatusResponse_IEs_t *x2ap_ResourceStatusResponse_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ResourceStatusResponse != NULL);
    assert(x2ap_ResourceStatusResponse_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusResponse_IEs->enB1_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusResponse->x2ap_ResourceStatusResponse_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusResponse_IEs->enB2_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusResponse->x2ap_ResourceStatusResponse_ies.list, ie);

    /* Optional field */
    if (x2ap_ResourceStatusResponse_IEs->presenceMask & X2AP_RESOURCESTATUSRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_ResourceStatusResponse_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusResponse->x2ap_ResourceStatusResponse_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ResourceStatusResponse_IEs->presenceMask & X2AP_RESOURCESTATUSRESPONSE_IES_MEASUREMENTINITIATIONRESULT_LIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_MeasurementInitiationResult_List,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_MeasurementInitiationResult_List,
                            &x2ap_ResourceStatusResponse_IEs->measurementInitiationResult_List)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusResponse->x2ap_ResourceStatusResponse_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2setupfailure_ies(
    X2SetupFailure_t *x2SetupFailure,
    X2SetupFailure_IEs_t *x2SetupFailure_IEs) {

    X2ap_IE_t *ie;

    assert(x2SetupFailure != NULL);
    assert(x2SetupFailure_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2SetupFailure_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2SetupFailure->x2SetupFailure_ies.list, ie);

    /* Optional field */
    if (x2SetupFailure_IEs->presenceMask & X2SETUPFAILURE_IES_TIMETOWAIT_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_TimeToWait,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_TimeToWait,
                            &x2SetupFailure_IEs->timeToWait)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2SetupFailure->x2SetupFailure_ies.list, ie);
    }

    /* Optional field */
    if (x2SetupFailure_IEs->presenceMask & X2SETUPFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2SetupFailure_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2SetupFailure->x2SetupFailure_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_enbconfigurationupdateacknowledge_ies(
    X2ap_ENBConfigurationUpdateAcknowledge_t *x2ap_ENBConfigurationUpdateAcknowledge,
    X2ap_ENBConfigurationUpdateAcknowledge_IEs_t *x2ap_ENBConfigurationUpdateAcknowledge_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ENBConfigurationUpdateAcknowledge != NULL);
    assert(x2ap_ENBConfigurationUpdateAcknowledge_IEs != NULL);

    /* Optional field */
    if (x2ap_ENBConfigurationUpdateAcknowledge_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_ENBConfigurationUpdateAcknowledge_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdateAcknowledge->x2ap_ENBConfigurationUpdateAcknowledge_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_handoverpreparationfailure_ies(
    X2ap_HandoverPreparationFailure_t *x2ap_HandoverPreparationFailure,
    X2ap_HandoverPreparationFailure_IEs_t *x2ap_HandoverPreparationFailure_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_HandoverPreparationFailure != NULL);
    assert(x2ap_HandoverPreparationFailure_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_HandoverPreparationFailure_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverPreparationFailure->x2ap_HandoverPreparationFailure_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_HandoverPreparationFailure_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverPreparationFailure->x2ap_HandoverPreparationFailure_ies.list, ie);

    /* Optional field */
    if (x2ap_HandoverPreparationFailure_IEs->presenceMask & X2AP_HANDOVERPREPARATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_HandoverPreparationFailure_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverPreparationFailure->x2ap_HandoverPreparationFailure_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_resetrequest_ies(
    X2ap_ResetRequest_t *x2ap_ResetRequest,
    X2ap_ResetRequest_IEs_t *x2ap_ResetRequest_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ResetRequest != NULL);
    assert(x2ap_ResetRequest_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_ResetRequest_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResetRequest->x2ap_ResetRequest_ies.list, ie);

    return 0;
}

int x2ap_encode_x2ap_rlfindication_ies(
    X2ap_RLFIndication_t *x2ap_RLFIndication,
    X2ap_RLFIndication_IEs_t *x2ap_RLFIndication_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_RLFIndication != NULL);
    assert(x2ap_RLFIndication_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_FailureCellPCI,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_PCI,
                          &x2ap_RLFIndication_IEs->failureCellPCI)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Re_establishmentCellECGI,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_RLFIndication_IEs->re_establishmentCellECGI)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_FailureCellCRNTI,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_CRNTI,
                          &x2ap_RLFIndication_IEs->failureCellCRNTI)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);

    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_SHORTMAC_I_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ShortMAC_I,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_ShortMAC_I,
                            &x2ap_RLFIndication_IEs->shortMAC_I)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_UE_RLF_REPORT_CONTAINER_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_UE_RLF_Report_Container,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_UE_RLF_Report_Container,
                            &x2ap_RLFIndication_IEs->uE_RLF_Report_Container)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_RRCCONNSETUPINDICATOR_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_RRCConnSetupIndicator,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_RRCConnSetupIndicator,
                            &x2ap_RLFIndication_IEs->rrcConnSetupIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_RLFIndication_IEs->presenceMask & X2AP_RLFINDICATION_IES_RRCCONNREESTABINDICATOR_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_RRCConnReestabIndicator,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_RRCConnReestabIndicator,
                            &x2ap_RLFIndication_IEs->rrcConnReestabIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_RLFIndication->x2ap_RLFIndication_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_mobilitychangefailure_ies(
    X2ap_MobilityChangeFailure_t *x2ap_MobilityChangeFailure,
    X2ap_MobilityChangeFailure_IEs_t *x2ap_MobilityChangeFailure_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_MobilityChangeFailure != NULL);
    assert(x2ap_MobilityChangeFailure_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Cell_ID,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_MobilityChangeFailure_IEs->enB1_Cell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeFailure->x2ap_MobilityChangeFailure_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Cell_ID,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_MobilityChangeFailure_IEs->enB2_Cell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeFailure->x2ap_MobilityChangeFailure_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_MobilityChangeFailure_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeFailure->x2ap_MobilityChangeFailure_ies.list, ie);

    /* Optional field */
    if (x2ap_MobilityChangeFailure_IEs->presenceMask & X2AP_MOBILITYCHANGEFAILURE_IES_ENB2_MOBILITY_PARAMETERS_MODIFICATION_RANGE_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Mobility_Parameters_Modification_Range,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_MobilityParametersModificationRange,
                            &x2ap_MobilityChangeFailure_IEs->enB2_Mobility_Parameters_Modification_Range)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_MobilityChangeFailure->x2ap_MobilityChangeFailure_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_MobilityChangeFailure_IEs->presenceMask & X2AP_MOBILITYCHANGEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_MobilityChangeFailure_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_MobilityChangeFailure->x2ap_MobilityChangeFailure_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_cellactivationrequest_ies(
    X2ap_CellActivationRequest_t *x2ap_CellActivationRequest,
    X2ap_CellActivationRequest_IEs_t *x2ap_CellActivationRequest_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_CellActivationRequest != NULL);
    assert(x2ap_CellActivationRequest_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ServedCellsToActivate,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ServedCellsToActivate,
                          &x2ap_CellActivationRequest_IEs->servedCellsToActivate)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_CellActivationRequest->x2ap_CellActivationRequest_ies.list, ie);

    return 0;
}

int x2ap_encode_x2ap_resourcestatusrequest_ies(
    X2ap_ResourceStatusRequest_t *x2ap_ResourceStatusRequest,
    X2ap_ResourceStatusRequest_IEs_t *x2ap_ResourceStatusRequest_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ResourceStatusRequest != NULL);
    assert(x2ap_ResourceStatusRequest_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusRequest_IEs->enB1_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);

    /* Conditional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_ENB2_MEASUREMENT_ID_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_Measurement_ID,
                            &x2ap_ResourceStatusRequest_IEs->enB2_Measurement_ID)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);
    }

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Registration_Request,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Registration_Request,
                          &x2ap_ResourceStatusRequest_IEs->registration_Request)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);

    /* Optional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_REPORTCHARACTERISTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ReportCharacteristics,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_ReportCharacteristics,
                            &x2ap_ResourceStatusRequest_IEs->reportCharacteristics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);
    }

    X2ap_CellToReport_List_t cellToReport;

    memset(&cellToReport, 0, sizeof(X2ap_CellToReport_List_t));

    if (x2ap_encode_x2ap_celltoreport_list(&cellToReport, &x2ap_ResourceStatusRequest_IEs->cellToReport) < 0) return -1;
    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CellToReport,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_CellToReport_List,
                          &cellToReport)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_X2ap_CellToReport_List, &cellToReport);

    /* Optional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_REPORTINGPERIODICITY_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ReportingPeriodicity,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_ReportingPeriodicity,
                            &x2ap_ResourceStatusRequest_IEs->reportingPeriodicity)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ResourceStatusRequest_IEs->presenceMask & X2AP_RESOURCESTATUSREQUEST_IES_PARTIALSUCCESSINDICATOR_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_PartialSuccessIndicator,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_PartialSuccessIndicator,
                            &x2ap_ResourceStatusRequest_IEs->partialSuccessIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusRequest->x2ap_ResourceStatusRequest_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_snstatustransfer_ies(
    X2ap_SNStatusTransfer_t *x2ap_SNStatusTransfer,
    X2ap_SNStatusTransfer_IEs_t *x2ap_SNStatusTransfer_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_SNStatusTransfer != NULL);
    assert(x2ap_SNStatusTransfer_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_SNStatusTransfer_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_SNStatusTransfer->x2ap_SNStatusTransfer_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_SNStatusTransfer_IEs->new_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_SNStatusTransfer->x2ap_SNStatusTransfer_ies.list, ie);

    X2ap_E_RABs_SubjectToStatusTransfer_List_t e_RABs_SubjectToStatusTransfer_List;

    memset(&e_RABs_SubjectToStatusTransfer_List, 0, sizeof(X2ap_E_RABs_SubjectToStatusTransfer_List_t));

    if (x2ap_encode_x2ap_e_rabs_subjecttostatustransfer_list(&e_RABs_SubjectToStatusTransfer_List, &x2ap_SNStatusTransfer_IEs->e_RABs_SubjectToStatusTransfer_List) < 0) return -1;
    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_E_RABs_SubjectToStatusTransfer_List,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List,
                          &e_RABs_SubjectToStatusTransfer_List)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_SNStatusTransfer->x2ap_SNStatusTransfer_ies.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List, &e_RABs_SubjectToStatusTransfer_List);

    return 0;
}

int x2ap_encode_x2ap_loadinformation_ies(
    X2ap_LoadInformation_t *x2ap_LoadInformation,
    X2ap_LoadInformation_IEs_t *x2ap_LoadInformation_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_LoadInformation != NULL);
    assert(x2ap_LoadInformation_IEs != NULL);

    X2ap_CellInformation_List_t cellInformation;

    memset(&cellInformation, 0, sizeof(X2ap_CellInformation_List_t));

    if (x2ap_encode_x2ap_cellinformation_list(&cellInformation, &x2ap_LoadInformation_IEs->cellInformation) < 0) return -1;
    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CellInformation,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_CellInformation_List,
                          &cellInformation)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_LoadInformation->x2ap_LoadInformation_ies.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_X2ap_CellInformation_List, &cellInformation);

    return 0;
}

int x2ap_encode_x2ap_cellactivationresponse_ies(
    X2ap_CellActivationResponse_t *x2ap_CellActivationResponse,
    X2ap_CellActivationResponse_IEs_t *x2ap_CellActivationResponse_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_CellActivationResponse != NULL);
    assert(x2ap_CellActivationResponse_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ActivatedCellList,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_ActivatedCellList,
                          &x2ap_CellActivationResponse_IEs->activatedCellList)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_CellActivationResponse->x2ap_CellActivationResponse_ies.list, ie);

    /* Optional field */
    if (x2ap_CellActivationResponse_IEs->presenceMask & X2AP_CELLACTIVATIONRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_CellActivationResponse_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_CellActivationResponse->x2ap_CellActivationResponse_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_handoverreport_ies(
    X2ap_HandoverReport_t *x2ap_HandoverReport,
    X2ap_HandoverReport_IEs_t *x2ap_HandoverReport_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_HandoverReport != NULL);
    assert(x2ap_HandoverReport_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_HandoverReport_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverReport->x2ap_HandoverReport_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_SourceCellECGI,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_HandoverReport_IEs->sourceCellECGI)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverReport->x2ap_HandoverReport_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_FailureCellECGI,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_HandoverReport_IEs->failureCellECGI)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverReport->x2ap_HandoverReport_ies.list, ie);

    /* Conditional field */
    if (x2ap_HandoverReport_IEs->presenceMask & X2AP_HANDOVERREPORT_IES_RE_ESTABLISHMENTCELLECGI_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Re_establishmentCellECGI,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_ECGI,
                            &x2ap_HandoverReport_IEs->re_establishmentCellECGI)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverReport->x2ap_HandoverReport_ies.list, ie);
    }

    /* Conditional field */
    if (x2ap_HandoverReport_IEs->presenceMask & X2AP_HANDOVERREPORT_IES_TARGETCELLINUTRAN_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_TargetCellInUTRAN,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_TargetCellInUTRAN,
                            &x2ap_HandoverReport_IEs->targetCellInUTRAN)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverReport->x2ap_HandoverReport_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_resourcestatusupdate_ies(
    X2ap_ResourceStatusUpdate_t *x2ap_ResourceStatusUpdate,
    X2ap_ResourceStatusUpdate_IEs_t *x2ap_ResourceStatusUpdate_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ResourceStatusUpdate != NULL);
    assert(x2ap_ResourceStatusUpdate_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusUpdate_IEs->enB1_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusUpdate->x2ap_ResourceStatusUpdate_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusUpdate_IEs->enB2_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusUpdate->x2ap_ResourceStatusUpdate_ies.list, ie);

    X2ap_CellMeasurementResult_List_t cellMeasurementResult;

    memset(&cellMeasurementResult, 0, sizeof(X2ap_CellMeasurementResult_List_t));

    if (x2ap_encode_x2ap_cellmeasurementresult_list(&cellMeasurementResult, &x2ap_ResourceStatusUpdate_IEs->cellMeasurementResult) < 0) return -1;
    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CellMeasurementResult,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_CellMeasurementResult_List,
                          &cellMeasurementResult)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusUpdate->x2ap_ResourceStatusUpdate_ies.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_X2ap_CellMeasurementResult_List, &cellMeasurementResult);

    return 0;
}

int x2ap_encode_x2ap_resetresponse_ies(
    X2ap_ResetResponse_t *x2ap_ResetResponse,
    X2ap_ResetResponse_IEs_t *x2ap_ResetResponse_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ResetResponse != NULL);
    assert(x2ap_ResetResponse_IEs != NULL);

    /* Optional field */
    if (x2ap_ResetResponse_IEs->presenceMask & X2AP_RESETRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_ResetResponse_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResetResponse->x2ap_ResetResponse_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_handoverrequestacknowledge_ies(
    X2ap_HandoverRequestAcknowledge_t *x2ap_HandoverRequestAcknowledge,
    X2ap_HandoverRequestAcknowledge_IEs_t *x2ap_HandoverRequestAcknowledge_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_HandoverRequestAcknowledge != NULL);
    assert(x2ap_HandoverRequestAcknowledge_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_HandoverRequestAcknowledge_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequestAcknowledge->x2ap_HandoverRequestAcknowledge_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_HandoverRequestAcknowledge_IEs->new_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequestAcknowledge->x2ap_HandoverRequestAcknowledge_ies.list, ie);

    X2ap_E_RABs_Admitted_List_t e_RABs_Admitted_List;

    memset(&e_RABs_Admitted_List, 0, sizeof(X2ap_E_RABs_Admitted_List_t));

    if (x2ap_encode_x2ap_e_rabs_admitted_list(&e_RABs_Admitted_List, &x2ap_HandoverRequestAcknowledge_IEs->e_RABs_Admitted_List) < 0) return -1;
    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_E_RABs_Admitted_List,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_E_RABs_Admitted_List,
                          &e_RABs_Admitted_List)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequestAcknowledge->x2ap_HandoverRequestAcknowledge_ies.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_X2ap_E_RABs_Admitted_List, &e_RABs_Admitted_List);

    /* Optional field */
    if (x2ap_HandoverRequestAcknowledge_IEs->presenceMask & X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_E_RABS_NOTADMITTED_LIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_E_RABs_NotAdmitted_List,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_E_RAB_List,
                            &x2ap_HandoverRequestAcknowledge_IEs->e_RABs_NotAdmitted_List)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverRequestAcknowledge->x2ap_HandoverRequestAcknowledge_ies.list, ie);
    }

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_TargeteNBtoSource_eNBTransparentContainer,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_TargeteNBtoSource_eNBTransparentContainer,
                          &x2ap_HandoverRequestAcknowledge_IEs->targeteNBtoSource_eNBTransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequestAcknowledge->x2ap_HandoverRequestAcknowledge_ies.list, ie);

    /* Optional field */
    if (x2ap_HandoverRequestAcknowledge_IEs->presenceMask & X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_HandoverRequestAcknowledge_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverRequestAcknowledge->x2ap_HandoverRequestAcknowledge_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_handoverrequest_ies(
    X2ap_HandoverRequest_t *x2ap_HandoverRequest,
    X2ap_HandoverRequest_IEs_t *x2ap_HandoverRequest_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_HandoverRequest != NULL);
    assert(x2ap_HandoverRequest_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_HandoverRequest_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_HandoverRequest_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_TargetCell_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_HandoverRequest_IEs->targetCell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GUMMEI_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_GUMMEI,
                          &x2ap_HandoverRequest_IEs->gummei_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_UE_ContextInformation,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_ContextInformation,
                          &x2ap_HandoverRequest_IEs->uE_ContextInformation)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_UE_HistoryInformation,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_UE_HistoryInformation,
                          &x2ap_HandoverRequest_IEs->uE_HistoryInformation)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);

    /* Optional field */
    if (x2ap_HandoverRequest_IEs->presenceMask & X2AP_HANDOVERREQUEST_IES_TRACEACTIVATION_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_TraceActivation,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_TraceActivation,
                            &x2ap_HandoverRequest_IEs->traceActivation)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_HandoverRequest_IEs->presenceMask & X2AP_HANDOVERREQUEST_IES_SRVCCOPERATIONPOSSIBLE_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_SRVCCOperationPossible,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_SRVCCOperationPossible,
                            &x2ap_HandoverRequest_IEs->srvccOperationPossible)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_HandoverRequest_IEs->presenceMask & X2AP_HANDOVERREQUEST_IES_CSGMEMBERSHIPSTATUS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CSGMembershipStatus,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_CSGMembershipStatus,
                            &x2ap_HandoverRequest_IEs->csgMembershipStatus)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_HandoverRequest->x2ap_HandoverRequest_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_mobilitychangerequest_ies(
    X2ap_MobilityChangeRequest_t *x2ap_MobilityChangeRequest,
    X2ap_MobilityChangeRequest_IEs_t *x2ap_MobilityChangeRequest_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_MobilityChangeRequest != NULL);
    assert(x2ap_MobilityChangeRequest_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Cell_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_MobilityChangeRequest_IEs->enB1_Cell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeRequest->x2ap_MobilityChangeRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Cell_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_MobilityChangeRequest_IEs->enB2_Cell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeRequest->x2ap_MobilityChangeRequest_ies.list, ie);

    /* Optional field */
    if (x2ap_MobilityChangeRequest_IEs->presenceMask & X2AP_MOBILITYCHANGEREQUEST_IES_ENB1_MOBILITY_PARAMETERS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Mobility_Parameters,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_MobilityParametersInformation,
                            &x2ap_MobilityChangeRequest_IEs->enB1_Mobility_Parameters)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_MobilityChangeRequest->x2ap_MobilityChangeRequest_ies.list, ie);
    }

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Proposed_Mobility_Parameters,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_MobilityParametersInformation,
                          &x2ap_MobilityChangeRequest_IEs->enB2_Proposed_Mobility_Parameters)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeRequest->x2ap_MobilityChangeRequest_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_MobilityChangeRequest_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeRequest->x2ap_MobilityChangeRequest_ies.list, ie);

    return 0;
}

int x2ap_encode_x2ap_enbconfigurationupdate_ies(
    X2ap_ENBConfigurationUpdate_t *x2ap_ENBConfigurationUpdate,
    X2ap_ENBConfigurationUpdate_IEs_t *x2ap_ENBConfigurationUpdate_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ENBConfigurationUpdate != NULL);
    assert(x2ap_ENBConfigurationUpdate_IEs != NULL);

    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOADD_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ServedCellsToAdd,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_ServedCells,
                            &x2ap_ENBConfigurationUpdate_IEs->servedCellsToAdd)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdate->x2ap_ENBConfigurationUpdate_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOMODIFY_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ServedCellsToModify,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_ServedCellsToModify,
                            &x2ap_ENBConfigurationUpdate_IEs->servedCellsToModify)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdate->x2ap_ENBConfigurationUpdate_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTODELETE_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ServedCellsToDelete,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_Old_ECGIs,
                            &x2ap_ENBConfigurationUpdate_IEs->servedCellsToDelete)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdate->x2ap_ENBConfigurationUpdate_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTOADDLIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GUGroupIDToAddList,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_GUGroupIDList,
                            &x2ap_ENBConfigurationUpdate_IEs->guGroupIDToAddList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdate->x2ap_ENBConfigurationUpdate_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ENBConfigurationUpdate_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTODELETELIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_GUGroupIDToDeleteList,
                            X2ap_Criticality_reject,
                            &asn_DEF_X2ap_GUGroupIDList,
                            &x2ap_ENBConfigurationUpdate_IEs->guGroupIDToDeleteList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdate->x2ap_ENBConfigurationUpdate_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_uecontextrelease_ies(
    X2ap_UEContextRelease_t *x2ap_UEContextRelease,
    X2ap_UEContextRelease_IEs_t *x2ap_UEContextRelease_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_UEContextRelease != NULL);
    assert(x2ap_UEContextRelease_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_UEContextRelease_IEs->old_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_UEContextRelease->x2ap_UEContextRelease_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_New_eNB_UE_X2AP_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_UE_X2AP_ID,
                          &x2ap_UEContextRelease_IEs->new_eNB_UE_X2AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_UEContextRelease->x2ap_UEContextRelease_ies.list, ie);

    return 0;
}

int x2ap_encode_x2ap_resourcestatusfailure_ies(
    X2ap_ResourceStatusFailure_t *x2ap_ResourceStatusFailure,
    X2ap_ResourceStatusFailure_IEs_t *x2ap_ResourceStatusFailure_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ResourceStatusFailure != NULL);
    assert(x2ap_ResourceStatusFailure_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusFailure_IEs->enB1_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusFailure->x2ap_ResourceStatusFailure_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Measurement_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_Measurement_ID,
                          &x2ap_ResourceStatusFailure_IEs->enB2_Measurement_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusFailure->x2ap_ResourceStatusFailure_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_ResourceStatusFailure_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ResourceStatusFailure->x2ap_ResourceStatusFailure_ies.list, ie);

    /* Optional field */
    if (x2ap_ResourceStatusFailure_IEs->presenceMask & X2AP_RESOURCESTATUSFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_ResourceStatusFailure_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusFailure->x2ap_ResourceStatusFailure_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ResourceStatusFailure_IEs->presenceMask & X2AP_RESOURCESTATUSFAILURE_IES_COMPLETEFAILURECAUSEINFORMATION_LIST_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CompleteFailureCauseInformation_List,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CompleteFailureCauseInformation_List,
                            &x2ap_ResourceStatusFailure_IEs->completeFailureCauseInformation_List)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ResourceStatusFailure->x2ap_ResourceStatusFailure_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_mobilitychangeacknowledge_ies(
    X2ap_MobilityChangeAcknowledge_t *x2ap_MobilityChangeAcknowledge,
    X2ap_MobilityChangeAcknowledge_IEs_t *x2ap_MobilityChangeAcknowledge_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_MobilityChangeAcknowledge != NULL);
    assert(x2ap_MobilityChangeAcknowledge_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB1_Cell_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_MobilityChangeAcknowledge_IEs->enB1_Cell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeAcknowledge->x2ap_MobilityChangeAcknowledge_ies.list, ie);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_ENB2_Cell_ID,
                        X2ap_Criticality_reject,
                        &asn_DEF_X2ap_ECGI,
                          &x2ap_MobilityChangeAcknowledge_IEs->enB2_Cell_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_MobilityChangeAcknowledge->x2ap_MobilityChangeAcknowledge_ies.list, ie);

    /* Optional field */
    if (x2ap_MobilityChangeAcknowledge_IEs->presenceMask & X2AP_MOBILITYCHANGEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_MobilityChangeAcknowledge_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_MobilityChangeAcknowledge->x2ap_MobilityChangeAcknowledge_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_enbconfigurationupdatefailure_ies(
    X2ap_ENBConfigurationUpdateFailure_t *x2ap_ENBConfigurationUpdateFailure,
    X2ap_ENBConfigurationUpdateFailure_IEs_t *x2ap_ENBConfigurationUpdateFailure_IEs) {

    X2ap_IE_t *ie;

    assert(x2ap_ENBConfigurationUpdateFailure != NULL);
    assert(x2ap_ENBConfigurationUpdateFailure_IEs != NULL);

    if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_Cause,
                        X2ap_Criticality_ignore,
                        &asn_DEF_X2ap_Cause,
                          &x2ap_ENBConfigurationUpdateFailure_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdateFailure->x2ap_ENBConfigurationUpdateFailure_ies.list, ie);

    /* Optional field */
    if (x2ap_ENBConfigurationUpdateFailure_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_TIMETOWAIT_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_TimeToWait,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_TimeToWait,
                            &x2ap_ENBConfigurationUpdateFailure_IEs->timeToWait)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdateFailure->x2ap_ENBConfigurationUpdateFailure_ies.list, ie);
    }

    /* Optional field */
    if (x2ap_ENBConfigurationUpdateFailure_IEs->presenceMask & X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CriticalityDiagnostics,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CriticalityDiagnostics,
                            &x2ap_ENBConfigurationUpdateFailure_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_ENBConfigurationUpdateFailure->x2ap_ENBConfigurationUpdateFailure_ies.list, ie);
    }

    return 0;
}

int x2ap_encode_x2ap_cellinformation_list(
    X2ap_CellInformation_List_t *x2ap_CellInformation_List,
    X2ap_CellInformation_ListIEs_t *x2ap_CellInformation_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_CellInformation_List != NULL);
    assert(x2ap_CellInformation_ListIEs != NULL);

    for (i = 0; i < x2ap_CellInformation_ListIEs->x2ap_CellInformation_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CellInformation_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CellInformation_Item,
                            x2ap_CellInformation_ListIEs->x2ap_CellInformation_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_CellInformation_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_measurementfailurecause_list(
    X2ap_MeasurementFailureCause_List_t *x2ap_MeasurementFailureCause_List,
    X2ap_MeasurementFailureCause_ListIEs_t *x2ap_MeasurementFailureCause_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_MeasurementFailureCause_List != NULL);
    assert(x2ap_MeasurementFailureCause_ListIEs != NULL);

    for (i = 0; i < x2ap_MeasurementFailureCause_ListIEs->x2ap_MeasurementFailureCause_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_MeasurementFailureCause_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_MeasurementFailureCause_Item,
                            x2ap_MeasurementFailureCause_ListIEs->x2ap_MeasurementFailureCause_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_MeasurementFailureCause_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_completefailurecauseinformation_list(
    X2ap_CompleteFailureCauseInformation_List_t *x2ap_CompleteFailureCauseInformation_List,
    X2ap_CompleteFailureCauseInformation_ListIEs_t *x2ap_CompleteFailureCauseInformation_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_CompleteFailureCauseInformation_List != NULL);
    assert(x2ap_CompleteFailureCauseInformation_ListIEs != NULL);

    for (i = 0; i < x2ap_CompleteFailureCauseInformation_ListIEs->x2ap_CompleteFailureCauseInformation_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CompleteFailureCauseInformation_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CompleteFailureCauseInformation_Item,
                            x2ap_CompleteFailureCauseInformation_ListIEs->x2ap_CompleteFailureCauseInformation_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_CompleteFailureCauseInformation_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_e_rabs_tobesetup_list(
    X2ap_E_RABs_ToBeSetup_List_t *x2ap_E_RABs_ToBeSetup_List,
    X2ap_E_RABs_ToBeSetup_ListIEs_t *x2ap_E_RABs_ToBeSetup_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_E_RABs_ToBeSetup_List != NULL);
    assert(x2ap_E_RABs_ToBeSetup_ListIEs != NULL);

    for (i = 0; i < x2ap_E_RABs_ToBeSetup_ListIEs->x2ap_E_RABs_ToBeSetup_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_E_RABs_ToBeSetup_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_E_RABs_ToBeSetup_Item,
                            x2ap_E_RABs_ToBeSetup_ListIEs->x2ap_E_RABs_ToBeSetup_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_E_RABs_ToBeSetup_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_e_rabs_subjecttostatustransfer_list(
    X2ap_E_RABs_SubjectToStatusTransfer_List_t *x2ap_E_RABs_SubjectToStatusTransfer_List,
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t *x2ap_E_RABs_SubjectToStatusTransfer_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_E_RABs_SubjectToStatusTransfer_List != NULL);
    assert(x2ap_E_RABs_SubjectToStatusTransfer_ListIEs != NULL);

    for (i = 0; i < x2ap_E_RABs_SubjectToStatusTransfer_ListIEs->x2ap_E_RABs_SubjectToStatusTransfer_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_E_RABs_SubjectToStatusTransfer_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_Item,
                            x2ap_E_RABs_SubjectToStatusTransfer_ListIEs->x2ap_E_RABs_SubjectToStatusTransfer_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_E_RABs_SubjectToStatusTransfer_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_celltoreport_list(
    X2ap_CellToReport_List_t *x2ap_CellToReport_List,
    X2ap_CellToReport_ListIEs_t *x2ap_CellToReport_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_CellToReport_List != NULL);
    assert(x2ap_CellToReport_ListIEs != NULL);

    for (i = 0; i < x2ap_CellToReport_ListIEs->x2ap_CellToReport_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CellToReport_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CellToReport_Item,
                            x2ap_CellToReport_ListIEs->x2ap_CellToReport_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_CellToReport_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_measurementinitiationresult_list(
    X2ap_MeasurementInitiationResult_List_t *x2ap_MeasurementInitiationResult_List,
    X2ap_MeasurementInitiationResult_ListIEs_t *x2ap_MeasurementInitiationResult_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_MeasurementInitiationResult_List != NULL);
    assert(x2ap_MeasurementInitiationResult_ListIEs != NULL);

    for (i = 0; i < x2ap_MeasurementInitiationResult_ListIEs->x2ap_MeasurementInitiationResult_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_MeasurementInitiationResult_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_MeasurementInitiationResult_Item,
                            x2ap_MeasurementInitiationResult_ListIEs->x2ap_MeasurementInitiationResult_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_MeasurementInitiationResult_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_cellmeasurementresult_list(
    X2ap_CellMeasurementResult_List_t *x2ap_CellMeasurementResult_List,
    X2ap_CellMeasurementResult_ListIEs_t *x2ap_CellMeasurementResult_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_CellMeasurementResult_List != NULL);
    assert(x2ap_CellMeasurementResult_ListIEs != NULL);

    for (i = 0; i < x2ap_CellMeasurementResult_ListIEs->x2ap_CellMeasurementResult_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_CellMeasurementResult_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_CellMeasurementResult_Item,
                            x2ap_CellMeasurementResult_ListIEs->x2ap_CellMeasurementResult_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_CellMeasurementResult_List->list, ie);
    }
    return 0;
}

int x2ap_encode_x2ap_e_rabs_admitted_list(
    X2ap_E_RABs_Admitted_List_t *x2ap_E_RABs_Admitted_List,
    X2ap_E_RABs_Admitted_ListIEs_t *x2ap_E_RABs_Admitted_ListIEs) {

    int i;
    X2ap_IE_t *ie;

    assert(x2ap_E_RABs_Admitted_List != NULL);
    assert(x2ap_E_RABs_Admitted_ListIEs != NULL);

    for (i = 0; i < x2ap_E_RABs_Admitted_ListIEs->x2ap_E_RABs_Admitted_Item.count; i++) {
        if ((ie = x2ap_new_ie(X2ap_ProtocolIE_ID_id_E_RABs_Admitted_Item,
                            X2ap_Criticality_ignore,
                            &asn_DEF_X2ap_E_RABs_Admitted_Item,
                            x2ap_E_RABs_Admitted_ListIEs->x2ap_E_RABs_Admitted_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&x2ap_E_RABs_Admitted_List->list, ie);
    }
    return 0;
}

