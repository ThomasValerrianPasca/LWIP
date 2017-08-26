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
 * Created on: 2017-08-26 22:34:47.337671 by oai
 * from ['/home/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-PDU-Contents.asn']
 ******************************************************************************/
#include "x2ap_common.h"

#ifndef X2AP_IES_DEFS_H_
#define X2AP_IES_DEFS_H_

/* Define the version of script used to generate this file */
#define X2AP_SCRIPT_VERSION (102)

typedef struct X2ap_CellInformation_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_CellInformation_Item_s) x2ap_CellInformation_Item;
} X2ap_CellInformation_ListIEs_t;

typedef struct X2ap_MeasurementFailureCause_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_MeasurementFailureCause_Item_s) x2ap_MeasurementFailureCause_Item;
} X2ap_MeasurementFailureCause_ListIEs_t;

typedef struct X2ap_CompleteFailureCauseInformation_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_CompleteFailureCauseInformation_Item_s) x2ap_CompleteFailureCauseInformation_Item;
} X2ap_CompleteFailureCauseInformation_ListIEs_t;

typedef struct X2ap_E_RABs_ToBeSetup_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_E_RABs_ToBeSetup_Item_s) x2ap_E_RABs_ToBeSetup_Item;
} X2ap_E_RABs_ToBeSetup_ListIEs_t;

typedef struct X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_E_RABs_SubjectToStatusTransfer_Item_s) x2ap_E_RABs_SubjectToStatusTransfer_Item;
} X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t;

typedef struct X2ap_CellToReport_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_CellToReport_Item_s) x2ap_CellToReport_Item;
} X2ap_CellToReport_ListIEs_t;

typedef struct X2ap_MeasurementInitiationResult_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_MeasurementInitiationResult_Item_s) x2ap_MeasurementInitiationResult_Item;
} X2ap_MeasurementInitiationResult_ListIEs_t;

typedef struct X2ap_CellMeasurementResult_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_CellMeasurementResult_Item_s) x2ap_CellMeasurementResult_Item;
} X2ap_CellMeasurementResult_ListIEs_t;

typedef struct X2ap_E_RABs_Admitted_ListIEs_s {
    A_SEQUENCE_OF(struct X2ap_E_RABs_Admitted_Item_s) x2ap_E_RABs_Admitted_Item;
} X2ap_E_RABs_Admitted_ListIEs_t;

#define X2SETUPRESPONSE_IES_GUGROUPIDLIST_PRESENT               (1 << 0)
#define X2SETUPRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 1)

typedef struct X2SetupResponse_IEs_s {
    uint16_t                      presenceMask;
    X2ap_GlobalENB_ID_t           globalENB_ID;
    X2ap_ServedCells_t            servedCells;
    X2ap_GUGroupIDList_t          guGroupIDList; ///< Optional field
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2SetupResponse_IEs_t;

#define X2AP_HANDOVERCANCEL_IES_NEW_ENB_UE_X2AP_ID_PRESENT (1 << 0)

typedef struct X2ap_HandoverCancel_IEs_s {
    uint16_t          presenceMask;
    X2ap_UE_X2AP_ID_t old_eNB_UE_X2AP_ID;
    X2ap_UE_X2AP_ID_t new_eNB_UE_X2AP_ID; ///< Optional field
    X2ap_Cause_t      cause;
} X2ap_HandoverCancel_IEs_t;

typedef struct X2ap_CellInformation_ItemIEs_s {
    X2ap_CellInformation_Item_t cellInformation_Item;
} X2ap_CellInformation_ItemIEs_t;

#define X2AP_ERRORINDICATION_IES_OLD_ENB_UE_X2AP_ID_PRESENT          (1 << 0)
#define X2AP_ERRORINDICATION_IES_NEW_ENB_UE_X2AP_ID_PRESENT          (1 << 1)
#define X2AP_ERRORINDICATION_IES_CAUSE_PRESENT                       (1 << 2)
#define X2AP_ERRORINDICATION_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 3)

typedef struct X2ap_ErrorIndication_IEs_s {
    uint16_t                      presenceMask;
    X2ap_UE_X2AP_ID_t             old_eNB_UE_X2AP_ID; ///< Optional field
    X2ap_UE_X2AP_ID_t             new_eNB_UE_X2AP_ID; ///< Optional field
    X2ap_Cause_t                  cause; ///< Optional field
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_ErrorIndication_IEs_t;

typedef struct X2ap_MeasurementFailureCause_ItemIEs_s {
    X2ap_MeasurementFailureCause_Item_t measurementFailureCause_Item;
} X2ap_MeasurementFailureCause_ItemIEs_t;

typedef struct X2ap_CompleteFailureCauseInformation_ItemIEs_s {
    X2ap_CompleteFailureCauseInformation_Item_t completeFailureCauseInformation_Item;
} X2ap_CompleteFailureCauseInformation_ItemIEs_t;

#define X2AP_CELLACTIVATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct X2ap_CellActivationFailure_IEs_s {
    uint16_t                      presenceMask;
    X2ap_Cause_t                  cause;
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_CellActivationFailure_IEs_t;

#define X2SETUPREQUEST_IES_GUGROUPIDLIST_PRESENT      (1 << 0)

typedef struct X2SetupRequest_IEs_s {
    uint16_t             presenceMask;
    X2ap_GlobalENB_ID_t  globalENB_ID;
    X2ap_ServedCells_t   servedCells;
    X2ap_GUGroupIDList_t guGroupIDList; ///< Optional field
} X2SetupRequest_IEs_t;

#define X2AP_RESOURCESTATUSRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT                (1 << 0)
#define X2AP_RESOURCESTATUSRESPONSE_IES_MEASUREMENTINITIATIONRESULT_LIST_PRESENT      (1 << 1)

typedef struct X2ap_ResourceStatusResponse_IEs_s {
    uint16_t                                presenceMask;
    X2ap_Measurement_ID_t                   enB1_Measurement_ID;
    X2ap_Measurement_ID_t                   enB2_Measurement_ID;
    X2ap_CriticalityDiagnostics_t           criticalityDiagnostics; ///< Optional field
    X2ap_MeasurementInitiationResult_ListIEs_t measurementInitiationResult_List; ///< Optional field
} X2ap_ResourceStatusResponse_IEs_t;

#define X2SETUPFAILURE_IES_TIMETOWAIT_PRESENT                  (1 << 0)
#define X2SETUPFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 1)

typedef struct X2SetupFailure_IEs_s {
    uint16_t                      presenceMask;
    X2ap_Cause_t                  cause;
    X2ap_TimeToWait_t             timeToWait; ///< Optional field
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2SetupFailure_IEs_t;

#define X2AP_ENBCONFIGURATIONUPDATEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct X2ap_ENBConfigurationUpdateAcknowledge_IEs_s {
    uint16_t                      presenceMask;
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_ENBConfigurationUpdateAcknowledge_IEs_t;

typedef struct X2ap_E_RABs_ToBeSetup_ItemIEs_s {
    X2ap_E_RABs_ToBeSetup_Item_t e_RABs_ToBeSetup_Item;
} X2ap_E_RABs_ToBeSetup_ItemIEs_t;

#define X2AP_HANDOVERPREPARATIONFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct X2ap_HandoverPreparationFailure_IEs_s {
    uint16_t                      presenceMask;
    X2ap_UE_X2AP_ID_t             old_eNB_UE_X2AP_ID;
    X2ap_Cause_t                  cause;
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_HandoverPreparationFailure_IEs_t;

typedef struct X2ap_ResetRequest_IEs_s {
    X2ap_Cause_t cause;
} X2ap_ResetRequest_IEs_t;

#define X2AP_RLFINDICATION_IES_SHORTMAC_I_PRESENT                   (1 << 0)
#define X2AP_RLFINDICATION_IES_UE_RLF_REPORT_CONTAINER_PRESENT      (1 << 1)
#define X2AP_RLFINDICATION_IES_RRCCONNSETUPINDICATOR_PRESENT        (1 << 2)
#define X2AP_RLFINDICATION_IES_RRCCONNREESTABINDICATOR_PRESENT      (1 << 3)

typedef struct X2ap_RLFIndication_IEs_s {
    uint16_t                       presenceMask;
    X2ap_PCI_t                     failureCellPCI;
    X2ap_ECGI_t                    re_establishmentCellECGI;
    X2ap_CRNTI_t                   failureCellCRNTI;
    X2ap_ShortMAC_I_t              shortMAC_I; ///< Optional field
    X2ap_UE_RLF_Report_Container_t uE_RLF_Report_Container; ///< Optional field
    X2ap_RRCConnSetupIndicator_t   rrcConnSetupIndicator; ///< Optional field
    X2ap_RRCConnReestabIndicator_t rrcConnReestabIndicator; ///< Optional field
} X2ap_RLFIndication_IEs_t;

typedef struct X2ap_E_RABs_SubjectToStatusTransfer_ItemIEs_s {
    X2ap_E_RABs_SubjectToStatusTransfer_Item_t e_RABs_SubjectToStatusTransfer_Item;
} X2ap_E_RABs_SubjectToStatusTransfer_ItemIEs_t;

#define X2AP_MOBILITYCHANGEFAILURE_IES_ENB2_MOBILITY_PARAMETERS_MODIFICATION_RANGE_PRESENT (1 << 0)
#define X2AP_MOBILITYCHANGEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT                   (1 << 1)

typedef struct X2ap_MobilityChangeFailure_IEs_s {
    uint16_t                                   presenceMask;
    X2ap_ECGI_t                                enB1_Cell_ID;
    X2ap_ECGI_t                                enB2_Cell_ID;
    X2ap_Cause_t                               cause;
    X2ap_MobilityParametersModificationRange_t enB2_Mobility_Parameters_Modification_Range; ///< Optional field
    X2ap_CriticalityDiagnostics_t              criticalityDiagnostics; ///< Optional field
} X2ap_MobilityChangeFailure_IEs_t;

typedef struct X2ap_CellActivationRequest_IEs_s {
    X2ap_ServedCellsToActivate_t servedCellsToActivate;
} X2ap_CellActivationRequest_IEs_t;

#define X2AP_RESOURCESTATUSREQUEST_IES_ENB2_MEASUREMENT_ID_PRESENT          (1 << 0)
#define X2AP_RESOURCESTATUSREQUEST_IES_REPORTCHARACTERISTICS_PRESENT        (1 << 1)
#define X2AP_RESOURCESTATUSREQUEST_IES_REPORTINGPERIODICITY_PRESENT         (1 << 2)
#define X2AP_RESOURCESTATUSREQUEST_IES_PARTIALSUCCESSINDICATOR_PRESENT      (1 << 3)

typedef struct X2ap_ResourceStatusRequest_IEs_s {
    uint16_t                       presenceMask;
    X2ap_Measurement_ID_t          enB1_Measurement_ID;
    X2ap_Measurement_ID_t          enB2_Measurement_ID; ///< Conditional field
    X2ap_Registration_Request_t    registration_Request;
    X2ap_ReportCharacteristics_t   reportCharacteristics; ///< Optional field
    X2ap_CellToReport_ListIEs_t cellToReport;
    X2ap_ReportingPeriodicity_t    reportingPeriodicity; ///< Optional field
    X2ap_PartialSuccessIndicator_t partialSuccessIndicator; ///< Optional field
} X2ap_ResourceStatusRequest_IEs_t;

typedef struct X2ap_SNStatusTransfer_IEs_s {
    X2ap_UE_X2AP_ID_t                          old_eNB_UE_X2AP_ID;
    X2ap_UE_X2AP_ID_t                          new_eNB_UE_X2AP_ID;
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t e_RABs_SubjectToStatusTransfer_List;
} X2ap_SNStatusTransfer_IEs_t;

typedef struct X2ap_LoadInformation_IEs_s {
    X2ap_CellInformation_ListIEs_t cellInformation;
} X2ap_LoadInformation_IEs_t;

typedef struct X2ap_CellToReport_ItemIEs_s {
    X2ap_CellToReport_Item_t cellToReport_Item;
} X2ap_CellToReport_ItemIEs_t;

#define X2AP_CELLACTIVATIONRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct X2ap_CellActivationResponse_IEs_s {
    uint16_t                      presenceMask;
    X2ap_ActivatedCellList_t      activatedCellList;
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_CellActivationResponse_IEs_t;

#define X2AP_HANDOVERREPORT_IES_RE_ESTABLISHMENTCELLECGI_PRESENT (1 << 0)
#define X2AP_HANDOVERREPORT_IES_TARGETCELLINUTRAN_PRESENT      (1 << 1)

typedef struct X2ap_HandoverReport_IEs_s {
    uint16_t                 presenceMask;
    X2ap_Cause_t             cause;
    X2ap_ECGI_t              sourceCellECGI;
    X2ap_ECGI_t              failureCellECGI;
    X2ap_ECGI_t              re_establishmentCellECGI; ///< Conditional field
    X2ap_TargetCellInUTRAN_t targetCellInUTRAN; ///< Conditional field
} X2ap_HandoverReport_IEs_t;

typedef struct X2ap_ResourceStatusUpdate_IEs_s {
    X2ap_Measurement_ID_t             enB1_Measurement_ID;
    X2ap_Measurement_ID_t             enB2_Measurement_ID;
    X2ap_CellMeasurementResult_ListIEs_t cellMeasurementResult;
} X2ap_ResourceStatusUpdate_IEs_t;

typedef struct X2ap_MeasurementInitiationResult_ItemIEs_s {
    X2ap_MeasurementInitiationResult_Item_t measurementInitiationResult_Item;
} X2ap_MeasurementInitiationResult_ItemIEs_t;

typedef struct X2ap_CellMeasurementResult_ItemIEs_s {
    X2ap_CellMeasurementResult_Item_t cellMeasurementResult_Item;
} X2ap_CellMeasurementResult_ItemIEs_t;

#define X2AP_RESETRESPONSE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct X2ap_ResetResponse_IEs_s {
    uint16_t                      presenceMask;
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_ResetResponse_IEs_t;

#define X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_E_RABS_NOTADMITTED_LIST_PRESENT                        (1 << 0)
#define X2AP_HANDOVERREQUESTACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT                         (1 << 1)

typedef struct X2ap_HandoverRequestAcknowledge_IEs_s {
    uint16_t                                         presenceMask;
    X2ap_UE_X2AP_ID_t                                old_eNB_UE_X2AP_ID;
    X2ap_UE_X2AP_ID_t                                new_eNB_UE_X2AP_ID;
    X2ap_E_RABs_Admitted_ListIEs_t e_RABs_Admitted_List;
    X2ap_E_RAB_List_t                                e_RABs_NotAdmitted_List; ///< Optional field
    X2ap_TargeteNBtoSource_eNBTransparentContainer_t targeteNBtoSource_eNBTransparentContainer;
    X2ap_CriticalityDiagnostics_t                    criticalityDiagnostics; ///< Optional field
} X2ap_HandoverRequestAcknowledge_IEs_t;

#define X2AP_HANDOVERREQUEST_IES_TRACEACTIVATION_PRESENT             (1 << 0)
#define X2AP_HANDOVERREQUEST_IES_SRVCCOPERATIONPOSSIBLE_PRESENT      (1 << 1)
#define X2AP_HANDOVERREQUEST_IES_CSGMEMBERSHIPSTATUS_PRESENT         (1 << 2)

typedef struct X2ap_HandoverRequest_IEs_s {
    uint16_t                      presenceMask;
    X2ap_UE_X2AP_ID_t             old_eNB_UE_X2AP_ID;
    X2ap_Cause_t                  cause;
    X2ap_ECGI_t                   targetCell_ID;
    X2ap_GUMMEI_t                 gummei_id;
    X2ap_UE_ContextInformation_t  uE_ContextInformation;
    X2ap_UE_HistoryInformation_t  uE_HistoryInformation;
    X2ap_TraceActivation_t        traceActivation; ///< Optional field
    X2ap_SRVCCOperationPossible_t srvccOperationPossible; ///< Optional field
    X2ap_CSGMembershipStatus_t    csgMembershipStatus; ///< Optional field
} X2ap_HandoverRequest_IEs_t;

#define X2AP_MOBILITYCHANGEREQUEST_IES_ENB1_MOBILITY_PARAMETERS_PRESENT           (1 << 0)

typedef struct X2ap_MobilityChangeRequest_IEs_s {
    uint16_t                             presenceMask;
    X2ap_ECGI_t                          enB1_Cell_ID;
    X2ap_ECGI_t                          enB2_Cell_ID;
    X2ap_MobilityParametersInformation_t enB1_Mobility_Parameters; ///< Optional field
    X2ap_MobilityParametersInformation_t enB2_Proposed_Mobility_Parameters;
    X2ap_Cause_t                         cause;
} X2ap_MobilityChangeRequest_IEs_t;

#define X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOADD_PRESENT         (1 << 0)
#define X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTOMODIFY_PRESENT      (1 << 1)
#define X2AP_ENBCONFIGURATIONUPDATE_IES_SERVEDCELLSTODELETE_PRESENT      (1 << 2)
#define X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTOADDLIST_PRESENT       (1 << 3)
#define X2AP_ENBCONFIGURATIONUPDATE_IES_GUGROUPIDTODELETELIST_PRESENT    (1 << 4)

typedef struct X2ap_ENBConfigurationUpdate_IEs_s {
    uint16_t                   presenceMask;
    X2ap_ServedCells_t         servedCellsToAdd; ///< Optional field
    X2ap_ServedCellsToModify_t servedCellsToModify; ///< Optional field
    X2ap_Old_ECGIs_t           servedCellsToDelete; ///< Optional field
    X2ap_GUGroupIDList_t       guGroupIDToAddList; ///< Optional field
    X2ap_GUGroupIDList_t       guGroupIDToDeleteList; ///< Optional field
} X2ap_ENBConfigurationUpdate_IEs_t;

typedef struct X2ap_UEContextRelease_IEs_s {
    X2ap_UE_X2AP_ID_t old_eNB_UE_X2AP_ID;
    X2ap_UE_X2AP_ID_t new_eNB_UE_X2AP_ID;
} X2ap_UEContextRelease_IEs_t;

#define X2AP_RESOURCESTATUSFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT                    (1 << 0)
#define X2AP_RESOURCESTATUSFAILURE_IES_COMPLETEFAILURECAUSEINFORMATION_LIST_PRESENT      (1 << 1)

typedef struct X2ap_ResourceStatusFailure_IEs_s {
    uint16_t                                    presenceMask;
    X2ap_Measurement_ID_t                       enB1_Measurement_ID;
    X2ap_Measurement_ID_t                       enB2_Measurement_ID;
    X2ap_Cause_t                                cause;
    X2ap_CriticalityDiagnostics_t               criticalityDiagnostics; ///< Optional field
    X2ap_CompleteFailureCauseInformation_ListIEs_t completeFailureCauseInformation_List; ///< Optional field
} X2ap_ResourceStatusFailure_IEs_t;

#define X2AP_MOBILITYCHANGEACKNOWLEDGE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct X2ap_MobilityChangeAcknowledge_IEs_s {
    uint16_t                      presenceMask;
    X2ap_ECGI_t                   enB1_Cell_ID;
    X2ap_ECGI_t                   enB2_Cell_ID;
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_MobilityChangeAcknowledge_IEs_t;

typedef struct X2ap_E_RABs_Admitted_ItemIEs_s {
    X2ap_E_RABs_Admitted_Item_t e_RABs_Admitted_Item;
} X2ap_E_RABs_Admitted_ItemIEs_t;

#define X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_TIMETOWAIT_PRESENT                  (1 << 0)
#define X2AP_ENBCONFIGURATIONUPDATEFAILURE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 1)

typedef struct X2ap_ENBConfigurationUpdateFailure_IEs_s {
    uint16_t                      presenceMask;
    X2ap_Cause_t                  cause;
    X2ap_TimeToWait_t             timeToWait; ///< Optional field
    X2ap_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} X2ap_ENBConfigurationUpdateFailure_IEs_t;

typedef struct x2ap_message_s {
    X2ap_ProcedureCode_t procedureCode;
    X2ap_Criticality_t   criticality;
    uint8_t            direction;
    union {
        X2SetupFailure_IEs_t x2SetupFailure_IEs;
        X2SetupRequest_IEs_t x2SetupRequest_IEs;
        X2SetupResponse_IEs_t x2SetupResponse_IEs;
        X2ap_CellActivationFailure_IEs_t x2ap_CellActivationFailure_IEs;
        X2ap_CellActivationRequest_IEs_t x2ap_CellActivationRequest_IEs;
        X2ap_CellActivationResponse_IEs_t x2ap_CellActivationResponse_IEs;
        X2ap_ENBConfigurationUpdate_IEs_t x2ap_ENBConfigurationUpdate_IEs;
        X2ap_ENBConfigurationUpdateAcknowledge_IEs_t x2ap_ENBConfigurationUpdateAcknowledge_IEs;
        X2ap_ENBConfigurationUpdateFailure_IEs_t x2ap_ENBConfigurationUpdateFailure_IEs;
        X2ap_ErrorIndication_IEs_t x2ap_ErrorIndication_IEs;
        X2ap_HandoverCancel_IEs_t x2ap_HandoverCancel_IEs;
        X2ap_HandoverPreparationFailure_IEs_t x2ap_HandoverPreparationFailure_IEs;
        X2ap_HandoverReport_IEs_t x2ap_HandoverReport_IEs;
        X2ap_HandoverRequest_IEs_t x2ap_HandoverRequest_IEs;
        X2ap_HandoverRequestAcknowledge_IEs_t x2ap_HandoverRequestAcknowledge_IEs;
        X2ap_LoadInformation_IEs_t x2ap_LoadInformation_IEs;
        X2ap_MobilityChangeAcknowledge_IEs_t x2ap_MobilityChangeAcknowledge_IEs;
        X2ap_MobilityChangeFailure_IEs_t x2ap_MobilityChangeFailure_IEs;
        X2ap_MobilityChangeRequest_IEs_t x2ap_MobilityChangeRequest_IEs;
        X2ap_RLFIndication_IEs_t x2ap_RLFIndication_IEs;
        X2ap_ResetRequest_IEs_t x2ap_ResetRequest_IEs;
        X2ap_ResetResponse_IEs_t x2ap_ResetResponse_IEs;
        X2ap_ResourceStatusFailure_IEs_t x2ap_ResourceStatusFailure_IEs;
        X2ap_ResourceStatusRequest_IEs_t x2ap_ResourceStatusRequest_IEs;
        X2ap_ResourceStatusResponse_IEs_t x2ap_ResourceStatusResponse_IEs;
        X2ap_ResourceStatusUpdate_IEs_t x2ap_ResourceStatusUpdate_IEs;
        X2ap_SNStatusTransfer_IEs_t x2ap_SNStatusTransfer_IEs;
        X2ap_UEContextRelease_IEs_t x2ap_UEContextRelease_IEs;
    } msg;
} x2ap_message;

/** \brief Decode function for X2SetupResponse-IEs ies.
 * \param x2SetupResponse_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2setupresponse_ies(
    X2SetupResponse_IEs_t *x2SetupResponse_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2SetupResponse-IEs ies.
 *  \param x2SetupResponse Pointer to the ASN1 structure.
 *  \param x2SetupResponse_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2setupresponse_ies(
    X2SetupResponse_t *x2SetupResponse,
    X2SetupResponse_IEs_t *x2SetupResponse_IEs);

/** \brief Decode function for X2ap-HandoverCancel-IEs ies.
 * \param x2ap_HandoverCancel_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_handovercancel_ies(
    X2ap_HandoverCancel_IEs_t *x2ap_HandoverCancel_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-HandoverCancel-IEs ies.
 *  \param x2ap_HandoverCancel Pointer to the ASN1 structure.
 *  \param x2ap_HandoverCancel_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_handovercancel_ies(
    X2ap_HandoverCancel_t *x2ap_HandoverCancel,
    X2ap_HandoverCancel_IEs_t *x2ap_HandoverCancel_IEs);

/** \brief Decode function for X2ap-ErrorIndication-IEs ies.
 * \param x2ap_ErrorIndication_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_errorindication_ies(
    X2ap_ErrorIndication_IEs_t *x2ap_ErrorIndication_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ErrorIndication-IEs ies.
 *  \param x2ap_ErrorIndication Pointer to the ASN1 structure.
 *  \param x2ap_ErrorIndication_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_errorindication_ies(
    X2ap_ErrorIndication_t *x2ap_ErrorIndication,
    X2ap_ErrorIndication_IEs_t *x2ap_ErrorIndication_IEs);

/** \brief Decode function for X2ap-CellActivationFailure-IEs ies.
 * \param x2ap_CellActivationFailure_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_cellactivationfailure_ies(
    X2ap_CellActivationFailure_IEs_t *x2ap_CellActivationFailure_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-CellActivationFailure-IEs ies.
 *  \param x2ap_CellActivationFailure Pointer to the ASN1 structure.
 *  \param x2ap_CellActivationFailure_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_cellactivationfailure_ies(
    X2ap_CellActivationFailure_t *x2ap_CellActivationFailure,
    X2ap_CellActivationFailure_IEs_t *x2ap_CellActivationFailure_IEs);

/** \brief Decode function for X2SetupRequest-IEs ies.
 * \param x2SetupRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2setuprequest_ies(
    X2SetupRequest_IEs_t *x2SetupRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2SetupRequest-IEs ies.
 *  \param x2SetupRequest Pointer to the ASN1 structure.
 *  \param x2SetupRequest_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2setuprequest_ies(
    X2SetupRequest_t *x2SetupRequest,
    X2SetupRequest_IEs_t *x2SetupRequest_IEs);

/** \brief Decode function for X2ap-ResourceStatusResponse-IEs ies.
 * \param x2ap_ResourceStatusResponse_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_resourcestatusresponse_ies(
    X2ap_ResourceStatusResponse_IEs_t *x2ap_ResourceStatusResponse_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ResourceStatusResponse-IEs ies.
 *  \param x2ap_ResourceStatusResponse Pointer to the ASN1 structure.
 *  \param x2ap_ResourceStatusResponse_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_resourcestatusresponse_ies(
    X2ap_ResourceStatusResponse_t *x2ap_ResourceStatusResponse,
    X2ap_ResourceStatusResponse_IEs_t *x2ap_ResourceStatusResponse_IEs);

/** \brief Decode function for X2SetupFailure-IEs ies.
 * \param x2SetupFailure_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2setupfailure_ies(
    X2SetupFailure_IEs_t *x2SetupFailure_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2SetupFailure-IEs ies.
 *  \param x2SetupFailure Pointer to the ASN1 structure.
 *  \param x2SetupFailure_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2setupfailure_ies(
    X2SetupFailure_t *x2SetupFailure,
    X2SetupFailure_IEs_t *x2SetupFailure_IEs);

/** \brief Decode function for X2ap-ENBConfigurationUpdateAcknowledge-IEs ies.
 * \param x2ap_ENBConfigurationUpdateAcknowledge_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_enbconfigurationupdateacknowledge_ies(
    X2ap_ENBConfigurationUpdateAcknowledge_IEs_t *x2ap_ENBConfigurationUpdateAcknowledge_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ENBConfigurationUpdateAcknowledge-IEs ies.
 *  \param x2ap_ENBConfigurationUpdateAcknowledge Pointer to the ASN1 structure.
 *  \param x2ap_ENBConfigurationUpdateAcknowledge_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_enbconfigurationupdateacknowledge_ies(
    X2ap_ENBConfigurationUpdateAcknowledge_t *x2ap_ENBConfigurationUpdateAcknowledge,
    X2ap_ENBConfigurationUpdateAcknowledge_IEs_t *x2ap_ENBConfigurationUpdateAcknowledge_IEs);

/** \brief Decode function for X2ap-HandoverPreparationFailure-IEs ies.
 * \param x2ap_HandoverPreparationFailure_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_handoverpreparationfailure_ies(
    X2ap_HandoverPreparationFailure_IEs_t *x2ap_HandoverPreparationFailure_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-HandoverPreparationFailure-IEs ies.
 *  \param x2ap_HandoverPreparationFailure Pointer to the ASN1 structure.
 *  \param x2ap_HandoverPreparationFailure_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_handoverpreparationfailure_ies(
    X2ap_HandoverPreparationFailure_t *x2ap_HandoverPreparationFailure,
    X2ap_HandoverPreparationFailure_IEs_t *x2ap_HandoverPreparationFailure_IEs);

/** \brief Decode function for X2ap-ResetRequest-IEs ies.
 * \param x2ap_ResetRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_resetrequest_ies(
    X2ap_ResetRequest_IEs_t *x2ap_ResetRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ResetRequest-IEs ies.
 *  \param x2ap_ResetRequest Pointer to the ASN1 structure.
 *  \param x2ap_ResetRequest_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_resetrequest_ies(
    X2ap_ResetRequest_t *x2ap_ResetRequest,
    X2ap_ResetRequest_IEs_t *x2ap_ResetRequest_IEs);

/** \brief Decode function for X2ap-RLFIndication-IEs ies.
 * \param x2ap_RLFIndication_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_rlfindication_ies(
    X2ap_RLFIndication_IEs_t *x2ap_RLFIndication_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-RLFIndication-IEs ies.
 *  \param x2ap_RLFIndication Pointer to the ASN1 structure.
 *  \param x2ap_RLFIndication_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_rlfindication_ies(
    X2ap_RLFIndication_t *x2ap_RLFIndication,
    X2ap_RLFIndication_IEs_t *x2ap_RLFIndication_IEs);

/** \brief Decode function for X2ap-MobilityChangeFailure-IEs ies.
 * \param x2ap_MobilityChangeFailure_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_mobilitychangefailure_ies(
    X2ap_MobilityChangeFailure_IEs_t *x2ap_MobilityChangeFailure_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-MobilityChangeFailure-IEs ies.
 *  \param x2ap_MobilityChangeFailure Pointer to the ASN1 structure.
 *  \param x2ap_MobilityChangeFailure_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_mobilitychangefailure_ies(
    X2ap_MobilityChangeFailure_t *x2ap_MobilityChangeFailure,
    X2ap_MobilityChangeFailure_IEs_t *x2ap_MobilityChangeFailure_IEs);

/** \brief Decode function for X2ap-CellActivationRequest-IEs ies.
 * \param x2ap_CellActivationRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_cellactivationrequest_ies(
    X2ap_CellActivationRequest_IEs_t *x2ap_CellActivationRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-CellActivationRequest-IEs ies.
 *  \param x2ap_CellActivationRequest Pointer to the ASN1 structure.
 *  \param x2ap_CellActivationRequest_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_cellactivationrequest_ies(
    X2ap_CellActivationRequest_t *x2ap_CellActivationRequest,
    X2ap_CellActivationRequest_IEs_t *x2ap_CellActivationRequest_IEs);

/** \brief Decode function for X2ap-ResourceStatusRequest-IEs ies.
 * \param x2ap_ResourceStatusRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_resourcestatusrequest_ies(
    X2ap_ResourceStatusRequest_IEs_t *x2ap_ResourceStatusRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ResourceStatusRequest-IEs ies.
 *  \param x2ap_ResourceStatusRequest Pointer to the ASN1 structure.
 *  \param x2ap_ResourceStatusRequest_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_resourcestatusrequest_ies(
    X2ap_ResourceStatusRequest_t *x2ap_ResourceStatusRequest,
    X2ap_ResourceStatusRequest_IEs_t *x2ap_ResourceStatusRequest_IEs);

/** \brief Decode function for X2ap-SNStatusTransfer-IEs ies.
 * \param x2ap_SNStatusTransfer_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_snstatustransfer_ies(
    X2ap_SNStatusTransfer_IEs_t *x2ap_SNStatusTransfer_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-SNStatusTransfer-IEs ies.
 *  \param x2ap_SNStatusTransfer Pointer to the ASN1 structure.
 *  \param x2ap_SNStatusTransfer_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_snstatustransfer_ies(
    X2ap_SNStatusTransfer_t *x2ap_SNStatusTransfer,
    X2ap_SNStatusTransfer_IEs_t *x2ap_SNStatusTransfer_IEs);

/** \brief Decode function for X2ap-LoadInformation-IEs ies.
 * \param x2ap_LoadInformation_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_loadinformation_ies(
    X2ap_LoadInformation_IEs_t *x2ap_LoadInformation_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-LoadInformation-IEs ies.
 *  \param x2ap_LoadInformation Pointer to the ASN1 structure.
 *  \param x2ap_LoadInformation_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_loadinformation_ies(
    X2ap_LoadInformation_t *x2ap_LoadInformation,
    X2ap_LoadInformation_IEs_t *x2ap_LoadInformation_IEs);

/** \brief Decode function for X2ap-CellActivationResponse-IEs ies.
 * \param x2ap_CellActivationResponse_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_cellactivationresponse_ies(
    X2ap_CellActivationResponse_IEs_t *x2ap_CellActivationResponse_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-CellActivationResponse-IEs ies.
 *  \param x2ap_CellActivationResponse Pointer to the ASN1 structure.
 *  \param x2ap_CellActivationResponse_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_cellactivationresponse_ies(
    X2ap_CellActivationResponse_t *x2ap_CellActivationResponse,
    X2ap_CellActivationResponse_IEs_t *x2ap_CellActivationResponse_IEs);

/** \brief Decode function for X2ap-HandoverReport-IEs ies.
 * \param x2ap_HandoverReport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_handoverreport_ies(
    X2ap_HandoverReport_IEs_t *x2ap_HandoverReport_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-HandoverReport-IEs ies.
 *  \param x2ap_HandoverReport Pointer to the ASN1 structure.
 *  \param x2ap_HandoverReport_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_handoverreport_ies(
    X2ap_HandoverReport_t *x2ap_HandoverReport,
    X2ap_HandoverReport_IEs_t *x2ap_HandoverReport_IEs);

/** \brief Decode function for X2ap-ResourceStatusUpdate-IEs ies.
 * \param x2ap_ResourceStatusUpdate_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_resourcestatusupdate_ies(
    X2ap_ResourceStatusUpdate_IEs_t *x2ap_ResourceStatusUpdate_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ResourceStatusUpdate-IEs ies.
 *  \param x2ap_ResourceStatusUpdate Pointer to the ASN1 structure.
 *  \param x2ap_ResourceStatusUpdate_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_resourcestatusupdate_ies(
    X2ap_ResourceStatusUpdate_t *x2ap_ResourceStatusUpdate,
    X2ap_ResourceStatusUpdate_IEs_t *x2ap_ResourceStatusUpdate_IEs);

/** \brief Decode function for X2ap-ResetResponse-IEs ies.
 * \param x2ap_ResetResponse_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_resetresponse_ies(
    X2ap_ResetResponse_IEs_t *x2ap_ResetResponse_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ResetResponse-IEs ies.
 *  \param x2ap_ResetResponse Pointer to the ASN1 structure.
 *  \param x2ap_ResetResponse_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_resetresponse_ies(
    X2ap_ResetResponse_t *x2ap_ResetResponse,
    X2ap_ResetResponse_IEs_t *x2ap_ResetResponse_IEs);

/** \brief Decode function for X2ap-HandoverRequestAcknowledge-IEs ies.
 * \param x2ap_HandoverRequestAcknowledge_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_handoverrequestacknowledge_ies(
    X2ap_HandoverRequestAcknowledge_IEs_t *x2ap_HandoverRequestAcknowledge_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-HandoverRequestAcknowledge-IEs ies.
 *  \param x2ap_HandoverRequestAcknowledge Pointer to the ASN1 structure.
 *  \param x2ap_HandoverRequestAcknowledge_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_handoverrequestacknowledge_ies(
    X2ap_HandoverRequestAcknowledge_t *x2ap_HandoverRequestAcknowledge,
    X2ap_HandoverRequestAcknowledge_IEs_t *x2ap_HandoverRequestAcknowledge_IEs);

/** \brief Decode function for X2ap-HandoverRequest-IEs ies.
 * \param x2ap_HandoverRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_handoverrequest_ies(
    X2ap_HandoverRequest_IEs_t *x2ap_HandoverRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-HandoverRequest-IEs ies.
 *  \param x2ap_HandoverRequest Pointer to the ASN1 structure.
 *  \param x2ap_HandoverRequest_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_handoverrequest_ies(
    X2ap_HandoverRequest_t *x2ap_HandoverRequest,
    X2ap_HandoverRequest_IEs_t *x2ap_HandoverRequest_IEs);

/** \brief Decode function for X2ap-MobilityChangeRequest-IEs ies.
 * \param x2ap_MobilityChangeRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_mobilitychangerequest_ies(
    X2ap_MobilityChangeRequest_IEs_t *x2ap_MobilityChangeRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-MobilityChangeRequest-IEs ies.
 *  \param x2ap_MobilityChangeRequest Pointer to the ASN1 structure.
 *  \param x2ap_MobilityChangeRequest_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_mobilitychangerequest_ies(
    X2ap_MobilityChangeRequest_t *x2ap_MobilityChangeRequest,
    X2ap_MobilityChangeRequest_IEs_t *x2ap_MobilityChangeRequest_IEs);

/** \brief Decode function for X2ap-ENBConfigurationUpdate-IEs ies.
 * \param x2ap_ENBConfigurationUpdate_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_enbconfigurationupdate_ies(
    X2ap_ENBConfigurationUpdate_IEs_t *x2ap_ENBConfigurationUpdate_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ENBConfigurationUpdate-IEs ies.
 *  \param x2ap_ENBConfigurationUpdate Pointer to the ASN1 structure.
 *  \param x2ap_ENBConfigurationUpdate_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_enbconfigurationupdate_ies(
    X2ap_ENBConfigurationUpdate_t *x2ap_ENBConfigurationUpdate,
    X2ap_ENBConfigurationUpdate_IEs_t *x2ap_ENBConfigurationUpdate_IEs);

/** \brief Decode function for X2ap-UEContextRelease-IEs ies.
 * \param x2ap_UEContextRelease_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_uecontextrelease_ies(
    X2ap_UEContextRelease_IEs_t *x2ap_UEContextRelease_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-UEContextRelease-IEs ies.
 *  \param x2ap_UEContextRelease Pointer to the ASN1 structure.
 *  \param x2ap_UEContextRelease_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_uecontextrelease_ies(
    X2ap_UEContextRelease_t *x2ap_UEContextRelease,
    X2ap_UEContextRelease_IEs_t *x2ap_UEContextRelease_IEs);

/** \brief Decode function for X2ap-ResourceStatusFailure-IEs ies.
 * \param x2ap_ResourceStatusFailure_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_resourcestatusfailure_ies(
    X2ap_ResourceStatusFailure_IEs_t *x2ap_ResourceStatusFailure_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ResourceStatusFailure-IEs ies.
 *  \param x2ap_ResourceStatusFailure Pointer to the ASN1 structure.
 *  \param x2ap_ResourceStatusFailure_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_resourcestatusfailure_ies(
    X2ap_ResourceStatusFailure_t *x2ap_ResourceStatusFailure,
    X2ap_ResourceStatusFailure_IEs_t *x2ap_ResourceStatusFailure_IEs);

/** \brief Decode function for X2ap-MobilityChangeAcknowledge-IEs ies.
 * \param x2ap_MobilityChangeAcknowledge_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_mobilitychangeacknowledge_ies(
    X2ap_MobilityChangeAcknowledge_IEs_t *x2ap_MobilityChangeAcknowledge_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-MobilityChangeAcknowledge-IEs ies.
 *  \param x2ap_MobilityChangeAcknowledge Pointer to the ASN1 structure.
 *  \param x2ap_MobilityChangeAcknowledge_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_mobilitychangeacknowledge_ies(
    X2ap_MobilityChangeAcknowledge_t *x2ap_MobilityChangeAcknowledge,
    X2ap_MobilityChangeAcknowledge_IEs_t *x2ap_MobilityChangeAcknowledge_IEs);

/** \brief Decode function for X2ap-ENBConfigurationUpdateFailure-IEs ies.
 * \param x2ap_ENBConfigurationUpdateFailure_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int x2ap_decode_x2ap_enbconfigurationupdatefailure_ies(
    X2ap_ENBConfigurationUpdateFailure_IEs_t *x2ap_ENBConfigurationUpdateFailure_IEs,
    ANY_t *any_p);

/** \brief Encode function for X2ap-ENBConfigurationUpdateFailure-IEs ies.
 *  \param x2ap_ENBConfigurationUpdateFailure Pointer to the ASN1 structure.
 *  \param x2ap_ENBConfigurationUpdateFailure_IEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_enbconfigurationupdatefailure_ies(
    X2ap_ENBConfigurationUpdateFailure_t *x2ap_ENBConfigurationUpdateFailure,
    X2ap_ENBConfigurationUpdateFailure_IEs_t *x2ap_ENBConfigurationUpdateFailure_IEs);

/** \brief Encode function for X2ap-CellInformation-ItemIEs ies.
 *  \param x2ap_CellInformation_List Pointer to the ASN1 structure.
 *  \param x2ap_CellInformation_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_cellinformation_list(
    X2ap_CellInformation_List_t *x2ap_CellInformation_List,
    X2ap_CellInformation_ListIEs_t *x2ap_CellInformation_ListIEs);

/** \brief Decode function for X2ap-CellInformation-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_cellinformation_list(
    X2ap_CellInformation_ListIEs_t *x2ap_CellInformation_ListIEs,
    X2ap_CellInformation_List_t *x2ap_CellInformation_List);

/** \brief Encode function for X2ap-MeasurementFailureCause-ItemIEs ies.
 *  \param x2ap_MeasurementFailureCause_List Pointer to the ASN1 structure.
 *  \param x2ap_MeasurementFailureCause_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_measurementfailurecause_list(
    X2ap_MeasurementFailureCause_List_t *x2ap_MeasurementFailureCause_List,
    X2ap_MeasurementFailureCause_ListIEs_t *x2ap_MeasurementFailureCause_ListIEs);

/** \brief Decode function for X2ap-MeasurementFailureCause-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_measurementfailurecause_list(
    X2ap_MeasurementFailureCause_ListIEs_t *x2ap_MeasurementFailureCause_ListIEs,
    X2ap_MeasurementFailureCause_List_t *x2ap_MeasurementFailureCause_List);

/** \brief Encode function for X2ap-CompleteFailureCauseInformation-ItemIEs ies.
 *  \param x2ap_CompleteFailureCauseInformation_List Pointer to the ASN1 structure.
 *  \param x2ap_CompleteFailureCauseInformation_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_completefailurecauseinformation_list(
    X2ap_CompleteFailureCauseInformation_List_t *x2ap_CompleteFailureCauseInformation_List,
    X2ap_CompleteFailureCauseInformation_ListIEs_t *x2ap_CompleteFailureCauseInformation_ListIEs);

/** \brief Decode function for X2ap-CompleteFailureCauseInformation-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_completefailurecauseinformation_list(
    X2ap_CompleteFailureCauseInformation_ListIEs_t *x2ap_CompleteFailureCauseInformation_ListIEs,
    X2ap_CompleteFailureCauseInformation_List_t *x2ap_CompleteFailureCauseInformation_List);

/** \brief Encode function for X2ap-E-RABs-ToBeSetup-ItemIEs ies.
 *  \param x2ap_E_RABs_ToBeSetup_List Pointer to the ASN1 structure.
 *  \param x2ap_E_RABs_ToBeSetup_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_e_rabs_tobesetup_list(
    X2ap_E_RABs_ToBeSetup_List_t *x2ap_E_RABs_ToBeSetup_List,
    X2ap_E_RABs_ToBeSetup_ListIEs_t *x2ap_E_RABs_ToBeSetup_ListIEs);

/** \brief Decode function for X2ap-E-RABs-ToBeSetup-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_e_rabs_tobesetup_list(
    X2ap_E_RABs_ToBeSetup_ListIEs_t *x2ap_E_RABs_ToBeSetup_ListIEs,
    X2ap_E_RABs_ToBeSetup_List_t *x2ap_E_RABs_ToBeSetup_List);

/** \brief Encode function for X2ap-E-RABs-SubjectToStatusTransfer-ItemIEs ies.
 *  \param x2ap_E_RABs_SubjectToStatusTransfer_List Pointer to the ASN1 structure.
 *  \param x2ap_E_RABs_SubjectToStatusTransfer_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_e_rabs_subjecttostatustransfer_list(
    X2ap_E_RABs_SubjectToStatusTransfer_List_t *x2ap_E_RABs_SubjectToStatusTransfer_List,
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t *x2ap_E_RABs_SubjectToStatusTransfer_ListIEs);

/** \brief Decode function for X2ap-E-RABs-SubjectToStatusTransfer-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_e_rabs_subjecttostatustransfer_list(
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t *x2ap_E_RABs_SubjectToStatusTransfer_ListIEs,
    X2ap_E_RABs_SubjectToStatusTransfer_List_t *x2ap_E_RABs_SubjectToStatusTransfer_List);

/** \brief Encode function for X2ap-CellToReport-ItemIEs ies.
 *  \param x2ap_CellToReport_List Pointer to the ASN1 structure.
 *  \param x2ap_CellToReport_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_celltoreport_list(
    X2ap_CellToReport_List_t *x2ap_CellToReport_List,
    X2ap_CellToReport_ListIEs_t *x2ap_CellToReport_ListIEs);

/** \brief Decode function for X2ap-CellToReport-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_celltoreport_list(
    X2ap_CellToReport_ListIEs_t *x2ap_CellToReport_ListIEs,
    X2ap_CellToReport_List_t *x2ap_CellToReport_List);

/** \brief Encode function for X2ap-MeasurementInitiationResult-ItemIEs ies.
 *  \param x2ap_MeasurementInitiationResult_List Pointer to the ASN1 structure.
 *  \param x2ap_MeasurementInitiationResult_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_measurementinitiationresult_list(
    X2ap_MeasurementInitiationResult_List_t *x2ap_MeasurementInitiationResult_List,
    X2ap_MeasurementInitiationResult_ListIEs_t *x2ap_MeasurementInitiationResult_ListIEs);

/** \brief Decode function for X2ap-MeasurementInitiationResult-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_measurementinitiationresult_list(
    X2ap_MeasurementInitiationResult_ListIEs_t *x2ap_MeasurementInitiationResult_ListIEs,
    X2ap_MeasurementInitiationResult_List_t *x2ap_MeasurementInitiationResult_List);

/** \brief Encode function for X2ap-CellMeasurementResult-ItemIEs ies.
 *  \param x2ap_CellMeasurementResult_List Pointer to the ASN1 structure.
 *  \param x2ap_CellMeasurementResult_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_cellmeasurementresult_list(
    X2ap_CellMeasurementResult_List_t *x2ap_CellMeasurementResult_List,
    X2ap_CellMeasurementResult_ListIEs_t *x2ap_CellMeasurementResult_ListIEs);

/** \brief Decode function for X2ap-CellMeasurementResult-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_cellmeasurementresult_list(
    X2ap_CellMeasurementResult_ListIEs_t *x2ap_CellMeasurementResult_ListIEs,
    X2ap_CellMeasurementResult_List_t *x2ap_CellMeasurementResult_List);

/** \brief Encode function for X2ap-E-RABs-Admitted-ItemIEs ies.
 *  \param x2ap_E_RABs_Admitted_List Pointer to the ASN1 structure.
 *  \param x2ap_E_RABs_Admitted_ItemIEs Pointer to the IES structure.
 **/
int x2ap_encode_x2ap_e_rabs_admitted_list(
    X2ap_E_RABs_Admitted_List_t *x2ap_E_RABs_Admitted_List,
    X2ap_E_RABs_Admitted_ListIEs_t *x2ap_E_RABs_Admitted_ListIEs);

/** \brief Decode function for X2ap-E-RABs-Admitted-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int x2ap_decode_x2ap_e_rabs_admitted_list(
    X2ap_E_RABs_Admitted_ListIEs_t *x2ap_E_RABs_Admitted_ListIEs,
    X2ap_E_RABs_Admitted_List_t *x2ap_E_RABs_Admitted_List);

/** \brief Display X2SetupResponse_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2setupresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_HandoverCancel_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_handovercancel_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_CellInformation_List encapsulated IE using XER encoding.
 *  \param x2ap_CellInformation_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_cellinformation_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CellInformation_ListIEs_t *x2ap_CellInformation_ListIEs);

/** \brief Display X2ap_ErrorIndication_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_errorindication_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_MeasurementFailureCause_List encapsulated IE using XER encoding.
 *  \param x2ap_MeasurementFailureCause_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_measurementfailurecause_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_MeasurementFailureCause_ListIEs_t *x2ap_MeasurementFailureCause_ListIEs);

/** \brief Display X2ap_CompleteFailureCauseInformation_List encapsulated IE using XER encoding.
 *  \param x2ap_CompleteFailureCauseInformation_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_completefailurecauseinformation_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CompleteFailureCauseInformation_ListIEs_t *x2ap_CompleteFailureCauseInformation_ListIEs);

/** \brief Display X2ap_CellActivationFailure_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_cellactivationfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2SetupRequest_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2setuprequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ResourceStatusResponse_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2SetupFailure_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2setupfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ENBConfigurationUpdateAcknowledge_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_enbconfigurationupdateacknowledge_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_E_RABs_ToBeSetup_List encapsulated IE using XER encoding.
 *  \param x2ap_E_RABs_ToBeSetup_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_e_rabs_tobesetup_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_E_RABs_ToBeSetup_ListIEs_t *x2ap_E_RABs_ToBeSetup_ListIEs);

/** \brief Display X2ap_HandoverPreparationFailure_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_handoverpreparationfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ResetRequest_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_resetrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_RLFIndication_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_rlfindication_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_E_RABs_SubjectToStatusTransfer_List encapsulated IE using XER encoding.
 *  \param x2ap_E_RABs_SubjectToStatusTransfer_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_e_rabs_subjecttostatustransfer_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_E_RABs_SubjectToStatusTransfer_ListIEs_t *x2ap_E_RABs_SubjectToStatusTransfer_ListIEs);

/** \brief Display X2ap_MobilityChangeFailure_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_mobilitychangefailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_CellActivationRequest_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_cellactivationrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ResourceStatusRequest_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_SNStatusTransfer_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_snstatustransfer_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_LoadInformation_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_loadinformation_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_CellToReport_List encapsulated IE using XER encoding.
 *  \param x2ap_CellToReport_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_celltoreport_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CellToReport_ListIEs_t *x2ap_CellToReport_ListIEs);

/** \brief Display X2ap_CellActivationResponse_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_cellactivationresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_HandoverReport_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_handoverreport_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ResourceStatusUpdate_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusupdate_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_MeasurementInitiationResult_List encapsulated IE using XER encoding.
 *  \param x2ap_MeasurementInitiationResult_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_measurementinitiationresult_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_MeasurementInitiationResult_ListIEs_t *x2ap_MeasurementInitiationResult_ListIEs);

/** \brief Display X2ap_CellMeasurementResult_List encapsulated IE using XER encoding.
 *  \param x2ap_CellMeasurementResult_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_cellmeasurementresult_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_CellMeasurementResult_ListIEs_t *x2ap_CellMeasurementResult_ListIEs);

/** \brief Display X2ap_ResetResponse_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_resetresponse_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_HandoverRequestAcknowledge_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_handoverrequestacknowledge_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_HandoverRequest_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_handoverrequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_MobilityChangeRequest_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_mobilitychangerequest_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ENBConfigurationUpdate_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_enbconfigurationupdate_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_UEContextRelease_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_uecontextrelease_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_ResourceStatusFailure_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_resourcestatusfailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_MobilityChangeAcknowledge_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_mobilitychangeacknowledge_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

/** \brief Display X2ap_E_RABs_Admitted_List encapsulated IE using XER encoding.
 *  \param x2ap_E_RABs_Admitted_ItemIEs Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_e_rabs_admitted_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    X2ap_E_RABs_Admitted_ListIEs_t *x2ap_E_RABs_Admitted_ListIEs);

/** \brief Display X2ap_ENBConfigurationUpdateFailure_ message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t x2ap_xer_print_x2ap_enbconfigurationupdatefailure_(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    x2ap_message *message_p);

int x2ap_xer__print2sp(const void *buffer, size_t size, void *app_key);

int x2ap_xer__print2fp(const void *buffer, size_t size, void *app_key);

extern size_t x2ap_string_total_size;

#endif /* X2AP_IES_DEFS_H_ */

