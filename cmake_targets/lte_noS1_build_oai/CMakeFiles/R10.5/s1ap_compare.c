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
 * Created on: 2017-08-26 22:34:47.161655 by oai
 * from ['/home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU-Contents.asn']
 ******************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#include <asn_application.h>
#include <asn_internal.h>

#include "s1ap_common.h"
#include "s1ap_ies_defs.h"
#include "S1ap-ProtocolIE-ID.h"

asn_comp_rval_t * s1ap_compare_s1ap_deactivatetraceies(
    S1ap_DeactivateTraceIEs_t *s1ap_DeactivateTraceIEs1,
    S1ap_DeactivateTraceIEs_t *s1ap_DeactivateTraceIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_DeactivateTraceIEs1 != NULL);
    assert(s1ap_DeactivateTraceIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DeactivateTraceIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DeactivateTraceIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DeactivateTraceIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DeactivateTraceIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_E_UTRAN_Trace_ID.compare(&asn_DEF_S1ap_E_UTRAN_Trace_ID, &s1ap_DeactivateTraceIEs1->e_UTRAN_Trace_ID, &asn_DEF_S1ap_E_UTRAN_Trace_ID, &s1ap_DeactivateTraceIEs2->e_UTRAN_Trace_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_E_UTRAN_Trace_ID.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_enbdirectinformationtransferies(
    S1ap_ENBDirectInformationTransferIEs_t *s1ap_ENBDirectInformationTransferIEs1,
    S1ap_ENBDirectInformationTransferIEs_t *s1ap_ENBDirectInformationTransferIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ENBDirectInformationTransferIEs1 != NULL);
    assert(s1ap_ENBDirectInformationTransferIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Inter_SystemInformationTransferType.compare(&asn_DEF_S1ap_Inter_SystemInformationTransferType, &s1ap_ENBDirectInformationTransferIEs1->inter_SystemInformationTransferTypeEDT, &asn_DEF_S1ap_Inter_SystemInformationTransferType, &s1ap_ENBDirectInformationTransferIEs2->inter_SystemInformationTransferTypeEDT);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Inter_SystemInformationTransferType.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabreleaseresponseies(
    S1ap_E_RABReleaseResponseIEs_t *s1ap_E_RABReleaseResponseIEs1,
    S1ap_E_RABReleaseResponseIEs_t *s1ap_E_RABReleaseResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABReleaseResponseIEs1 != NULL);
    assert(s1ap_E_RABReleaseResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABReleaseResponseIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABReleaseResponseIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABReleaseResponseIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABReleaseResponseIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_E_RABReleaseResponseIEs1->presenceMask != s1ap_E_RABReleaseResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABReleaseListBearerRelComp.name;rv->structure1 = s1ap_E_RABReleaseResponseIEs1;rv->structure2 = s1ap_E_RABReleaseResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_E_RABReleaseResponseIEs1->presenceMask & S1AP_E_RABRELEASERESPONSEIES_E_RABRELEASELISTBEARERRELCOMP_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabreleaselistbearerrelcomp(&s1ap_E_RABReleaseResponseIEs1->e_RABReleaseListBearerRelComp, &s1ap_E_RABReleaseResponseIEs2->e_RABReleaseListBearerRelComp);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_E_RABReleaseResponseIEs1->presenceMask & S1AP_E_RABRELEASERESPONSEIES_E_RABFAILEDTORELEASELIST_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_E_RABReleaseResponseIEs1->e_RABFailedToReleaseList, &s1ap_E_RABReleaseResponseIEs2->e_RABFailedToReleaseList);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_E_RABReleaseResponseIEs1->presenceMask & S1AP_E_RABRELEASERESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_E_RABReleaseResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_E_RABReleaseResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uplinknonueassociatedlppatransport_ies(
    S1ap_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1ap_UplinkNonUEAssociatedLPPaTransport_IEs1,
    S1ap_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1ap_UplinkNonUEAssociatedLPPaTransport_IEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UplinkNonUEAssociatedLPPaTransport_IEs1 != NULL);
    assert(s1ap_UplinkNonUEAssociatedLPPaTransport_IEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Routing_ID.compare(&asn_DEF_S1ap_Routing_ID, &s1ap_UplinkNonUEAssociatedLPPaTransport_IEs1->routing_ID, &asn_DEF_S1ap_Routing_ID, &s1ap_UplinkNonUEAssociatedLPPaTransport_IEs2->routing_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Routing_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_LPPa_PDU.compare(&asn_DEF_S1ap_LPPa_PDU, &s1ap_UplinkNonUEAssociatedLPPaTransport_IEs1->lpPa_PDU, &asn_DEF_S1ap_LPPa_PDU, &s1ap_UplinkNonUEAssociatedLPPaTransport_IEs2->lpPa_PDU);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_LPPa_PDU.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_writereplacewarningresponseies(
    S1ap_WriteReplaceWarningResponseIEs_t *s1ap_WriteReplaceWarningResponseIEs1,
    S1ap_WriteReplaceWarningResponseIEs_t *s1ap_WriteReplaceWarningResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_WriteReplaceWarningResponseIEs1 != NULL);
    assert(s1ap_WriteReplaceWarningResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MessageIdentifier.compare(&asn_DEF_S1ap_MessageIdentifier, &s1ap_WriteReplaceWarningResponseIEs1->messageIdentifier, &asn_DEF_S1ap_MessageIdentifier, &s1ap_WriteReplaceWarningResponseIEs2->messageIdentifier);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MessageIdentifier.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SerialNumber.compare(&asn_DEF_S1ap_SerialNumber, &s1ap_WriteReplaceWarningResponseIEs1->serialNumber, &asn_DEF_S1ap_SerialNumber, &s1ap_WriteReplaceWarningResponseIEs2->serialNumber);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SerialNumber.name;
    }
    if (s1ap_WriteReplaceWarningResponseIEs1->presenceMask != s1ap_WriteReplaceWarningResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_BroadcastCompletedAreaList.name;rv->structure1 = s1ap_WriteReplaceWarningResponseIEs1;rv->structure2 = s1ap_WriteReplaceWarningResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_WriteReplaceWarningResponseIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGRESPONSEIES_BROADCASTCOMPLETEDAREALIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_BroadcastCompletedAreaList.compare(&asn_DEF_S1ap_BroadcastCompletedAreaList, &s1ap_WriteReplaceWarningResponseIEs1->broadcastCompletedAreaList, &asn_DEF_S1ap_BroadcastCompletedAreaList, &s1ap_WriteReplaceWarningResponseIEs2->broadcastCompletedAreaList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_BroadcastCompletedAreaList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_WriteReplaceWarningResponseIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_WriteReplaceWarningResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_WriteReplaceWarningResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handovercancelies(
    S1ap_HandoverCancelIEs_t *s1ap_HandoverCancelIEs1,
    S1ap_HandoverCancelIEs_t *s1ap_HandoverCancelIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverCancelIEs1 != NULL);
    assert(s1ap_HandoverCancelIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverCancelIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverCancelIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverCancelIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverCancelIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_HandoverCancelIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_HandoverCancelIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handoverpreparationfailureies(
    S1ap_HandoverPreparationFailureIEs_t *s1ap_HandoverPreparationFailureIEs1,
    S1ap_HandoverPreparationFailureIEs_t *s1ap_HandoverPreparationFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverPreparationFailureIEs1 != NULL);
    assert(s1ap_HandoverPreparationFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverPreparationFailureIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverPreparationFailureIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverPreparationFailureIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverPreparationFailureIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_HandoverPreparationFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_HandoverPreparationFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_HandoverPreparationFailureIEs1->presenceMask != s1ap_HandoverPreparationFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_HandoverPreparationFailureIEs1;rv->structure2 = s1ap_HandoverPreparationFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverPreparationFailureIEs1->presenceMask & S1AP_HANDOVERPREPARATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverPreparationFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverPreparationFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_killrequesties(
    S1ap_KillRequestIEs_t *s1ap_KillRequestIEs1,
    S1ap_KillRequestIEs_t *s1ap_KillRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_KillRequestIEs1 != NULL);
    assert(s1ap_KillRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MessageIdentifier.compare(&asn_DEF_S1ap_MessageIdentifier, &s1ap_KillRequestIEs1->messageIdentifier, &asn_DEF_S1ap_MessageIdentifier, &s1ap_KillRequestIEs2->messageIdentifier);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MessageIdentifier.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SerialNumber.compare(&asn_DEF_S1ap_SerialNumber, &s1ap_KillRequestIEs1->serialNumber, &asn_DEF_S1ap_SerialNumber, &s1ap_KillRequestIEs2->serialNumber);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SerialNumber.name;
    }
    if (s1ap_KillRequestIEs1->presenceMask != s1ap_KillRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_WarningAreaList.name;rv->structure1 = s1ap_KillRequestIEs1;rv->structure2 = s1ap_KillRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_KillRequestIEs1->presenceMask & S1AP_KILLREQUESTIES_WARNINGAREALIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_WarningAreaList.compare(&asn_DEF_S1ap_WarningAreaList, &s1ap_KillRequestIEs1->warningAreaList, &asn_DEF_S1ap_WarningAreaList, &s1ap_KillRequestIEs2->warningAreaList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_WarningAreaList.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_writereplacewarningrequesties(
    S1ap_WriteReplaceWarningRequestIEs_t *s1ap_WriteReplaceWarningRequestIEs1,
    S1ap_WriteReplaceWarningRequestIEs_t *s1ap_WriteReplaceWarningRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_WriteReplaceWarningRequestIEs1 != NULL);
    assert(s1ap_WriteReplaceWarningRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MessageIdentifier.compare(&asn_DEF_S1ap_MessageIdentifier, &s1ap_WriteReplaceWarningRequestIEs1->messageIdentifier, &asn_DEF_S1ap_MessageIdentifier, &s1ap_WriteReplaceWarningRequestIEs2->messageIdentifier);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MessageIdentifier.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SerialNumber.compare(&asn_DEF_S1ap_SerialNumber, &s1ap_WriteReplaceWarningRequestIEs1->serialNumber, &asn_DEF_S1ap_SerialNumber, &s1ap_WriteReplaceWarningRequestIEs2->serialNumber);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SerialNumber.name;
    }
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask != s1ap_WriteReplaceWarningRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_WarningAreaList.name;rv->structure1 = s1ap_WriteReplaceWarningRequestIEs1;rv->structure2 = s1ap_WriteReplaceWarningRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGAREALIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_WarningAreaList.compare(&asn_DEF_S1ap_WarningAreaList, &s1ap_WriteReplaceWarningRequestIEs1->warningAreaList, &asn_DEF_S1ap_WarningAreaList, &s1ap_WriteReplaceWarningRequestIEs2->warningAreaList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_WarningAreaList.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_RepetitionPeriod.compare(&asn_DEF_S1ap_RepetitionPeriod, &s1ap_WriteReplaceWarningRequestIEs1->repetitionPeriod, &asn_DEF_S1ap_RepetitionPeriod, &s1ap_WriteReplaceWarningRequestIEs2->repetitionPeriod);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_RepetitionPeriod.name;
    }
    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_EXTENDEDREPETITIONPERIOD_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ExtendedRepetitionPeriod.compare(&asn_DEF_S1ap_ExtendedRepetitionPeriod, &s1ap_WriteReplaceWarningRequestIEs1->extendedRepetitionPeriod, &asn_DEF_S1ap_ExtendedRepetitionPeriod, &s1ap_WriteReplaceWarningRequestIEs2->extendedRepetitionPeriod); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ExtendedRepetitionPeriod.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_NumberofBroadcastRequest.compare(&asn_DEF_S1ap_NumberofBroadcastRequest, &s1ap_WriteReplaceWarningRequestIEs1->numberofBroadcastRequest, &asn_DEF_S1ap_NumberofBroadcastRequest, &s1ap_WriteReplaceWarningRequestIEs2->numberofBroadcastRequest);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_NumberofBroadcastRequest.name;
    }
    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGTYPE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_WarningType.compare(&asn_DEF_S1ap_WarningType, &s1ap_WriteReplaceWarningRequestIEs1->warningType, &asn_DEF_S1ap_WarningType, &s1ap_WriteReplaceWarningRequestIEs2->warningType); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_WarningType.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGSECURITYINFO_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_WarningSecurityInfo.compare(&asn_DEF_S1ap_WarningSecurityInfo, &s1ap_WriteReplaceWarningRequestIEs1->warningSecurityInfo, &asn_DEF_S1ap_WarningSecurityInfo, &s1ap_WriteReplaceWarningRequestIEs2->warningSecurityInfo); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_WarningSecurityInfo.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_DATACODINGSCHEME_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_DataCodingScheme.compare(&asn_DEF_S1ap_DataCodingScheme, &s1ap_WriteReplaceWarningRequestIEs1->dataCodingScheme, &asn_DEF_S1ap_DataCodingScheme, &s1ap_WriteReplaceWarningRequestIEs2->dataCodingScheme); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_DataCodingScheme.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGMESSAGECONTENTS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_WarningMessageContents.compare(&asn_DEF_S1ap_WarningMessageContents, &s1ap_WriteReplaceWarningRequestIEs1->warningMessageContents, &asn_DEF_S1ap_WarningMessageContents, &s1ap_WriteReplaceWarningRequestIEs2->warningMessageContents); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_WarningMessageContents.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_WriteReplaceWarningRequestIEs1->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_CONCURRENTWARNINGMESSAGEINDICATOR_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ConcurrentWarningMessageIndicator.compare(&asn_DEF_S1ap_ConcurrentWarningMessageIndicator, &s1ap_WriteReplaceWarningRequestIEs1->concurrentWarningMessageIndicator, &asn_DEF_S1ap_ConcurrentWarningMessageIndicator, &s1ap_WriteReplaceWarningRequestIEs2->concurrentWarningMessageIndicator); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ConcurrentWarningMessageIndicator.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecapabilityinfoindicationies(
    S1ap_UECapabilityInfoIndicationIEs_t *s1ap_UECapabilityInfoIndicationIEs1,
    S1ap_UECapabilityInfoIndicationIEs_t *s1ap_UECapabilityInfoIndicationIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UECapabilityInfoIndicationIEs1 != NULL);
    assert(s1ap_UECapabilityInfoIndicationIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UECapabilityInfoIndicationIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UECapabilityInfoIndicationIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UECapabilityInfoIndicationIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UECapabilityInfoIndicationIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UERadioCapability.compare(&asn_DEF_S1ap_UERadioCapability, &s1ap_UECapabilityInfoIndicationIEs1->ueRadioCapability, &asn_DEF_S1ap_UERadioCapability, &s1ap_UECapabilityInfoIndicationIEs2->ueRadioCapability);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UERadioCapability.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_locationreportingfailureindicationies(
    S1ap_LocationReportingFailureIndicationIEs_t *s1ap_LocationReportingFailureIndicationIEs1,
    S1ap_LocationReportingFailureIndicationIEs_t *s1ap_LocationReportingFailureIndicationIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_LocationReportingFailureIndicationIEs1 != NULL);
    assert(s1ap_LocationReportingFailureIndicationIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_LocationReportingFailureIndicationIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_LocationReportingFailureIndicationIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_LocationReportingFailureIndicationIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_LocationReportingFailureIndicationIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_LocationReportingFailureIndicationIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_LocationReportingFailureIndicationIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_initialcontextsetuprequesties(
    S1ap_InitialContextSetupRequestIEs_t *s1ap_InitialContextSetupRequestIEs1,
    S1ap_InitialContextSetupRequestIEs_t *s1ap_InitialContextSetupRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_InitialContextSetupRequestIEs1 != NULL);
    assert(s1ap_InitialContextSetupRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupRequestIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupRequestIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialContextSetupRequestIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialContextSetupRequestIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_InitialContextSetupRequestIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_InitialContextSetupRequestIEs2->uEaggregateMaximumBitrate);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabtobesetuplistctxtsureq(&s1ap_InitialContextSetupRequestIEs1->e_RABToBeSetupListCtxtSUReq, &s1ap_InitialContextSetupRequestIEs2->e_RABToBeSetupListCtxtSUReq);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UESecurityCapabilities.compare(&asn_DEF_S1ap_UESecurityCapabilities, &s1ap_InitialContextSetupRequestIEs1->ueSecurityCapabilities, &asn_DEF_S1ap_UESecurityCapabilities, &s1ap_InitialContextSetupRequestIEs2->ueSecurityCapabilities);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UESecurityCapabilities.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SecurityKey.compare(&asn_DEF_S1ap_SecurityKey, &s1ap_InitialContextSetupRequestIEs1->securityKey, &asn_DEF_S1ap_SecurityKey, &s1ap_InitialContextSetupRequestIEs2->securityKey);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SecurityKey.name;
    }
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask != s1ap_InitialContextSetupRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_TraceActivation.name;rv->structure1 = s1ap_InitialContextSetupRequestIEs1;rv->structure2 = s1ap_InitialContextSetupRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_TRACEACTIVATION_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TraceActivation.compare(&asn_DEF_S1ap_TraceActivation, &s1ap_InitialContextSetupRequestIEs1->traceActivation, &asn_DEF_S1ap_TraceActivation, &s1ap_InitialContextSetupRequestIEs2->traceActivation); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TraceActivation.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_HandoverRestrictionList.compare(&asn_DEF_S1ap_HandoverRestrictionList, &s1ap_InitialContextSetupRequestIEs1->handoverRestrictionList, &asn_DEF_S1ap_HandoverRestrictionList, &s1ap_InitialContextSetupRequestIEs2->handoverRestrictionList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_HandoverRestrictionList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_UERADIOCAPABILITY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UERadioCapability.compare(&asn_DEF_S1ap_UERadioCapability, &s1ap_InitialContextSetupRequestIEs1->ueRadioCapability, &asn_DEF_S1ap_UERadioCapability, &s1ap_InitialContextSetupRequestIEs2->ueRadioCapability); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UERadioCapability.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SubscriberProfileIDforRFP.compare(&asn_DEF_S1ap_SubscriberProfileIDforRFP, &s1ap_InitialContextSetupRequestIEs1->subscriberProfileIDforRFP, &asn_DEF_S1ap_SubscriberProfileIDforRFP, &s1ap_InitialContextSetupRequestIEs2->subscriberProfileIDforRFP); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SubscriberProfileIDforRFP.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_CSFALLBACKINDICATOR_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSFallbackIndicator.compare(&asn_DEF_S1ap_CSFallbackIndicator, &s1ap_InitialContextSetupRequestIEs1->csFallbackIndicator, &asn_DEF_S1ap_CSFallbackIndicator, &s1ap_InitialContextSetupRequestIEs2->csFallbackIndicator); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSFallbackIndicator.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SRVCCOperationPossible.compare(&asn_DEF_S1ap_SRVCCOperationPossible, &s1ap_InitialContextSetupRequestIEs1->srvccOperationPossible, &asn_DEF_S1ap_SRVCCOperationPossible, &s1ap_InitialContextSetupRequestIEs2->srvccOperationPossible); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SRVCCOperationPossible.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSGMembershipStatus.compare(&asn_DEF_S1ap_CSGMembershipStatus, &s1ap_InitialContextSetupRequestIEs1->csgMembershipStatus, &asn_DEF_S1ap_CSGMembershipStatus, &s1ap_InitialContextSetupRequestIEs2->csgMembershipStatus); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSGMembershipStatus.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_REGISTEREDLAI_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_LAI.compare(&asn_DEF_S1ap_LAI, &s1ap_InitialContextSetupRequestIEs1->registeredLAI, &asn_DEF_S1ap_LAI, &s1ap_InitialContextSetupRequestIEs2->registeredLAI); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_LAI.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_GUMMEI_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GUMMEI.compare(&asn_DEF_S1ap_GUMMEI, &s1ap_InitialContextSetupRequestIEs1->gummei_id, &asn_DEF_S1ap_GUMMEI, &s1ap_InitialContextSetupRequestIEs2->gummei_id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GUMMEI.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_MME_UE_S1AP_ID_2_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupRequestIEs1->mme_ue_s1ap_id_2, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupRequestIEs2->mme_ue_s1ap_id_2); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupRequestIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ManagementBasedMDTAllowed.compare(&asn_DEF_S1ap_ManagementBasedMDTAllowed, &s1ap_InitialContextSetupRequestIEs1->managementBasedMDTAllowed, &asn_DEF_S1ap_ManagementBasedMDTAllowed, &s1ap_InitialContextSetupRequestIEs2->managementBasedMDTAllowed); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ManagementBasedMDTAllowed.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_initialuemessageies(
    S1ap_InitialUEMessageIEs_t *s1ap_InitialUEMessageIEs1,
    S1ap_InitialUEMessageIEs_t *s1ap_InitialUEMessageIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_InitialUEMessageIEs1 != NULL);
    assert(s1ap_InitialUEMessageIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialUEMessageIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialUEMessageIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_NAS_PDU.compare(&asn_DEF_S1ap_NAS_PDU, &s1ap_InitialUEMessageIEs1->nas_pdu, &asn_DEF_S1ap_NAS_PDU, &s1ap_InitialUEMessageIEs2->nas_pdu);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_NAS_PDU.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TAI.compare(&asn_DEF_S1ap_TAI, &s1ap_InitialUEMessageIEs1->tai, &asn_DEF_S1ap_TAI, &s1ap_InitialUEMessageIEs2->tai);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TAI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_EUTRAN_CGI.compare(&asn_DEF_S1ap_EUTRAN_CGI, &s1ap_InitialUEMessageIEs1->eutran_cgi, &asn_DEF_S1ap_EUTRAN_CGI, &s1ap_InitialUEMessageIEs2->eutran_cgi);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_EUTRAN_CGI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_RRC_Establishment_Cause.compare(&asn_DEF_S1ap_RRC_Establishment_Cause, &s1ap_InitialUEMessageIEs1->rrC_Establishment_Cause, &asn_DEF_S1ap_RRC_Establishment_Cause, &s1ap_InitialUEMessageIEs2->rrC_Establishment_Cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_RRC_Establishment_Cause.name;
    }
    if (s1ap_InitialUEMessageIEs1->presenceMask != s1ap_InitialUEMessageIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_S_TMSI.name;rv->structure1 = s1ap_InitialUEMessageIEs1;rv->structure2 = s1ap_InitialUEMessageIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_InitialUEMessageIEs1->presenceMask & S1AP_INITIALUEMESSAGEIES_S_TMSI_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_S_TMSI.compare(&asn_DEF_S1ap_S_TMSI, &s1ap_InitialUEMessageIEs1->s_tmsi, &asn_DEF_S1ap_S_TMSI, &s1ap_InitialUEMessageIEs2->s_tmsi); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_S_TMSI.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialUEMessageIEs1->presenceMask & S1AP_INITIALUEMESSAGEIES_CSG_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_Id.compare(&asn_DEF_S1ap_CSG_Id, &s1ap_InitialUEMessageIEs1->csG_Id, &asn_DEF_S1ap_CSG_Id, &s1ap_InitialUEMessageIEs2->csG_Id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_Id.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialUEMessageIEs1->presenceMask & S1AP_INITIALUEMESSAGEIES_GUMMEI_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GUMMEI.compare(&asn_DEF_S1ap_GUMMEI, &s1ap_InitialUEMessageIEs1->gummei_id, &asn_DEF_S1ap_GUMMEI, &s1ap_InitialUEMessageIEs2->gummei_id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GUMMEI.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialUEMessageIEs1->presenceMask & S1AP_INITIALUEMESSAGEIES_CELLACCESSMODE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CellAccessMode.compare(&asn_DEF_S1ap_CellAccessMode, &s1ap_InitialUEMessageIEs1->cellAccessMode, &asn_DEF_S1ap_CellAccessMode, &s1ap_InitialUEMessageIEs2->cellAccessMode); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CellAccessMode.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialUEMessageIEs1->presenceMask & S1AP_INITIALUEMESSAGEIES_GW_TRANSPORTLAYERADDRESS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TransportLayerAddress.compare(&asn_DEF_S1ap_TransportLayerAddress, &s1ap_InitialUEMessageIEs1->gW_TransportLayerAddress, &asn_DEF_S1ap_TransportLayerAddress, &s1ap_InitialUEMessageIEs2->gW_TransportLayerAddress); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TransportLayerAddress.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialUEMessageIEs1->presenceMask & S1AP_INITIALUEMESSAGEIES_RELAYNODE_INDICATOR_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_RelayNode_Indicator.compare(&asn_DEF_S1ap_RelayNode_Indicator, &s1ap_InitialUEMessageIEs1->relayNode_Indicator, &asn_DEF_S1ap_RelayNode_Indicator, &s1ap_InitialUEMessageIEs2->relayNode_Indicator); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_RelayNode_Indicator.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_locationreporties(
    S1ap_LocationReportIEs_t *s1ap_LocationReportIEs1,
    S1ap_LocationReportIEs_t *s1ap_LocationReportIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_LocationReportIEs1 != NULL);
    assert(s1ap_LocationReportIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_LocationReportIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_LocationReportIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_LocationReportIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_LocationReportIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_EUTRAN_CGI.compare(&asn_DEF_S1ap_EUTRAN_CGI, &s1ap_LocationReportIEs1->eutran_cgi, &asn_DEF_S1ap_EUTRAN_CGI, &s1ap_LocationReportIEs2->eutran_cgi);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_EUTRAN_CGI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TAI.compare(&asn_DEF_S1ap_TAI, &s1ap_LocationReportIEs1->tai, &asn_DEF_S1ap_TAI, &s1ap_LocationReportIEs2->tai);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TAI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_RequestType.compare(&asn_DEF_S1ap_RequestType, &s1ap_LocationReportIEs1->requestType, &asn_DEF_S1ap_RequestType, &s1ap_LocationReportIEs2->requestType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_RequestType.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabreleasecommandies(
    S1ap_E_RABReleaseCommandIEs_t *s1ap_E_RABReleaseCommandIEs1,
    S1ap_E_RABReleaseCommandIEs_t *s1ap_E_RABReleaseCommandIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABReleaseCommandIEs1 != NULL);
    assert(s1ap_E_RABReleaseCommandIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABReleaseCommandIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABReleaseCommandIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABReleaseCommandIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABReleaseCommandIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_E_RABReleaseCommandIEs1->presenceMask != s1ap_E_RABReleaseCommandIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;rv->structure1 = s1ap_E_RABReleaseCommandIEs1;rv->structure2 = s1ap_E_RABReleaseCommandIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_E_RABReleaseCommandIEs1->presenceMask & S1AP_E_RABRELEASECOMMANDIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_E_RABReleaseCommandIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_E_RABReleaseCommandIEs2->uEaggregateMaximumBitrate); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;        }        assert(0);
    }

    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_E_RABReleaseCommandIEs1->e_RABToBeReleasedList, &s1ap_E_RABReleaseCommandIEs2->e_RABToBeReleasedList);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    /* Optional field */
    if (s1ap_E_RABReleaseCommandIEs1->presenceMask & S1AP_E_RABRELEASECOMMANDIES_NAS_PDU_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_NAS_PDU.compare(&asn_DEF_S1ap_NAS_PDU, &s1ap_E_RABReleaseCommandIEs1->nas_pdu, &asn_DEF_S1ap_NAS_PDU, &s1ap_E_RABReleaseCommandIEs2->nas_pdu); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_NAS_PDU.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecontextmodificationresponseies(
    S1ap_UEContextModificationResponseIEs_t *s1ap_UEContextModificationResponseIEs1,
    S1ap_UEContextModificationResponseIEs_t *s1ap_UEContextModificationResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UEContextModificationResponseIEs1 != NULL);
    assert(s1ap_UEContextModificationResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextModificationResponseIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextModificationResponseIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextModificationResponseIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextModificationResponseIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_UEContextModificationResponseIEs1->presenceMask != s1ap_UEContextModificationResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_UEContextModificationResponseIEs1;rv->structure2 = s1ap_UEContextModificationResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UEContextModificationResponseIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_UEContextModificationResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_UEContextModificationResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecontextmodificationrequesties(
    S1ap_UEContextModificationRequestIEs_t *s1ap_UEContextModificationRequestIEs1,
    S1ap_UEContextModificationRequestIEs_t *s1ap_UEContextModificationRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UEContextModificationRequestIEs1 != NULL);
    assert(s1ap_UEContextModificationRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextModificationRequestIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextModificationRequestIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextModificationRequestIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextModificationRequestIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_UEContextModificationRequestIEs1->presenceMask != s1ap_UEContextModificationRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_SecurityKey.name;rv->structure1 = s1ap_UEContextModificationRequestIEs1;rv->structure2 = s1ap_UEContextModificationRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_SECURITYKEY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SecurityKey.compare(&asn_DEF_S1ap_SecurityKey, &s1ap_UEContextModificationRequestIEs1->securityKey, &asn_DEF_S1ap_SecurityKey, &s1ap_UEContextModificationRequestIEs2->securityKey); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SecurityKey.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SubscriberProfileIDforRFP.compare(&asn_DEF_S1ap_SubscriberProfileIDforRFP, &s1ap_UEContextModificationRequestIEs1->subscriberProfileIDforRFP, &asn_DEF_S1ap_SubscriberProfileIDforRFP, &s1ap_UEContextModificationRequestIEs2->subscriberProfileIDforRFP); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SubscriberProfileIDforRFP.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_UEContextModificationRequestIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_UEContextModificationRequestIEs2->uEaggregateMaximumBitrate); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSFALLBACKINDICATOR_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSFallbackIndicator.compare(&asn_DEF_S1ap_CSFallbackIndicator, &s1ap_UEContextModificationRequestIEs1->csFallbackIndicator, &asn_DEF_S1ap_CSFallbackIndicator, &s1ap_UEContextModificationRequestIEs2->csFallbackIndicator); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSFallbackIndicator.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_UESECURITYCAPABILITIES_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UESecurityCapabilities.compare(&asn_DEF_S1ap_UESecurityCapabilities, &s1ap_UEContextModificationRequestIEs1->ueSecurityCapabilities, &asn_DEF_S1ap_UESecurityCapabilities, &s1ap_UEContextModificationRequestIEs2->ueSecurityCapabilities); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UESecurityCapabilities.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSGMembershipStatus.compare(&asn_DEF_S1ap_CSGMembershipStatus, &s1ap_UEContextModificationRequestIEs1->csgMembershipStatus, &asn_DEF_S1ap_CSGMembershipStatus, &s1ap_UEContextModificationRequestIEs2->csgMembershipStatus); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSGMembershipStatus.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UEContextModificationRequestIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_REGISTEREDLAI_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_LAI.compare(&asn_DEF_S1ap_LAI, &s1ap_UEContextModificationRequestIEs1->registeredLAI, &asn_DEF_S1ap_LAI, &s1ap_UEContextModificationRequestIEs2->registeredLAI); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_LAI.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_locationreportingcontrolies(
    S1ap_LocationReportingControlIEs_t *s1ap_LocationReportingControlIEs1,
    S1ap_LocationReportingControlIEs_t *s1ap_LocationReportingControlIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_LocationReportingControlIEs1 != NULL);
    assert(s1ap_LocationReportingControlIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_LocationReportingControlIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_LocationReportingControlIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_LocationReportingControlIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_LocationReportingControlIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_RequestType.compare(&asn_DEF_S1ap_RequestType, &s1ap_LocationReportingControlIEs1->requestType, &asn_DEF_S1ap_RequestType, &s1ap_LocationReportingControlIEs2->requestType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_RequestType.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uplinks1cdma2000tunnelingies(
    S1ap_UplinkS1cdma2000tunnelingIEs_t *s1ap_UplinkS1cdma2000tunnelingIEs1,
    S1ap_UplinkS1cdma2000tunnelingIEs_t *s1ap_UplinkS1cdma2000tunnelingIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UplinkS1cdma2000tunnelingIEs1 != NULL);
    assert(s1ap_UplinkS1cdma2000tunnelingIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UplinkS1cdma2000tunnelingIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UplinkS1cdma2000tunnelingIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UplinkS1cdma2000tunnelingIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UplinkS1cdma2000tunnelingIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cdma2000RATType.compare(&asn_DEF_S1ap_Cdma2000RATType, &s1ap_UplinkS1cdma2000tunnelingIEs1->cdma2000RATType, &asn_DEF_S1ap_Cdma2000RATType, &s1ap_UplinkS1cdma2000tunnelingIEs2->cdma2000RATType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000RATType.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cdma2000SectorID.compare(&asn_DEF_S1ap_Cdma2000SectorID, &s1ap_UplinkS1cdma2000tunnelingIEs1->cdma2000SectorID, &asn_DEF_S1ap_Cdma2000SectorID, &s1ap_UplinkS1cdma2000tunnelingIEs2->cdma2000SectorID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000SectorID.name;
    }
    if (s1ap_UplinkS1cdma2000tunnelingIEs1->presenceMask != s1ap_UplinkS1cdma2000tunnelingIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_Cdma2000HORequiredIndication.name;rv->structure1 = s1ap_UplinkS1cdma2000tunnelingIEs1;rv->structure2 = s1ap_UplinkS1cdma2000tunnelingIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UplinkS1cdma2000tunnelingIEs1->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000HOREQUIREDINDICATION_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Cdma2000HORequiredIndication.compare(&asn_DEF_S1ap_Cdma2000HORequiredIndication, &s1ap_UplinkS1cdma2000tunnelingIEs1->cdma2000HORequiredIndication, &asn_DEF_S1ap_Cdma2000HORequiredIndication, &s1ap_UplinkS1cdma2000tunnelingIEs2->cdma2000HORequiredIndication); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000HORequiredIndication.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UplinkS1cdma2000tunnelingIEs1->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXSRVCCINFO_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Cdma2000OneXSRVCCInfo.compare(&asn_DEF_S1ap_Cdma2000OneXSRVCCInfo, &s1ap_UplinkS1cdma2000tunnelingIEs1->cdma2000OneXSRVCCInfo, &asn_DEF_S1ap_Cdma2000OneXSRVCCInfo, &s1ap_UplinkS1cdma2000tunnelingIEs2->cdma2000OneXSRVCCInfo); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000OneXSRVCCInfo.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_UplinkS1cdma2000tunnelingIEs1->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXRAND_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Cdma2000OneXRAND.compare(&asn_DEF_S1ap_Cdma2000OneXRAND, &s1ap_UplinkS1cdma2000tunnelingIEs1->cdma2000OneXRAND, &asn_DEF_S1ap_Cdma2000OneXRAND, &s1ap_UplinkS1cdma2000tunnelingIEs2->cdma2000OneXRAND); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000OneXRAND.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cdma2000PDU.compare(&asn_DEF_S1ap_Cdma2000PDU, &s1ap_UplinkS1cdma2000tunnelingIEs1->cdma2000PDU, &asn_DEF_S1ap_Cdma2000PDU, &s1ap_UplinkS1cdma2000tunnelingIEs2->cdma2000PDU);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000PDU.name;
    }
    /* Optional field */
    if (s1ap_UplinkS1cdma2000tunnelingIEs1->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_EUTRANROUNDTRIPDELAYESTIMATIONINFO_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_EUTRANRoundTripDelayEstimationInfo.compare(&asn_DEF_S1ap_EUTRANRoundTripDelayEstimationInfo, &s1ap_UplinkS1cdma2000tunnelingIEs1->eutranRoundTripDelayEstimationInfo, &asn_DEF_S1ap_EUTRANRoundTripDelayEstimationInfo, &s1ap_UplinkS1cdma2000tunnelingIEs2->eutranRoundTripDelayEstimationInfo); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_EUTRANRoundTripDelayEstimationInfo.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handoverrequesties(
    S1ap_HandoverRequestIEs_t *s1ap_HandoverRequestIEs1,
    S1ap_HandoverRequestIEs_t *s1ap_HandoverRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverRequestIEs1 != NULL);
    assert(s1ap_HandoverRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequestIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequestIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_HandoverType.compare(&asn_DEF_S1ap_HandoverType, &s1ap_HandoverRequestIEs1->handoverType, &asn_DEF_S1ap_HandoverType, &s1ap_HandoverRequestIEs2->handoverType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_HandoverType.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_HandoverRequestIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_HandoverRequestIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_HandoverRequestIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_HandoverRequestIEs2->uEaggregateMaximumBitrate);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabtobesetuplisthoreq(&s1ap_HandoverRequestIEs1->e_RABToBeSetupListHOReq, &s1ap_HandoverRequestIEs2->e_RABToBeSetupListHOReq);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Source_ToTarget_TransparentContainer.compare(&asn_DEF_S1ap_Source_ToTarget_TransparentContainer, &s1ap_HandoverRequestIEs1->source_ToTarget_TransparentContainer, &asn_DEF_S1ap_Source_ToTarget_TransparentContainer, &s1ap_HandoverRequestIEs2->source_ToTarget_TransparentContainer);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Source_ToTarget_TransparentContainer.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UESecurityCapabilities.compare(&asn_DEF_S1ap_UESecurityCapabilities, &s1ap_HandoverRequestIEs1->ueSecurityCapabilities, &asn_DEF_S1ap_UESecurityCapabilities, &s1ap_HandoverRequestIEs2->ueSecurityCapabilities);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UESecurityCapabilities.name;
    }
    if (s1ap_HandoverRequestIEs1->presenceMask != s1ap_HandoverRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_HandoverRestrictionList.name;rv->structure1 = s1ap_HandoverRequestIEs1;rv->structure2 = s1ap_HandoverRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_HandoverRestrictionList.compare(&asn_DEF_S1ap_HandoverRestrictionList, &s1ap_HandoverRequestIEs1->handoverRestrictionList, &asn_DEF_S1ap_HandoverRestrictionList, &s1ap_HandoverRequestIEs2->handoverRestrictionList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_HandoverRestrictionList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_TRACEACTIVATION_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TraceActivation.compare(&asn_DEF_S1ap_TraceActivation, &s1ap_HandoverRequestIEs1->traceActivation, &asn_DEF_S1ap_TraceActivation, &s1ap_HandoverRequestIEs2->traceActivation); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TraceActivation.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_REQUESTTYPE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_RequestType.compare(&asn_DEF_S1ap_RequestType, &s1ap_HandoverRequestIEs1->requestType, &asn_DEF_S1ap_RequestType, &s1ap_HandoverRequestIEs2->requestType); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_RequestType.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SRVCCOperationPossible.compare(&asn_DEF_S1ap_SRVCCOperationPossible, &s1ap_HandoverRequestIEs1->srvccOperationPossible, &asn_DEF_S1ap_SRVCCOperationPossible, &s1ap_HandoverRequestIEs2->srvccOperationPossible); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SRVCCOperationPossible.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SecurityContext.compare(&asn_DEF_S1ap_SecurityContext, &s1ap_HandoverRequestIEs1->securityContext, &asn_DEF_S1ap_SecurityContext, &s1ap_HandoverRequestIEs2->securityContext);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SecurityContext.name;
    }
    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_CSG_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_Id.compare(&asn_DEF_S1ap_CSG_Id, &s1ap_HandoverRequestIEs1->csG_Id, &asn_DEF_S1ap_CSG_Id, &s1ap_HandoverRequestIEs2->csG_Id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_Id.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSGMembershipStatus.compare(&asn_DEF_S1ap_CSGMembershipStatus, &s1ap_HandoverRequestIEs1->csgMembershipStatus, &asn_DEF_S1ap_CSGMembershipStatus, &s1ap_HandoverRequestIEs2->csgMembershipStatus); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSGMembershipStatus.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_GUMMEI_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GUMMEI.compare(&asn_DEF_S1ap_GUMMEI, &s1ap_HandoverRequestIEs1->gummei_id, &asn_DEF_S1ap_GUMMEI, &s1ap_HandoverRequestIEs2->gummei_id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GUMMEI.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_MME_UE_S1AP_ID_2_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequestIEs1->mme_ue_s1ap_id_2, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequestIEs2->mme_ue_s1ap_id_2); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestIEs1->presenceMask & S1AP_HANDOVERREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ManagementBasedMDTAllowed.compare(&asn_DEF_S1ap_ManagementBasedMDTAllowed, &s1ap_HandoverRequestIEs1->managementBasedMDTAllowed, &asn_DEF_S1ap_ManagementBasedMDTAllowed, &s1ap_HandoverRequestIEs2->managementBasedMDTAllowed); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ManagementBasedMDTAllowed.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handoverrequiredies(
    S1ap_HandoverRequiredIEs_t *s1ap_HandoverRequiredIEs1,
    S1ap_HandoverRequiredIEs_t *s1ap_HandoverRequiredIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverRequiredIEs1 != NULL);
    assert(s1ap_HandoverRequiredIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequiredIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequiredIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverRequiredIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverRequiredIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_HandoverType.compare(&asn_DEF_S1ap_HandoverType, &s1ap_HandoverRequiredIEs1->handoverType, &asn_DEF_S1ap_HandoverType, &s1ap_HandoverRequiredIEs2->handoverType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_HandoverType.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_HandoverRequiredIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_HandoverRequiredIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TargetID.compare(&asn_DEF_S1ap_TargetID, &s1ap_HandoverRequiredIEs1->targetID, &asn_DEF_S1ap_TargetID, &s1ap_HandoverRequiredIEs2->targetID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TargetID.name;
    }
    if (s1ap_HandoverRequiredIEs1->presenceMask != s1ap_HandoverRequiredIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_Direct_Forwarding_Path_Availability.name;rv->structure1 = s1ap_HandoverRequiredIEs1;rv->structure2 = s1ap_HandoverRequiredIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_DIRECT_FORWARDING_PATH_AVAILABILITY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Direct_Forwarding_Path_Availability.compare(&asn_DEF_S1ap_Direct_Forwarding_Path_Availability, &s1ap_HandoverRequiredIEs1->direct_Forwarding_Path_Availability, &asn_DEF_S1ap_Direct_Forwarding_Path_Availability, &s1ap_HandoverRequiredIEs2->direct_Forwarding_Path_Availability); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Direct_Forwarding_Path_Availability.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_SRVCCHOINDICATION_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SRVCCHOIndication.compare(&asn_DEF_S1ap_SRVCCHOIndication, &s1ap_HandoverRequiredIEs1->srvcchoIndication, &asn_DEF_S1ap_SRVCCHOIndication, &s1ap_HandoverRequiredIEs2->srvcchoIndication); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SRVCCHOIndication.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Source_ToTarget_TransparentContainer.compare(&asn_DEF_S1ap_Source_ToTarget_TransparentContainer, &s1ap_HandoverRequiredIEs1->source_ToTarget_TransparentContainer, &asn_DEF_S1ap_Source_ToTarget_TransparentContainer, &s1ap_HandoverRequiredIEs2->source_ToTarget_TransparentContainer);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Source_ToTarget_TransparentContainer.name;
    }
    /* Optional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_SOURCE_TOTARGET_TRANSPARENTCONTAINER_SECONDARY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Source_ToTarget_TransparentContainer.compare(&asn_DEF_S1ap_Source_ToTarget_TransparentContainer, &s1ap_HandoverRequiredIEs1->source_ToTarget_TransparentContainer_Secondary, &asn_DEF_S1ap_Source_ToTarget_TransparentContainer, &s1ap_HandoverRequiredIEs2->source_ToTarget_TransparentContainer_Secondary); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Source_ToTarget_TransparentContainer.name;        }        assert(0);
    }

    /* Conditional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_MSCLASSMARK2_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MSClassmark2.compare(&asn_DEF_S1ap_MSClassmark2, &s1ap_HandoverRequiredIEs1->msClassmark2, &asn_DEF_S1ap_MSClassmark2, &s1ap_HandoverRequiredIEs2->msClassmark2); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MSClassmark2.name;        }        assert(0);
    }

    /* Conditional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_MSCLASSMARK3_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MSClassmark3.compare(&asn_DEF_S1ap_MSClassmark3, &s1ap_HandoverRequiredIEs1->msClassmark3, &asn_DEF_S1ap_MSClassmark3, &s1ap_HandoverRequiredIEs2->msClassmark3); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MSClassmark3.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_CSG_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_Id.compare(&asn_DEF_S1ap_CSG_Id, &s1ap_HandoverRequiredIEs1->csG_Id, &asn_DEF_S1ap_CSG_Id, &s1ap_HandoverRequiredIEs2->csG_Id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_Id.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_CELLACCESSMODE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CellAccessMode.compare(&asn_DEF_S1ap_CellAccessMode, &s1ap_HandoverRequiredIEs1->cellAccessMode, &asn_DEF_S1ap_CellAccessMode, &s1ap_HandoverRequiredIEs2->cellAccessMode); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CellAccessMode.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequiredIEs1->presenceMask & S1AP_HANDOVERREQUIREDIES_PS_SERVICENOTAVAILABLE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_PS_ServiceNotAvailable.compare(&asn_DEF_S1ap_PS_ServiceNotAvailable, &s1ap_HandoverRequiredIEs1->pS_ServiceNotAvailable, &asn_DEF_S1ap_PS_ServiceNotAvailable, &s1ap_HandoverRequiredIEs2->pS_ServiceNotAvailable); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_PS_ServiceNotAvailable.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_mmeconfigurationupdateacknowledgeies(
    S1ap_MMEConfigurationUpdateAcknowledgeIEs_t *s1ap_MMEConfigurationUpdateAcknowledgeIEs1,
    S1ap_MMEConfigurationUpdateAcknowledgeIEs_t *s1ap_MMEConfigurationUpdateAcknowledgeIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_MMEConfigurationUpdateAcknowledgeIEs1 != NULL);
    assert(s1ap_MMEConfigurationUpdateAcknowledgeIEs2 != NULL);
    if (s1ap_MMEConfigurationUpdateAcknowledgeIEs1->presenceMask != s1ap_MMEConfigurationUpdateAcknowledgeIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_MMEConfigurationUpdateAcknowledgeIEs1;rv->structure2 = s1ap_MMEConfigurationUpdateAcknowledgeIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_MMEConfigurationUpdateAcknowledgeIEs1->presenceMask & S1AP_MMECONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_MMEConfigurationUpdateAcknowledgeIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_MMEConfigurationUpdateAcknowledgeIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_killresponseies(
    S1ap_KillResponseIEs_t *s1ap_KillResponseIEs1,
    S1ap_KillResponseIEs_t *s1ap_KillResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_KillResponseIEs1 != NULL);
    assert(s1ap_KillResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MessageIdentifier.compare(&asn_DEF_S1ap_MessageIdentifier, &s1ap_KillResponseIEs1->messageIdentifier, &asn_DEF_S1ap_MessageIdentifier, &s1ap_KillResponseIEs2->messageIdentifier);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MessageIdentifier.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SerialNumber.compare(&asn_DEF_S1ap_SerialNumber, &s1ap_KillResponseIEs1->serialNumber, &asn_DEF_S1ap_SerialNumber, &s1ap_KillResponseIEs2->serialNumber);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SerialNumber.name;
    }
    if (s1ap_KillResponseIEs1->presenceMask != s1ap_KillResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_BroadcastCancelledAreaList.name;rv->structure1 = s1ap_KillResponseIEs1;rv->structure2 = s1ap_KillResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_KillResponseIEs1->presenceMask & S1AP_KILLRESPONSEIES_BROADCASTCANCELLEDAREALIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_BroadcastCancelledAreaList.compare(&asn_DEF_S1ap_BroadcastCancelledAreaList, &s1ap_KillResponseIEs1->broadcastCancelledAreaList, &asn_DEF_S1ap_BroadcastCancelledAreaList, &s1ap_KillResponseIEs2->broadcastCancelledAreaList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_BroadcastCancelledAreaList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_KillResponseIEs1->presenceMask & S1AP_KILLRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_KillResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_KillResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_mmestatustransferies(
    S1ap_MMEStatusTransferIEs_t *s1ap_MMEStatusTransferIEs1,
    S1ap_MMEStatusTransferIEs_t *s1ap_MMEStatusTransferIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_MMEStatusTransferIEs1 != NULL);
    assert(s1ap_MMEStatusTransferIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_MMEStatusTransferIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_MMEStatusTransferIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_MMEStatusTransferIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_MMEStatusTransferIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer.compare(&asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer, &s1ap_MMEStatusTransferIEs1->eNB_StatusTransfer_TransparentContainer, &asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer, &s1ap_MMEStatusTransferIEs2->eNB_StatusTransfer_TransparentContainer);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_mmeconfigurationupdateies(
    S1ap_MMEConfigurationUpdateIEs_t *s1ap_MMEConfigurationUpdateIEs1,
    S1ap_MMEConfigurationUpdateIEs_t *s1ap_MMEConfigurationUpdateIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_MMEConfigurationUpdateIEs1 != NULL);
    assert(s1ap_MMEConfigurationUpdateIEs2 != NULL);
    if (s1ap_MMEConfigurationUpdateIEs1->presenceMask != s1ap_MMEConfigurationUpdateIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_MMEname.name;rv->structure1 = s1ap_MMEConfigurationUpdateIEs1;rv->structure2 = s1ap_MMEConfigurationUpdateIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_MMEConfigurationUpdateIEs1->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_MMENAME_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MMEname.compare(&asn_DEF_S1ap_MMEname, &s1ap_MMEConfigurationUpdateIEs1->mmEname, &asn_DEF_S1ap_MMEname, &s1ap_MMEConfigurationUpdateIEs2->mmEname); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MMEname.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_MMEConfigurationUpdateIEs1->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_SERVEDGUMMEIS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ServedGUMMEIs.compare(&asn_DEF_S1ap_ServedGUMMEIs, &s1ap_MMEConfigurationUpdateIEs1->servedGUMMEIs, &asn_DEF_S1ap_ServedGUMMEIs, &s1ap_MMEConfigurationUpdateIEs2->servedGUMMEIs); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ServedGUMMEIs.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_MMEConfigurationUpdateIEs1->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_RELATIVEMMECAPACITY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_RelativeMMECapacity.compare(&asn_DEF_S1ap_RelativeMMECapacity, &s1ap_MMEConfigurationUpdateIEs1->relativeMMECapacity, &asn_DEF_S1ap_RelativeMMECapacity, &s1ap_MMEConfigurationUpdateIEs2->relativeMMECapacity); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_RelativeMMECapacity.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabmodifyrequesties(
    S1ap_E_RABModifyRequestIEs_t *s1ap_E_RABModifyRequestIEs1,
    S1ap_E_RABModifyRequestIEs_t *s1ap_E_RABModifyRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABModifyRequestIEs1 != NULL);
    assert(s1ap_E_RABModifyRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABModifyRequestIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABModifyRequestIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABModifyRequestIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABModifyRequestIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_E_RABModifyRequestIEs1->presenceMask != s1ap_E_RABModifyRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;rv->structure1 = s1ap_E_RABModifyRequestIEs1;rv->structure2 = s1ap_E_RABModifyRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_E_RABModifyRequestIEs1->presenceMask & S1AP_E_RABMODIFYREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_E_RABModifyRequestIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_E_RABModifyRequestIEs2->uEaggregateMaximumBitrate); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;        }        assert(0);
    }

    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabtobemodifiedlistbearermodreq(&s1ap_E_RABModifyRequestIEs1->e_RABToBeModifiedListBearerModReq, &s1ap_E_RABModifyRequestIEs2->e_RABToBeModifiedListBearerModReq);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_downlinknastransporties(
    S1ap_DownlinkNASTransportIEs_t *s1ap_DownlinkNASTransportIEs1,
    S1ap_DownlinkNASTransportIEs_t *s1ap_DownlinkNASTransportIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_DownlinkNASTransportIEs1 != NULL);
    assert(s1ap_DownlinkNASTransportIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DownlinkNASTransportIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DownlinkNASTransportIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DownlinkNASTransportIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DownlinkNASTransportIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_NAS_PDU.compare(&asn_DEF_S1ap_NAS_PDU, &s1ap_DownlinkNASTransportIEs1->nas_pdu, &asn_DEF_S1ap_NAS_PDU, &s1ap_DownlinkNASTransportIEs2->nas_pdu);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_NAS_PDU.name;
    }
    if (s1ap_DownlinkNASTransportIEs1->presenceMask != s1ap_DownlinkNASTransportIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_HandoverRestrictionList.name;rv->structure1 = s1ap_DownlinkNASTransportIEs1;rv->structure2 = s1ap_DownlinkNASTransportIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_DownlinkNASTransportIEs1->presenceMask & S1AP_DOWNLINKNASTRANSPORTIES_HANDOVERRESTRICTIONLIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_HandoverRestrictionList.compare(&asn_DEF_S1ap_HandoverRestrictionList, &s1ap_DownlinkNASTransportIEs1->handoverRestrictionList, &asn_DEF_S1ap_HandoverRestrictionList, &s1ap_DownlinkNASTransportIEs2->handoverRestrictionList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_HandoverRestrictionList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_DownlinkNASTransportIEs1->presenceMask & S1AP_DOWNLINKNASTRANSPORTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SubscriberProfileIDforRFP.compare(&asn_DEF_S1ap_SubscriberProfileIDforRFP, &s1ap_DownlinkNASTransportIEs1->subscriberProfileIDforRFP, &asn_DEF_S1ap_SubscriberProfileIDforRFP, &s1ap_DownlinkNASTransportIEs2->subscriberProfileIDforRFP); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SubscriberProfileIDforRFP.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_enbconfigurationupdatefailureies(
    S1ap_ENBConfigurationUpdateFailureIEs_t *s1ap_ENBConfigurationUpdateFailureIEs1,
    S1ap_ENBConfigurationUpdateFailureIEs_t *s1ap_ENBConfigurationUpdateFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ENBConfigurationUpdateFailureIEs1 != NULL);
    assert(s1ap_ENBConfigurationUpdateFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_ENBConfigurationUpdateFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_ENBConfigurationUpdateFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_ENBConfigurationUpdateFailureIEs1->presenceMask != s1ap_ENBConfigurationUpdateFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_TimeToWait.name;rv->structure1 = s1ap_ENBConfigurationUpdateFailureIEs1;rv->structure2 = s1ap_ENBConfigurationUpdateFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_ENBConfigurationUpdateFailureIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TimeToWait.compare(&asn_DEF_S1ap_TimeToWait, &s1ap_ENBConfigurationUpdateFailureIEs1->timeToWait, &asn_DEF_S1ap_TimeToWait, &s1ap_ENBConfigurationUpdateFailureIEs2->timeToWait); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TimeToWait.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ENBConfigurationUpdateFailureIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ENBConfigurationUpdateFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ENBConfigurationUpdateFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecontextreleasecompleteies(
    S1ap_UEContextReleaseCompleteIEs_t *s1ap_UEContextReleaseCompleteIEs1,
    S1ap_UEContextReleaseCompleteIEs_t *s1ap_UEContextReleaseCompleteIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UEContextReleaseCompleteIEs1 != NULL);
    assert(s1ap_UEContextReleaseCompleteIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextReleaseCompleteIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextReleaseCompleteIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextReleaseCompleteIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextReleaseCompleteIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_UEContextReleaseCompleteIEs1->presenceMask != s1ap_UEContextReleaseCompleteIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_UEContextReleaseCompleteIEs1;rv->structure2 = s1ap_UEContextReleaseCompleteIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UEContextReleaseCompleteIEs1->presenceMask & S1AP_UECONTEXTRELEASECOMPLETEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_UEContextReleaseCompleteIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_UEContextReleaseCompleteIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_reseties(
    S1ap_ResetIEs_t *s1ap_ResetIEs1,
    S1ap_ResetIEs_t *s1ap_ResetIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ResetIEs1 != NULL);
    assert(s1ap_ResetIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_ResetIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_ResetIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ResetType.compare(&asn_DEF_S1ap_ResetType, &s1ap_ResetIEs1->resetType, &asn_DEF_S1ap_ResetType, &s1ap_ResetIEs2->resetType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ResetType.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_tracestarties(
    S1ap_TraceStartIEs_t *s1ap_TraceStartIEs1,
    S1ap_TraceStartIEs_t *s1ap_TraceStartIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_TraceStartIEs1 != NULL);
    assert(s1ap_TraceStartIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_TraceStartIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_TraceStartIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_TraceStartIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_TraceStartIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TraceActivation.compare(&asn_DEF_S1ap_TraceActivation, &s1ap_TraceStartIEs1->traceActivation, &asn_DEF_S1ap_TraceActivation, &s1ap_TraceStartIEs2->traceActivation);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TraceActivation.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_s1setupresponseies(
    S1ap_S1SetupResponseIEs_t *s1ap_S1SetupResponseIEs1,
    S1ap_S1SetupResponseIEs_t *s1ap_S1SetupResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_S1SetupResponseIEs1 != NULL);
    assert(s1ap_S1SetupResponseIEs2 != NULL);
    if (s1ap_S1SetupResponseIEs1->presenceMask != s1ap_S1SetupResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_MMEname.name;rv->structure1 = s1ap_S1SetupResponseIEs1;rv->structure2 = s1ap_S1SetupResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_S1SetupResponseIEs1->presenceMask & S1AP_S1SETUPRESPONSEIES_MMENAME_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MMEname.compare(&asn_DEF_S1ap_MMEname, &s1ap_S1SetupResponseIEs1->mmEname, &asn_DEF_S1ap_MMEname, &s1ap_S1SetupResponseIEs2->mmEname); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MMEname.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ServedGUMMEIs.compare(&asn_DEF_S1ap_ServedGUMMEIs, &s1ap_S1SetupResponseIEs1->servedGUMMEIs, &asn_DEF_S1ap_ServedGUMMEIs, &s1ap_S1SetupResponseIEs2->servedGUMMEIs);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ServedGUMMEIs.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_RelativeMMECapacity.compare(&asn_DEF_S1ap_RelativeMMECapacity, &s1ap_S1SetupResponseIEs1->relativeMMECapacity, &asn_DEF_S1ap_RelativeMMECapacity, &s1ap_S1SetupResponseIEs2->relativeMMECapacity);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_RelativeMMECapacity.name;
    }
    /* Optional field */
    if (s1ap_S1SetupResponseIEs1->presenceMask & S1AP_S1SETUPRESPONSEIES_MMERELAYSUPPORTINDICATOR_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MMERelaySupportIndicator.compare(&asn_DEF_S1ap_MMERelaySupportIndicator, &s1ap_S1SetupResponseIEs1->mmeRelaySupportIndicator, &asn_DEF_S1ap_MMERelaySupportIndicator, &s1ap_S1SetupResponseIEs2->mmeRelaySupportIndicator); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MMERelaySupportIndicator.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_S1SetupResponseIEs1->presenceMask & S1AP_S1SETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_S1SetupResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_S1SetupResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_pagingies(
    S1ap_PagingIEs_t *s1ap_PagingIEs1,
    S1ap_PagingIEs_t *s1ap_PagingIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_PagingIEs1 != NULL);
    assert(s1ap_PagingIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UEIdentityIndexValue.compare(&asn_DEF_S1ap_UEIdentityIndexValue, &s1ap_PagingIEs1->ueIdentityIndexValue, &asn_DEF_S1ap_UEIdentityIndexValue, &s1ap_PagingIEs2->ueIdentityIndexValue);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UEIdentityIndexValue.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UEPagingID.compare(&asn_DEF_S1ap_UEPagingID, &s1ap_PagingIEs1->uePagingID, &asn_DEF_S1ap_UEPagingID, &s1ap_PagingIEs2->uePagingID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UEPagingID.name;
    }
    if (s1ap_PagingIEs1->presenceMask != s1ap_PagingIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_PagingDRX.name;rv->structure1 = s1ap_PagingIEs1;rv->structure2 = s1ap_PagingIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_PagingIEs1->presenceMask & S1AP_PAGINGIES_PAGINGDRX_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_PagingDRX.compare(&asn_DEF_S1ap_PagingDRX, &s1ap_PagingIEs1->pagingDRX, &asn_DEF_S1ap_PagingDRX, &s1ap_PagingIEs2->pagingDRX); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_PagingDRX.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_CNDomain.compare(&asn_DEF_S1ap_CNDomain, &s1ap_PagingIEs1->cnDomain, &asn_DEF_S1ap_CNDomain, &s1ap_PagingIEs2->cnDomain);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_CNDomain.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_tailist(&s1ap_PagingIEs1->taiList, &s1ap_PagingIEs2->taiList);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    /* Optional field */
    if (s1ap_PagingIEs1->presenceMask & S1AP_PAGINGIES_CSG_IDLIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_IdList.compare(&asn_DEF_S1ap_CSG_IdList, &s1ap_PagingIEs1->csG_IdList, &asn_DEF_S1ap_CSG_IdList, &s1ap_PagingIEs2->csG_IdList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_IdList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_PagingIEs1->presenceMask & S1AP_PAGINGIES_PAGINGPRIORITY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_PagingPriority.compare(&asn_DEF_S1ap_PagingPriority, &s1ap_PagingIEs1->pagingPriority, &asn_DEF_S1ap_PagingPriority, &s1ap_PagingIEs2->pagingPriority); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_PagingPriority.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_enbconfigurationupdateacknowledgeies(
    S1ap_ENBConfigurationUpdateAcknowledgeIEs_t *s1ap_ENBConfigurationUpdateAcknowledgeIEs1,
    S1ap_ENBConfigurationUpdateAcknowledgeIEs_t *s1ap_ENBConfigurationUpdateAcknowledgeIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ENBConfigurationUpdateAcknowledgeIEs1 != NULL);
    assert(s1ap_ENBConfigurationUpdateAcknowledgeIEs2 != NULL);
    if (s1ap_ENBConfigurationUpdateAcknowledgeIEs1->presenceMask != s1ap_ENBConfigurationUpdateAcknowledgeIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_ENBConfigurationUpdateAcknowledgeIEs1;rv->structure2 = s1ap_ENBConfigurationUpdateAcknowledgeIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_ENBConfigurationUpdateAcknowledgeIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ENBConfigurationUpdateAcknowledgeIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ENBConfigurationUpdateAcknowledgeIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_pathswitchrequestfailureies(
    S1ap_PathSwitchRequestFailureIEs_t *s1ap_PathSwitchRequestFailureIEs1,
    S1ap_PathSwitchRequestFailureIEs_t *s1ap_PathSwitchRequestFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_PathSwitchRequestFailureIEs1 != NULL);
    assert(s1ap_PathSwitchRequestFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestFailureIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestFailureIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_PathSwitchRequestFailureIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_PathSwitchRequestFailureIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_PathSwitchRequestFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_PathSwitchRequestFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_PathSwitchRequestFailureIEs1->presenceMask != s1ap_PathSwitchRequestFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_PathSwitchRequestFailureIEs1;rv->structure2 = s1ap_PathSwitchRequestFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_PathSwitchRequestFailureIEs1->presenceMask & S1AP_PATHSWITCHREQUESTFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_PathSwitchRequestFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_PathSwitchRequestFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabmodifyresponseies(
    S1ap_E_RABModifyResponseIEs_t *s1ap_E_RABModifyResponseIEs1,
    S1ap_E_RABModifyResponseIEs_t *s1ap_E_RABModifyResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABModifyResponseIEs1 != NULL);
    assert(s1ap_E_RABModifyResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABModifyResponseIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABModifyResponseIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABModifyResponseIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABModifyResponseIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_E_RABModifyResponseIEs1->presenceMask != s1ap_E_RABModifyResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABModifyListBearerModRes.name;rv->structure1 = s1ap_E_RABModifyResponseIEs1;rv->structure2 = s1ap_E_RABModifyResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_E_RABModifyResponseIEs1->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_E_RABMODIFYLISTBEARERMODRES_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabmodifylistbearermodres(&s1ap_E_RABModifyResponseIEs1->e_RABModifyListBearerModRes, &s1ap_E_RABModifyResponseIEs2->e_RABModifyListBearerModRes);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_E_RABModifyResponseIEs1->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_E_RABFAILEDTOMODIFYLIST_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_E_RABModifyResponseIEs1->e_RABFailedToModifyList, &s1ap_E_RABModifyResponseIEs2->e_RABFailedToModifyList);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_E_RABModifyResponseIEs1->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_E_RABModifyResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_E_RABModifyResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handovernotifyies(
    S1ap_HandoverNotifyIEs_t *s1ap_HandoverNotifyIEs1,
    S1ap_HandoverNotifyIEs_t *s1ap_HandoverNotifyIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverNotifyIEs1 != NULL);
    assert(s1ap_HandoverNotifyIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverNotifyIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverNotifyIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverNotifyIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverNotifyIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_EUTRAN_CGI.compare(&asn_DEF_S1ap_EUTRAN_CGI, &s1ap_HandoverNotifyIEs1->eutran_cgi, &asn_DEF_S1ap_EUTRAN_CGI, &s1ap_HandoverNotifyIEs2->eutran_cgi);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_EUTRAN_CGI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TAI.compare(&asn_DEF_S1ap_TAI, &s1ap_HandoverNotifyIEs1->tai, &asn_DEF_S1ap_TAI, &s1ap_HandoverNotifyIEs2->tai);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TAI.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handovercancelacknowledgeies(
    S1ap_HandoverCancelAcknowledgeIEs_t *s1ap_HandoverCancelAcknowledgeIEs1,
    S1ap_HandoverCancelAcknowledgeIEs_t *s1ap_HandoverCancelAcknowledgeIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverCancelAcknowledgeIEs1 != NULL);
    assert(s1ap_HandoverCancelAcknowledgeIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverCancelAcknowledgeIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverCancelAcknowledgeIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverCancelAcknowledgeIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverCancelAcknowledgeIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_HandoverCancelAcknowledgeIEs1->presenceMask != s1ap_HandoverCancelAcknowledgeIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_HandoverCancelAcknowledgeIEs1;rv->structure2 = s1ap_HandoverCancelAcknowledgeIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverCancelAcknowledgeIEs1->presenceMask & S1AP_HANDOVERCANCELACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverCancelAcknowledgeIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverCancelAcknowledgeIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_initialcontextsetupfailureies(
    S1ap_InitialContextSetupFailureIEs_t *s1ap_InitialContextSetupFailureIEs1,
    S1ap_InitialContextSetupFailureIEs_t *s1ap_InitialContextSetupFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_InitialContextSetupFailureIEs1 != NULL);
    assert(s1ap_InitialContextSetupFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupFailureIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupFailureIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialContextSetupFailureIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialContextSetupFailureIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_InitialContextSetupFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_InitialContextSetupFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_InitialContextSetupFailureIEs1->presenceMask != s1ap_InitialContextSetupFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_InitialContextSetupFailureIEs1;rv->structure2 = s1ap_InitialContextSetupFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_InitialContextSetupFailureIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_InitialContextSetupFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_InitialContextSetupFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handovercommandies(
    S1ap_HandoverCommandIEs_t *s1ap_HandoverCommandIEs1,
    S1ap_HandoverCommandIEs_t *s1ap_HandoverCommandIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverCommandIEs1 != NULL);
    assert(s1ap_HandoverCommandIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverCommandIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverCommandIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverCommandIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverCommandIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_HandoverType.compare(&asn_DEF_S1ap_HandoverType, &s1ap_HandoverCommandIEs1->handoverType, &asn_DEF_S1ap_HandoverType, &s1ap_HandoverCommandIEs2->handoverType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_HandoverType.name;
    }
    if (s1ap_HandoverCommandIEs1->presenceMask != s1ap_HandoverCommandIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABDataForwardingList.name;rv->structure1 = s1ap_HandoverCommandIEs1;rv->structure2 = s1ap_HandoverCommandIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverCommandIEs1->presenceMask & S1AP_HANDOVERCOMMANDIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabdataforwardinglist(&s1ap_HandoverCommandIEs1->e_RABSubjecttoDataForwardingList, &s1ap_HandoverCommandIEs2->e_RABSubjecttoDataForwardingList);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverCommandIEs1->presenceMask & S1AP_HANDOVERCOMMANDIES_E_RABTORELEASELISTHOCMD_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_HandoverCommandIEs1->e_RABtoReleaseListHOCmd, &s1ap_HandoverCommandIEs2->e_RABtoReleaseListHOCmd);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Target_ToSource_TransparentContainer.compare(&asn_DEF_S1ap_Target_ToSource_TransparentContainer, &s1ap_HandoverCommandIEs1->target_ToSource_TransparentContainer, &asn_DEF_S1ap_Target_ToSource_TransparentContainer, &s1ap_HandoverCommandIEs2->target_ToSource_TransparentContainer);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Target_ToSource_TransparentContainer.name;
    }
    /* Optional field */
    if (s1ap_HandoverCommandIEs1->presenceMask & S1AP_HANDOVERCOMMANDIES_TARGET_TOSOURCE_TRANSPARENTCONTAINER_SECONDARY_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Target_ToSource_TransparentContainer.compare(&asn_DEF_S1ap_Target_ToSource_TransparentContainer, &s1ap_HandoverCommandIEs1->target_ToSource_TransparentContainer_Secondary, &asn_DEF_S1ap_Target_ToSource_TransparentContainer, &s1ap_HandoverCommandIEs2->target_ToSource_TransparentContainer_Secondary); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Target_ToSource_TransparentContainer.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverCommandIEs1->presenceMask & S1AP_HANDOVERCOMMANDIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverCommandIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverCommandIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_downlinknonueassociatedlppatransport_ies(
    S1ap_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs1,
    S1ap_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs1 != NULL);
    assert(s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Routing_ID.compare(&asn_DEF_S1ap_Routing_ID, &s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs1->routing_ID, &asn_DEF_S1ap_Routing_ID, &s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs2->routing_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Routing_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_LPPa_PDU.compare(&asn_DEF_S1ap_LPPa_PDU, &s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs1->lpPa_PDU, &asn_DEF_S1ap_LPPa_PDU, &s1ap_DownlinkNonUEAssociatedLPPaTransport_IEs2->lpPa_PDU);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_LPPa_PDU.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_errorindicationies(
    S1ap_ErrorIndicationIEs_t *s1ap_ErrorIndicationIEs1,
    S1ap_ErrorIndicationIEs_t *s1ap_ErrorIndicationIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ErrorIndicationIEs1 != NULL);
    assert(s1ap_ErrorIndicationIEs2 != NULL);
    if (s1ap_ErrorIndicationIEs1->presenceMask != s1ap_ErrorIndicationIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;rv->structure1 = s1ap_ErrorIndicationIEs1;rv->structure2 = s1ap_ErrorIndicationIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_ErrorIndicationIEs1->presenceMask & S1AP_ERRORINDICATIONIES_MME_UE_S1AP_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_ErrorIndicationIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_ErrorIndicationIEs2->mme_ue_s1ap_id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ErrorIndicationIEs1->presenceMask & S1AP_ERRORINDICATIONIES_ENB_UE_S1AP_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_ErrorIndicationIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_ErrorIndicationIEs2->eNB_UE_S1AP_ID); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ErrorIndicationIEs1->presenceMask & S1AP_ERRORINDICATIONIES_CAUSE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_ErrorIndicationIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_ErrorIndicationIEs2->cause); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ErrorIndicationIEs1->presenceMask & S1AP_ERRORINDICATIONIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ErrorIndicationIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ErrorIndicationIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_overloadstarties(
    S1ap_OverloadStartIEs_t *s1ap_OverloadStartIEs1,
    S1ap_OverloadStartIEs_t *s1ap_OverloadStartIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_OverloadStartIEs1 != NULL);
    assert(s1ap_OverloadStartIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_OverloadResponse.compare(&asn_DEF_S1ap_OverloadResponse, &s1ap_OverloadStartIEs1->overloadResponse, &asn_DEF_S1ap_OverloadResponse, &s1ap_OverloadStartIEs2->overloadResponse);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_OverloadResponse.name;
    }
    if (s1ap_OverloadStartIEs1->presenceMask != s1ap_OverloadStartIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_GUMMEIList.name;rv->structure1 = s1ap_OverloadStartIEs1;rv->structure2 = s1ap_OverloadStartIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_OverloadStartIEs1->presenceMask & S1AP_OVERLOADSTARTIES_GUMMEILIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GUMMEIList.compare(&asn_DEF_S1ap_GUMMEIList, &s1ap_OverloadStartIEs1->gummeiList, &asn_DEF_S1ap_GUMMEIList, &s1ap_OverloadStartIEs2->gummeiList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GUMMEIList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_OverloadStartIEs1->presenceMask & S1AP_OVERLOADSTARTIES_TRAFFICLOADREDUCTIONINDICATION_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TrafficLoadReductionIndication.compare(&asn_DEF_S1ap_TrafficLoadReductionIndication, &s1ap_OverloadStartIEs1->trafficLoadReductionIndication, &asn_DEF_S1ap_TrafficLoadReductionIndication, &s1ap_OverloadStartIEs2->trafficLoadReductionIndication); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TrafficLoadReductionIndication.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_mmedirectinformationtransferies(
    S1ap_MMEDirectInformationTransferIEs_t *s1ap_MMEDirectInformationTransferIEs1,
    S1ap_MMEDirectInformationTransferIEs_t *s1ap_MMEDirectInformationTransferIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_MMEDirectInformationTransferIEs1 != NULL);
    assert(s1ap_MMEDirectInformationTransferIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Inter_SystemInformationTransferType.compare(&asn_DEF_S1ap_Inter_SystemInformationTransferType, &s1ap_MMEDirectInformationTransferIEs1->inter_SystemInformationTransferTypeMDT, &asn_DEF_S1ap_Inter_SystemInformationTransferType, &s1ap_MMEDirectInformationTransferIEs2->inter_SystemInformationTransferTypeMDT);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Inter_SystemInformationTransferType.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handoverrequestacknowledgeies(
    S1ap_HandoverRequestAcknowledgeIEs_t *s1ap_HandoverRequestAcknowledgeIEs1,
    S1ap_HandoverRequestAcknowledgeIEs_t *s1ap_HandoverRequestAcknowledgeIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverRequestAcknowledgeIEs1 != NULL);
    assert(s1ap_HandoverRequestAcknowledgeIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequestAcknowledgeIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverRequestAcknowledgeIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverRequestAcknowledgeIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_HandoverRequestAcknowledgeIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabadmittedlist(&s1ap_HandoverRequestAcknowledgeIEs1->e_RABAdmittedList, &s1ap_HandoverRequestAcknowledgeIEs2->e_RABAdmittedList);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    if (s1ap_HandoverRequestAcknowledgeIEs1->presenceMask != s1ap_HandoverRequestAcknowledgeIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABFailedToSetupListHOReqAck.name;rv->structure1 = s1ap_HandoverRequestAcknowledgeIEs1;rv->structure2 = s1ap_HandoverRequestAcknowledgeIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverRequestAcknowledgeIEs1->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_E_RABFAILEDTOSETUPLISTHOREQACK_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabfailedtosetuplisthoreqack(&s1ap_HandoverRequestAcknowledgeIEs1->e_RABFailedToSetupListHOReqAck, &s1ap_HandoverRequestAcknowledgeIEs2->e_RABFailedToSetupListHOReqAck);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Target_ToSource_TransparentContainer.compare(&asn_DEF_S1ap_Target_ToSource_TransparentContainer, &s1ap_HandoverRequestAcknowledgeIEs1->target_ToSource_TransparentContainer, &asn_DEF_S1ap_Target_ToSource_TransparentContainer, &s1ap_HandoverRequestAcknowledgeIEs2->target_ToSource_TransparentContainer);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Target_ToSource_TransparentContainer.name;
    }
    /* Optional field */
    if (s1ap_HandoverRequestAcknowledgeIEs1->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CSG_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_Id.compare(&asn_DEF_S1ap_CSG_Id, &s1ap_HandoverRequestAcknowledgeIEs1->csG_Id, &asn_DEF_S1ap_CSG_Id, &s1ap_HandoverRequestAcknowledgeIEs2->csG_Id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_Id.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_HandoverRequestAcknowledgeIEs1->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverRequestAcknowledgeIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverRequestAcknowledgeIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_downlinkueassociatedlppatransport_ies(
    S1ap_DownlinkUEAssociatedLPPaTransport_IEs_t *s1ap_DownlinkUEAssociatedLPPaTransport_IEs1,
    S1ap_DownlinkUEAssociatedLPPaTransport_IEs_t *s1ap_DownlinkUEAssociatedLPPaTransport_IEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_DownlinkUEAssociatedLPPaTransport_IEs1 != NULL);
    assert(s1ap_DownlinkUEAssociatedLPPaTransport_IEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Routing_ID.compare(&asn_DEF_S1ap_Routing_ID, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs1->routing_ID, &asn_DEF_S1ap_Routing_ID, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs2->routing_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Routing_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_LPPa_PDU.compare(&asn_DEF_S1ap_LPPa_PDU, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs1->lpPa_PDU, &asn_DEF_S1ap_LPPa_PDU, &s1ap_DownlinkUEAssociatedLPPaTransport_IEs2->lpPa_PDU);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_LPPa_PDU.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecontextmodificationfailureies(
    S1ap_UEContextModificationFailureIEs_t *s1ap_UEContextModificationFailureIEs1,
    S1ap_UEContextModificationFailureIEs_t *s1ap_UEContextModificationFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UEContextModificationFailureIEs1 != NULL);
    assert(s1ap_UEContextModificationFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextModificationFailureIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextModificationFailureIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextModificationFailureIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextModificationFailureIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_UEContextModificationFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_UEContextModificationFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_UEContextModificationFailureIEs1->presenceMask != s1ap_UEContextModificationFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_UEContextModificationFailureIEs1;rv->structure2 = s1ap_UEContextModificationFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UEContextModificationFailureIEs1->presenceMask & S1AP_UECONTEXTMODIFICATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_UEContextModificationFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_UEContextModificationFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecontextreleaserequesties(
    S1ap_UEContextReleaseRequestIEs_t *s1ap_UEContextReleaseRequestIEs1,
    S1ap_UEContextReleaseRequestIEs_t *s1ap_UEContextReleaseRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UEContextReleaseRequestIEs1 != NULL);
    assert(s1ap_UEContextReleaseRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextReleaseRequestIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UEContextReleaseRequestIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextReleaseRequestIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UEContextReleaseRequestIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_UEContextReleaseRequestIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_UEContextReleaseRequestIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_UEContextReleaseRequestIEs1->presenceMask != s1ap_UEContextReleaseRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_GWContextReleaseIndication.name;rv->structure1 = s1ap_UEContextReleaseRequestIEs1;rv->structure2 = s1ap_UEContextReleaseRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UEContextReleaseRequestIEs1->presenceMask & S1AP_UECONTEXTRELEASEREQUESTIES_GWCONTEXTRELEASEINDICATION_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GWContextReleaseIndication.compare(&asn_DEF_S1ap_GWContextReleaseIndication, &s1ap_UEContextReleaseRequestIEs1->gwContextReleaseIndication, &asn_DEF_S1ap_GWContextReleaseIndication, &s1ap_UEContextReleaseRequestIEs2->gwContextReleaseIndication); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GWContextReleaseIndication.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_mmeconfigurationtransferies(
    S1ap_MMEConfigurationTransferIEs_t *s1ap_MMEConfigurationTransferIEs1,
    S1ap_MMEConfigurationTransferIEs_t *s1ap_MMEConfigurationTransferIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_MMEConfigurationTransferIEs1 != NULL);
    assert(s1ap_MMEConfigurationTransferIEs2 != NULL);
    if (s1ap_MMEConfigurationTransferIEs1->presenceMask != s1ap_MMEConfigurationTransferIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_SONConfigurationTransfer.name;rv->structure1 = s1ap_MMEConfigurationTransferIEs1;rv->structure2 = s1ap_MMEConfigurationTransferIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_MMEConfigurationTransferIEs1->presenceMask & S1AP_MMECONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERMCT_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SONConfigurationTransfer.compare(&asn_DEF_S1ap_SONConfigurationTransfer, &s1ap_MMEConfigurationTransferIEs1->sonConfigurationTransferMCT, &asn_DEF_S1ap_SONConfigurationTransfer, &s1ap_MMEConfigurationTransferIEs2->sonConfigurationTransferMCT); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SONConfigurationTransfer.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_pathswitchrequestacknowledgeies(
    S1ap_PathSwitchRequestAcknowledgeIEs_t *s1ap_PathSwitchRequestAcknowledgeIEs1,
    S1ap_PathSwitchRequestAcknowledgeIEs_t *s1ap_PathSwitchRequestAcknowledgeIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_PathSwitchRequestAcknowledgeIEs1 != NULL);
    assert(s1ap_PathSwitchRequestAcknowledgeIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestAcknowledgeIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestAcknowledgeIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_PathSwitchRequestAcknowledgeIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_PathSwitchRequestAcknowledgeIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_PathSwitchRequestAcknowledgeIEs1->presenceMask != s1ap_PathSwitchRequestAcknowledgeIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;rv->structure1 = s1ap_PathSwitchRequestAcknowledgeIEs1;rv->structure2 = s1ap_PathSwitchRequestAcknowledgeIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_PathSwitchRequestAcknowledgeIEs1->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_PathSwitchRequestAcknowledgeIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_PathSwitchRequestAcknowledgeIEs2->uEaggregateMaximumBitrate); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_PathSwitchRequestAcknowledgeIEs1->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBESWITCHEDULLIST_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabtobeswitchedullist(&s1ap_PathSwitchRequestAcknowledgeIEs1->e_RABToBeSwitchedULList, &s1ap_PathSwitchRequestAcknowledgeIEs2->e_RABToBeSwitchedULList);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_PathSwitchRequestAcknowledgeIEs1->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBERELEASEDLIST_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_PathSwitchRequestAcknowledgeIEs1->e_RABToBeReleasedList, &s1ap_PathSwitchRequestAcknowledgeIEs2->e_RABToBeReleasedList);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SecurityContext.compare(&asn_DEF_S1ap_SecurityContext, &s1ap_PathSwitchRequestAcknowledgeIEs1->securityContext, &asn_DEF_S1ap_SecurityContext, &s1ap_PathSwitchRequestAcknowledgeIEs2->securityContext);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SecurityContext.name;
    }
    /* Optional field */
    if (s1ap_PathSwitchRequestAcknowledgeIEs1->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_PathSwitchRequestAcknowledgeIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_PathSwitchRequestAcknowledgeIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_PathSwitchRequestAcknowledgeIEs1->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_MME_UE_S1AP_ID_2_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestAcknowledgeIEs1->mme_ue_s1ap_id_2, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestAcknowledgeIEs2->mme_ue_s1ap_id_2); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_s1setupfailureies(
    S1ap_S1SetupFailureIEs_t *s1ap_S1SetupFailureIEs1,
    S1ap_S1SetupFailureIEs_t *s1ap_S1SetupFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_S1SetupFailureIEs1 != NULL);
    assert(s1ap_S1SetupFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_S1SetupFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_S1SetupFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_S1SetupFailureIEs1->presenceMask != s1ap_S1SetupFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_TimeToWait.name;rv->structure1 = s1ap_S1SetupFailureIEs1;rv->structure2 = s1ap_S1SetupFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_S1SetupFailureIEs1->presenceMask & S1AP_S1SETUPFAILUREIES_TIMETOWAIT_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TimeToWait.compare(&asn_DEF_S1ap_TimeToWait, &s1ap_S1SetupFailureIEs1->timeToWait, &asn_DEF_S1ap_TimeToWait, &s1ap_S1SetupFailureIEs2->timeToWait); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TimeToWait.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_S1SetupFailureIEs1->presenceMask & S1AP_S1SETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_S1SetupFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_S1SetupFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_mmeconfigurationupdatefailureies(
    S1ap_MMEConfigurationUpdateFailureIEs_t *s1ap_MMEConfigurationUpdateFailureIEs1,
    S1ap_MMEConfigurationUpdateFailureIEs_t *s1ap_MMEConfigurationUpdateFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_MMEConfigurationUpdateFailureIEs1 != NULL);
    assert(s1ap_MMEConfigurationUpdateFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_MMEConfigurationUpdateFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_MMEConfigurationUpdateFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_MMEConfigurationUpdateFailureIEs1->presenceMask != s1ap_MMEConfigurationUpdateFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_TimeToWait.name;rv->structure1 = s1ap_MMEConfigurationUpdateFailureIEs1;rv->structure2 = s1ap_MMEConfigurationUpdateFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_MMEConfigurationUpdateFailureIEs1->presenceMask & S1AP_MMECONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TimeToWait.compare(&asn_DEF_S1ap_TimeToWait, &s1ap_MMEConfigurationUpdateFailureIEs1->timeToWait, &asn_DEF_S1ap_TimeToWait, &s1ap_MMEConfigurationUpdateFailureIEs2->timeToWait); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TimeToWait.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_MMEConfigurationUpdateFailureIEs1->presenceMask & S1AP_MMECONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_MMEConfigurationUpdateFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_MMEConfigurationUpdateFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_initialcontextsetupresponseies(
    S1ap_InitialContextSetupResponseIEs_t *s1ap_InitialContextSetupResponseIEs1,
    S1ap_InitialContextSetupResponseIEs_t *s1ap_InitialContextSetupResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_InitialContextSetupResponseIEs1 != NULL);
    assert(s1ap_InitialContextSetupResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupResponseIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_InitialContextSetupResponseIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialContextSetupResponseIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_InitialContextSetupResponseIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabsetuplistctxtsures(&s1ap_InitialContextSetupResponseIEs1->e_RABSetupListCtxtSURes, &s1ap_InitialContextSetupResponseIEs2->e_RABSetupListCtxtSURes);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    if (s1ap_InitialContextSetupResponseIEs1->presenceMask != s1ap_InitialContextSetupResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABList.name;rv->structure1 = s1ap_InitialContextSetupResponseIEs1;rv->structure2 = s1ap_InitialContextSetupResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_InitialContextSetupResponseIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTCTXTSURES_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_InitialContextSetupResponseIEs1->e_RABFailedToSetupListCtxtSURes, &s1ap_InitialContextSetupResponseIEs2->e_RABFailedToSetupListCtxtSURes);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_InitialContextSetupResponseIEs1->presenceMask & S1AP_INITIALCONTEXTSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_InitialContextSetupResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_InitialContextSetupResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_enbconfigurationupdateies(
    S1ap_ENBConfigurationUpdateIEs_t *s1ap_ENBConfigurationUpdateIEs1,
    S1ap_ENBConfigurationUpdateIEs_t *s1ap_ENBConfigurationUpdateIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ENBConfigurationUpdateIEs1 != NULL);
    assert(s1ap_ENBConfigurationUpdateIEs2 != NULL);
    if (s1ap_ENBConfigurationUpdateIEs1->presenceMask != s1ap_ENBConfigurationUpdateIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_ENBname.name;rv->structure1 = s1ap_ENBConfigurationUpdateIEs1;rv->structure2 = s1ap_ENBConfigurationUpdateIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_ENBConfigurationUpdateIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_ENBNAME_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ENBname.compare(&asn_DEF_S1ap_ENBname, &s1ap_ENBConfigurationUpdateIEs1->eNBname, &asn_DEF_S1ap_ENBname, &s1ap_ENBConfigurationUpdateIEs2->eNBname); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ENBname.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ENBConfigurationUpdateIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_SUPPORTEDTAS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SupportedTAs.compare(&asn_DEF_S1ap_SupportedTAs, &s1ap_ENBConfigurationUpdateIEs1->supportedTAs, &asn_DEF_S1ap_SupportedTAs, &s1ap_ENBConfigurationUpdateIEs2->supportedTAs); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SupportedTAs.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ENBConfigurationUpdateIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_CSG_IDLIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_IdList.compare(&asn_DEF_S1ap_CSG_IdList, &s1ap_ENBConfigurationUpdateIEs1->csG_IdList, &asn_DEF_S1ap_CSG_IdList, &s1ap_ENBConfigurationUpdateIEs2->csG_IdList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_IdList.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ENBConfigurationUpdateIEs1->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_DEFAULTPAGINGDRX_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_PagingDRX.compare(&asn_DEF_S1ap_PagingDRX, &s1ap_ENBConfigurationUpdateIEs1->defaultPagingDRX, &asn_DEF_S1ap_PagingDRX, &s1ap_ENBConfigurationUpdateIEs2->defaultPagingDRX); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_PagingDRX.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_overloadstopies(
    S1ap_OverloadStopIEs_t *s1ap_OverloadStopIEs1,
    S1ap_OverloadStopIEs_t *s1ap_OverloadStopIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_OverloadStopIEs1 != NULL);
    assert(s1ap_OverloadStopIEs2 != NULL);
    if (s1ap_OverloadStopIEs1->presenceMask != s1ap_OverloadStopIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_GUMMEIList.name;rv->structure1 = s1ap_OverloadStopIEs1;rv->structure2 = s1ap_OverloadStopIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_OverloadStopIEs1->presenceMask & S1AP_OVERLOADSTOPIES_GUMMEILIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GUMMEIList.compare(&asn_DEF_S1ap_GUMMEIList, &s1ap_OverloadStopIEs1->gummeiList, &asn_DEF_S1ap_GUMMEIList, &s1ap_OverloadStopIEs2->gummeiList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GUMMEIList.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uplinknastransporties(
    S1ap_UplinkNASTransportIEs_t *s1ap_UplinkNASTransportIEs1,
    S1ap_UplinkNASTransportIEs_t *s1ap_UplinkNASTransportIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UplinkNASTransportIEs1 != NULL);
    assert(s1ap_UplinkNASTransportIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UplinkNASTransportIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UplinkNASTransportIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UplinkNASTransportIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UplinkNASTransportIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_NAS_PDU.compare(&asn_DEF_S1ap_NAS_PDU, &s1ap_UplinkNASTransportIEs1->nas_pdu, &asn_DEF_S1ap_NAS_PDU, &s1ap_UplinkNASTransportIEs2->nas_pdu);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_NAS_PDU.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_EUTRAN_CGI.compare(&asn_DEF_S1ap_EUTRAN_CGI, &s1ap_UplinkNASTransportIEs1->eutran_cgi, &asn_DEF_S1ap_EUTRAN_CGI, &s1ap_UplinkNASTransportIEs2->eutran_cgi);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_EUTRAN_CGI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TAI.compare(&asn_DEF_S1ap_TAI, &s1ap_UplinkNASTransportIEs1->tai, &asn_DEF_S1ap_TAI, &s1ap_UplinkNASTransportIEs2->tai);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TAI.name;
    }
    if (s1ap_UplinkNASTransportIEs1->presenceMask != s1ap_UplinkNASTransportIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_TransportLayerAddress.name;rv->structure1 = s1ap_UplinkNASTransportIEs1;rv->structure2 = s1ap_UplinkNASTransportIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_UplinkNASTransportIEs1->presenceMask & S1AP_UPLINKNASTRANSPORTIES_GW_TRANSPORTLAYERADDRESS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_TransportLayerAddress.compare(&asn_DEF_S1ap_TransportLayerAddress, &s1ap_UplinkNASTransportIEs1->gW_TransportLayerAddress, &asn_DEF_S1ap_TransportLayerAddress, &s1ap_UplinkNASTransportIEs2->gW_TransportLayerAddress); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_TransportLayerAddress.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_tracefailureindicationies(
    S1ap_TraceFailureIndicationIEs_t *s1ap_TraceFailureIndicationIEs1,
    S1ap_TraceFailureIndicationIEs_t *s1ap_TraceFailureIndicationIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_TraceFailureIndicationIEs1 != NULL);
    assert(s1ap_TraceFailureIndicationIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_TraceFailureIndicationIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_TraceFailureIndicationIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_TraceFailureIndicationIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_TraceFailureIndicationIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_E_UTRAN_Trace_ID.compare(&asn_DEF_S1ap_E_UTRAN_Trace_ID, &s1ap_TraceFailureIndicationIEs1->e_UTRAN_Trace_ID, &asn_DEF_S1ap_E_UTRAN_Trace_ID, &s1ap_TraceFailureIndicationIEs2->e_UTRAN_Trace_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_E_UTRAN_Trace_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_TraceFailureIndicationIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_TraceFailureIndicationIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uecontextreleasecommandies(
    S1ap_UEContextReleaseCommandIEs_t *s1ap_UEContextReleaseCommandIEs1,
    S1ap_UEContextReleaseCommandIEs_t *s1ap_UEContextReleaseCommandIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UEContextReleaseCommandIEs1 != NULL);
    assert(s1ap_UEContextReleaseCommandIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UE_S1AP_IDs.compare(&asn_DEF_S1ap_UE_S1AP_IDs, &s1ap_UEContextReleaseCommandIEs1->uE_S1AP_IDs, &asn_DEF_S1ap_UE_S1AP_IDs, &s1ap_UEContextReleaseCommandIEs2->uE_S1AP_IDs);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UE_S1AP_IDs.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_UEContextReleaseCommandIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_UEContextReleaseCommandIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_enbconfigurationtransferies(
    S1ap_ENBConfigurationTransferIEs_t *s1ap_ENBConfigurationTransferIEs1,
    S1ap_ENBConfigurationTransferIEs_t *s1ap_ENBConfigurationTransferIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ENBConfigurationTransferIEs1 != NULL);
    assert(s1ap_ENBConfigurationTransferIEs2 != NULL);
    if (s1ap_ENBConfigurationTransferIEs1->presenceMask != s1ap_ENBConfigurationTransferIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_SONConfigurationTransfer.name;rv->structure1 = s1ap_ENBConfigurationTransferIEs1;rv->structure2 = s1ap_ENBConfigurationTransferIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_ENBConfigurationTransferIEs1->presenceMask & S1AP_ENBCONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERECT_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_SONConfigurationTransfer.compare(&asn_DEF_S1ap_SONConfigurationTransfer, &s1ap_ENBConfigurationTransferIEs1->sonConfigurationTransferECT, &asn_DEF_S1ap_SONConfigurationTransfer, &s1ap_ENBConfigurationTransferIEs2->sonConfigurationTransferECT); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_SONConfigurationTransfer.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_handoverfailureies(
    S1ap_HandoverFailureIEs_t *s1ap_HandoverFailureIEs1,
    S1ap_HandoverFailureIEs_t *s1ap_HandoverFailureIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_HandoverFailureIEs1 != NULL);
    assert(s1ap_HandoverFailureIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverFailureIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_HandoverFailureIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_HandoverFailureIEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_HandoverFailureIEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    if (s1ap_HandoverFailureIEs1->presenceMask != s1ap_HandoverFailureIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;rv->structure1 = s1ap_HandoverFailureIEs1;rv->structure2 = s1ap_HandoverFailureIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_HandoverFailureIEs1->presenceMask & S1AP_HANDOVERFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverFailureIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_HandoverFailureIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabsetupresponseies(
    S1ap_E_RABSetupResponseIEs_t *s1ap_E_RABSetupResponseIEs1,
    S1ap_E_RABSetupResponseIEs_t *s1ap_E_RABSetupResponseIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABSetupResponseIEs1 != NULL);
    assert(s1ap_E_RABSetupResponseIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABSetupResponseIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABSetupResponseIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABSetupResponseIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABSetupResponseIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_E_RABSetupResponseIEs1->presenceMask != s1ap_E_RABSetupResponseIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABSetupListBearerSURes.name;rv->structure1 = s1ap_E_RABSetupResponseIEs1;rv->structure2 = s1ap_E_RABSetupResponseIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_E_RABSetupResponseIEs1->presenceMask & S1AP_E_RABSETUPRESPONSEIES_E_RABSETUPLISTBEARERSURES_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabsetuplistbearersures(&s1ap_E_RABSetupResponseIEs1->e_RABSetupListBearerSURes, &s1ap_E_RABSetupResponseIEs2->e_RABSetupListBearerSURes);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_E_RABSetupResponseIEs1->presenceMask & S1AP_E_RABSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTBEARERSURES_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_E_RABSetupResponseIEs1->e_RABFailedToSetupListBearerSURes, &s1ap_E_RABSetupResponseIEs2->e_RABFailedToSetupListBearerSURes);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_E_RABSetupResponseIEs1->presenceMask & S1AP_E_RABSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_E_RABSetupResponseIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_E_RABSetupResponseIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_pathswitchrequesties(
    S1ap_PathSwitchRequestIEs_t *s1ap_PathSwitchRequestIEs1,
    S1ap_PathSwitchRequestIEs_t *s1ap_PathSwitchRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_PathSwitchRequestIEs1 != NULL);
    assert(s1ap_PathSwitchRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_PathSwitchRequestIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_PathSwitchRequestIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabtobeswitcheddllist(&s1ap_PathSwitchRequestIEs1->e_RABToBeSwitchedDLList, &s1ap_PathSwitchRequestIEs2->e_RABToBeSwitchedDLList);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestIEs1->sourceMME_UE_S1AP_ID, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_PathSwitchRequestIEs2->sourceMME_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_EUTRAN_CGI.compare(&asn_DEF_S1ap_EUTRAN_CGI, &s1ap_PathSwitchRequestIEs1->eutran_cgi, &asn_DEF_S1ap_EUTRAN_CGI, &s1ap_PathSwitchRequestIEs2->eutran_cgi);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_EUTRAN_CGI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TAI.compare(&asn_DEF_S1ap_TAI, &s1ap_PathSwitchRequestIEs1->tai, &asn_DEF_S1ap_TAI, &s1ap_PathSwitchRequestIEs2->tai);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TAI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_UESecurityCapabilities.compare(&asn_DEF_S1ap_UESecurityCapabilities, &s1ap_PathSwitchRequestIEs1->ueSecurityCapabilities, &asn_DEF_S1ap_UESecurityCapabilities, &s1ap_PathSwitchRequestIEs2->ueSecurityCapabilities);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_UESecurityCapabilities.name;
    }
    if (s1ap_PathSwitchRequestIEs1->presenceMask != s1ap_PathSwitchRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_CSG_Id.name;rv->structure1 = s1ap_PathSwitchRequestIEs1;rv->structure2 = s1ap_PathSwitchRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_PathSwitchRequestIEs1->presenceMask & S1AP_PATHSWITCHREQUESTIES_CSG_ID_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_Id.compare(&asn_DEF_S1ap_CSG_Id, &s1ap_PathSwitchRequestIEs1->csG_Id, &asn_DEF_S1ap_CSG_Id, &s1ap_PathSwitchRequestIEs2->csG_Id); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_Id.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_PathSwitchRequestIEs1->presenceMask & S1AP_PATHSWITCHREQUESTIES_CELLACCESSMODE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CellAccessMode.compare(&asn_DEF_S1ap_CellAccessMode, &s1ap_PathSwitchRequestIEs1->cellAccessMode, &asn_DEF_S1ap_CellAccessMode, &s1ap_PathSwitchRequestIEs2->cellAccessMode); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CellAccessMode.name;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_PathSwitchRequestIEs1->presenceMask & S1AP_PATHSWITCHREQUESTIES_SOURCEMME_GUMMEI_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_GUMMEI.compare(&asn_DEF_S1ap_GUMMEI, &s1ap_PathSwitchRequestIEs1->sourceMME_GUMMEI, &asn_DEF_S1ap_GUMMEI, &s1ap_PathSwitchRequestIEs2->sourceMME_GUMMEI); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_GUMMEI.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_downlinks1cdma2000tunnelingies(
    S1ap_DownlinkS1cdma2000tunnelingIEs_t *s1ap_DownlinkS1cdma2000tunnelingIEs1,
    S1ap_DownlinkS1cdma2000tunnelingIEs_t *s1ap_DownlinkS1cdma2000tunnelingIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_DownlinkS1cdma2000tunnelingIEs1 != NULL);
    assert(s1ap_DownlinkS1cdma2000tunnelingIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DownlinkS1cdma2000tunnelingIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_DownlinkS1cdma2000tunnelingIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DownlinkS1cdma2000tunnelingIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_DownlinkS1cdma2000tunnelingIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_DownlinkS1cdma2000tunnelingIEs1->presenceMask != s1ap_DownlinkS1cdma2000tunnelingIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_E_RABDataForwardingList.name;rv->structure1 = s1ap_DownlinkS1cdma2000tunnelingIEs1;rv->structure2 = s1ap_DownlinkS1cdma2000tunnelingIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_DownlinkS1cdma2000tunnelingIEs1->presenceMask & S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_e_rabdataforwardinglist(&s1ap_DownlinkS1cdma2000tunnelingIEs1->e_RABSubjecttoDataForwardingList, &s1ap_DownlinkS1cdma2000tunnelingIEs2->e_RABSubjecttoDataForwardingList);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_DownlinkS1cdma2000tunnelingIEs1->presenceMask & S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_CDMA2000HOSTATUS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_Cdma2000HOStatus.compare(&asn_DEF_S1ap_Cdma2000HOStatus, &s1ap_DownlinkS1cdma2000tunnelingIEs1->cdma2000HOStatus, &asn_DEF_S1ap_Cdma2000HOStatus, &s1ap_DownlinkS1cdma2000tunnelingIEs2->cdma2000HOStatus); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000HOStatus.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cdma2000RATType.compare(&asn_DEF_S1ap_Cdma2000RATType, &s1ap_DownlinkS1cdma2000tunnelingIEs1->cdma2000RATType, &asn_DEF_S1ap_Cdma2000RATType, &s1ap_DownlinkS1cdma2000tunnelingIEs2->cdma2000RATType);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000RATType.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cdma2000PDU.compare(&asn_DEF_S1ap_Cdma2000PDU, &s1ap_DownlinkS1cdma2000tunnelingIEs1->cdma2000PDU, &asn_DEF_S1ap_Cdma2000PDU, &s1ap_DownlinkS1cdma2000tunnelingIEs2->cdma2000PDU);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cdma2000PDU.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabreleaseindicationies(
    S1ap_E_RABReleaseIndicationIEs_t *s1ap_E_RABReleaseIndicationIEs1,
    S1ap_E_RABReleaseIndicationIEs_t *s1ap_E_RABReleaseIndicationIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABReleaseIndicationIEs1 != NULL);
    assert(s1ap_E_RABReleaseIndicationIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABReleaseIndicationIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABReleaseIndicationIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABReleaseIndicationIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABReleaseIndicationIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rablist(&s1ap_E_RABReleaseIndicationIEs1->e_RABReleasedList, &s1ap_E_RABReleaseIndicationIEs2->e_RABReleasedList);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_s1setuprequesties(
    S1ap_S1SetupRequestIEs_t *s1ap_S1SetupRequestIEs1,
    S1ap_S1SetupRequestIEs_t *s1ap_S1SetupRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_S1SetupRequestIEs1 != NULL);
    assert(s1ap_S1SetupRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Global_ENB_ID.compare(&asn_DEF_S1ap_Global_ENB_ID, &s1ap_S1SetupRequestIEs1->global_ENB_ID, &asn_DEF_S1ap_Global_ENB_ID, &s1ap_S1SetupRequestIEs2->global_ENB_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Global_ENB_ID.name;
    }
    if (s1ap_S1SetupRequestIEs1->presenceMask != s1ap_S1SetupRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_ENBname.name;rv->structure1 = s1ap_S1SetupRequestIEs1;rv->structure2 = s1ap_S1SetupRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_S1SetupRequestIEs1->presenceMask & S1AP_S1SETUPREQUESTIES_ENBNAME_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_ENBname.compare(&asn_DEF_S1ap_ENBname, &s1ap_S1SetupRequestIEs1->eNBname, &asn_DEF_S1ap_ENBname, &s1ap_S1SetupRequestIEs2->eNBname); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_ENBname.name;        }        assert(0);
    }

    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_SupportedTAs.compare(&asn_DEF_S1ap_SupportedTAs, &s1ap_S1SetupRequestIEs1->supportedTAs, &asn_DEF_S1ap_SupportedTAs, &s1ap_S1SetupRequestIEs2->supportedTAs);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_SupportedTAs.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_PagingDRX.compare(&asn_DEF_S1ap_PagingDRX, &s1ap_S1SetupRequestIEs1->defaultPagingDRX, &asn_DEF_S1ap_PagingDRX, &s1ap_S1SetupRequestIEs2->defaultPagingDRX);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_PagingDRX.name;
    }
    /* Optional field */
    if (s1ap_S1SetupRequestIEs1->presenceMask & S1AP_S1SETUPREQUESTIES_CSG_IDLIST_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CSG_IdList.compare(&asn_DEF_S1ap_CSG_IdList, &s1ap_S1SetupRequestIEs1->csG_IdList, &asn_DEF_S1ap_CSG_IdList, &s1ap_S1SetupRequestIEs2->csG_IdList); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CSG_IdList.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_nasnondeliveryindication_ies(
    S1ap_NASNonDeliveryIndication_IEs_t *s1ap_NASNonDeliveryIndication_IEs1,
    S1ap_NASNonDeliveryIndication_IEs_t *s1ap_NASNonDeliveryIndication_IEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_NASNonDeliveryIndication_IEs1 != NULL);
    assert(s1ap_NASNonDeliveryIndication_IEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_NASNonDeliveryIndication_IEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_NASNonDeliveryIndication_IEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_NASNonDeliveryIndication_IEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_NASNonDeliveryIndication_IEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_NAS_PDU.compare(&asn_DEF_S1ap_NAS_PDU, &s1ap_NASNonDeliveryIndication_IEs1->nas_pdu, &asn_DEF_S1ap_NAS_PDU, &s1ap_NASNonDeliveryIndication_IEs2->nas_pdu);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_NAS_PDU.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Cause.compare(&asn_DEF_S1ap_Cause, &s1ap_NASNonDeliveryIndication_IEs1->cause, &asn_DEF_S1ap_Cause, &s1ap_NASNonDeliveryIndication_IEs2->cause);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Cause.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_celltraffictraceies(
    S1ap_CellTrafficTraceIEs_t *s1ap_CellTrafficTraceIEs1,
    S1ap_CellTrafficTraceIEs_t *s1ap_CellTrafficTraceIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_CellTrafficTraceIEs1 != NULL);
    assert(s1ap_CellTrafficTraceIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_CellTrafficTraceIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_CellTrafficTraceIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_CellTrafficTraceIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_CellTrafficTraceIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_E_UTRAN_Trace_ID.compare(&asn_DEF_S1ap_E_UTRAN_Trace_ID, &s1ap_CellTrafficTraceIEs1->e_UTRAN_Trace_ID, &asn_DEF_S1ap_E_UTRAN_Trace_ID, &s1ap_CellTrafficTraceIEs2->e_UTRAN_Trace_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_E_UTRAN_Trace_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_EUTRAN_CGI.compare(&asn_DEF_S1ap_EUTRAN_CGI, &s1ap_CellTrafficTraceIEs1->eutran_cgi, &asn_DEF_S1ap_EUTRAN_CGI, &s1ap_CellTrafficTraceIEs2->eutran_cgi);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_EUTRAN_CGI.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_TransportLayerAddress.compare(&asn_DEF_S1ap_TransportLayerAddress, &s1ap_CellTrafficTraceIEs1->traceCollectionEntityIPAddress, &asn_DEF_S1ap_TransportLayerAddress, &s1ap_CellTrafficTraceIEs2->traceCollectionEntityIPAddress);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_TransportLayerAddress.name;
    }
    if (s1ap_CellTrafficTraceIEs1->presenceMask != s1ap_CellTrafficTraceIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_PrivacyIndicator.name;rv->structure1 = s1ap_CellTrafficTraceIEs1;rv->structure2 = s1ap_CellTrafficTraceIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_CellTrafficTraceIEs1->presenceMask & S1AP_CELLTRAFFICTRACEIES_PRIVACYINDICATOR_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_PrivacyIndicator.compare(&asn_DEF_S1ap_PrivacyIndicator, &s1ap_CellTrafficTraceIEs1->privacyIndicator, &asn_DEF_S1ap_PrivacyIndicator, &s1ap_CellTrafficTraceIEs2->privacyIndicator); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_PrivacyIndicator.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_e_rabsetuprequesties(
    S1ap_E_RABSetupRequestIEs_t *s1ap_E_RABSetupRequestIEs1,
    S1ap_E_RABSetupRequestIEs_t *s1ap_E_RABSetupRequestIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABSetupRequestIEs1 != NULL);
    assert(s1ap_E_RABSetupRequestIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABSetupRequestIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_E_RABSetupRequestIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABSetupRequestIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_E_RABSetupRequestIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    if (s1ap_E_RABSetupRequestIEs1->presenceMask != s1ap_E_RABSetupRequestIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;rv->structure1 = s1ap_E_RABSetupRequestIEs1;rv->structure2 = s1ap_E_RABSetupRequestIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_E_RABSetupRequestIEs1->presenceMask & S1AP_E_RABSETUPREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_UEAggregateMaximumBitrate.compare(&asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_E_RABSetupRequestIEs1->uEaggregateMaximumBitrate, &asn_DEF_S1ap_UEAggregateMaximumBitrate, &s1ap_E_RABSetupRequestIEs2->uEaggregateMaximumBitrate); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_UEAggregateMaximumBitrate.name;        }        assert(0);
    }

    /* Mandatory collection field */
    rv2 = s1ap_compare_s1ap_e_rabtobesetuplistbearersureq(&s1ap_E_RABSetupRequestIEs1->e_RABToBeSetupListBearerSUReq, &s1ap_E_RABSetupRequestIEs2->e_RABToBeSetupListBearerSUReq);
    if (rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_enbstatustransferies(
    S1ap_ENBStatusTransferIEs_t *s1ap_ENBStatusTransferIEs1,
    S1ap_ENBStatusTransferIEs_t *s1ap_ENBStatusTransferIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ENBStatusTransferIEs1 != NULL);
    assert(s1ap_ENBStatusTransferIEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_ENBStatusTransferIEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_ENBStatusTransferIEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_ENBStatusTransferIEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_ENBStatusTransferIEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer.compare(&asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer, &s1ap_ENBStatusTransferIEs1->eNB_StatusTransfer_TransparentContainer, &asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer, &s1ap_ENBStatusTransferIEs2->eNB_StatusTransfer_TransparentContainer);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_StatusTransfer_TransparentContainer.name;
    }
    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_resetacknowledgeies(
    S1ap_ResetAcknowledgeIEs_t *s1ap_ResetAcknowledgeIEs1,
    S1ap_ResetAcknowledgeIEs_t *s1ap_ResetAcknowledgeIEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_ResetAcknowledgeIEs1 != NULL);
    assert(s1ap_ResetAcknowledgeIEs2 != NULL);
    if (s1ap_ResetAcknowledgeIEs1->presenceMask != s1ap_ResetAcknowledgeIEs2->presenceMask) {rv=calloc(1,sizeof(asn_comp_rval_t));rv->name = asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListResAck.name;rv->structure1 = s1ap_ResetAcknowledgeIEs1;rv->structure2 = s1ap_ResetAcknowledgeIEs2;rv->err_code = COMPARE_ERR_CODE_VALUE_NULL; return rv;}
    /* Optional field */
    if (s1ap_ResetAcknowledgeIEs1->presenceMask & S1AP_RESETACKNOWLEDGEIES_UE_ASSOCIATEDLOGICALS1_CONNECTIONLISTRESACK_PRESENT) {
        /* collection field */
        rv2 = s1ap_compare_s1ap_ue_associatedlogicals1_connectionlistresack(&s1ap_ResetAcknowledgeIEs1->uE_associatedLogicalS1_ConnectionListResAck, &s1ap_ResetAcknowledgeIEs2->uE_associatedLogicalS1_ConnectionListResAck);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }        assert(0);
    }

    /* Optional field */
    if (s1ap_ResetAcknowledgeIEs1->presenceMask & S1AP_RESETACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        /* simple field */
        rv2 = asn_DEF_S1ap_CriticalityDiagnostics.compare(&asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ResetAcknowledgeIEs1->criticalityDiagnostics, &asn_DEF_S1ap_CriticalityDiagnostics, &s1ap_ResetAcknowledgeIEs2->criticalityDiagnostics); 
        if (rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;          if (!rv->name) rv->name = asn_DEF_S1ap_CriticalityDiagnostics.name;        }        assert(0);
    }

    return rv;
}

asn_comp_rval_t * s1ap_compare_s1ap_uplinkueassociatedlppatransport_ies(
    S1ap_UplinkUEAssociatedLPPaTransport_IEs_t *s1ap_UplinkUEAssociatedLPPaTransport_IEs1,
    S1ap_UplinkUEAssociatedLPPaTransport_IEs_t *s1ap_UplinkUEAssociatedLPPaTransport_IEs2) {

    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UplinkUEAssociatedLPPaTransport_IEs1 != NULL);
    assert(s1ap_UplinkUEAssociatedLPPaTransport_IEs2 != NULL);
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_MME_UE_S1AP_ID.compare(&asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UplinkUEAssociatedLPPaTransport_IEs1->mme_ue_s1ap_id, &asn_DEF_S1ap_MME_UE_S1AP_ID, &s1ap_UplinkUEAssociatedLPPaTransport_IEs2->mme_ue_s1ap_id);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_MME_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_ENB_UE_S1AP_ID.compare(&asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UplinkUEAssociatedLPPaTransport_IEs1->eNB_UE_S1AP_ID, &asn_DEF_S1ap_ENB_UE_S1AP_ID, &s1ap_UplinkUEAssociatedLPPaTransport_IEs2->eNB_UE_S1AP_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_ENB_UE_S1AP_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_Routing_ID.compare(&asn_DEF_S1ap_Routing_ID, &s1ap_UplinkUEAssociatedLPPaTransport_IEs1->routing_ID, &asn_DEF_S1ap_Routing_ID, &s1ap_UplinkUEAssociatedLPPaTransport_IEs2->routing_ID);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_Routing_ID.name;
    }
    /* Mandatory simple field */
    rv2 = asn_DEF_S1ap_LPPa_PDU.compare(&asn_DEF_S1ap_LPPa_PDU, &s1ap_UplinkUEAssociatedLPPaTransport_IEs1->lpPa_PDU, &asn_DEF_S1ap_LPPa_PDU, &s1ap_UplinkUEAssociatedLPPaTransport_IEs2->lpPa_PDU);
    if(rv2) {
      if (NULL == rv) {
        rv = rv2;
      } else {
        rv2->next = rv;
        rv = rv2;
      }
      rv2 = NULL;
      if (!rv->name) rv->name = asn_DEF_S1ap_LPPa_PDU.name;
    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABReleaseItemBearerRelComp;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabreleaselistbearerrelcomp(
    S1ap_E_RABReleaseListBearerRelCompIEs_t *s1ap_E_RABReleaseListBearerRelCompIEs1,
    S1ap_E_RABReleaseListBearerRelCompIEs_t *s1ap_E_RABReleaseListBearerRelCompIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABReleaseListBearerRelCompIEs1 != NULL);
    assert(s1ap_E_RABReleaseListBearerRelCompIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABReleaseListBearerRelCompIEs1->s1ap_E_RABReleaseItemBearerRelComp.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABReleaseItemBearerRelComp.compare(&asn_DEF_S1ap_E_RABReleaseItemBearerRelComp, s1ap_E_RABReleaseListBearerRelCompIEs1->s1ap_E_RABReleaseItemBearerRelComp.array[i], &asn_DEF_S1ap_E_RABReleaseItemBearerRelComp, s1ap_E_RABReleaseListBearerRelCompIEs2->s1ap_E_RABReleaseItemBearerRelComp.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeSetupItemHOReq;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabtobesetuplisthoreq(
    S1ap_E_RABToBeSetupListHOReqIEs_t *s1ap_E_RABToBeSetupListHOReqIEs1,
    S1ap_E_RABToBeSetupListHOReqIEs_t *s1ap_E_RABToBeSetupListHOReqIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABToBeSetupListHOReqIEs1 != NULL);
    assert(s1ap_E_RABToBeSetupListHOReqIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABToBeSetupListHOReqIEs1->s1ap_E_RABToBeSetupItemHOReq.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABToBeSetupItemHOReq.compare(&asn_DEF_S1ap_E_RABToBeSetupItemHOReq, s1ap_E_RABToBeSetupListHOReqIEs1->s1ap_E_RABToBeSetupItemHOReq.array[i], &asn_DEF_S1ap_E_RABToBeSetupItemHOReq, s1ap_E_RABToBeSetupListHOReqIEs2->s1ap_E_RABToBeSetupItemHOReq.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item;
asn_comp_rval_t * s1ap_compare_s1ap_bearers_subjecttostatustransfer_list(
    S1ap_Bearers_SubjectToStatusTransfer_ListIEs_t *s1ap_Bearers_SubjectToStatusTransfer_ListIEs1,
    S1ap_Bearers_SubjectToStatusTransfer_ListIEs_t *s1ap_Bearers_SubjectToStatusTransfer_ListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_Bearers_SubjectToStatusTransfer_ListIEs1 != NULL);
    assert(s1ap_Bearers_SubjectToStatusTransfer_ListIEs2 != NULL);

    for (i = 0; i < s1ap_Bearers_SubjectToStatusTransfer_ListIEs1->s1ap_Bearers_SubjectToStatusTransfer_Item.count; i++) {
        rv2 = asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item.compare(&asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item, s1ap_Bearers_SubjectToStatusTransfer_ListIEs1->s1ap_Bearers_SubjectToStatusTransfer_Item.array[i], &asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item, s1ap_Bearers_SubjectToStatusTransfer_ListIEs2->s1ap_Bearers_SubjectToStatusTransfer_Item.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeModifiedItemBearerModReq;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1ap_E_RABToBeModifiedListBearerModReqIEs_t *s1ap_E_RABToBeModifiedListBearerModReqIEs1,
    S1ap_E_RABToBeModifiedListBearerModReqIEs_t *s1ap_E_RABToBeModifiedListBearerModReqIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABToBeModifiedListBearerModReqIEs1 != NULL);
    assert(s1ap_E_RABToBeModifiedListBearerModReqIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABToBeModifiedListBearerModReqIEs1->s1ap_E_RABToBeModifiedItemBearerModReq.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABToBeModifiedItemBearerModReq.compare(&asn_DEF_S1ap_E_RABToBeModifiedItemBearerModReq, s1ap_E_RABToBeModifiedListBearerModReqIEs1->s1ap_E_RABToBeModifiedItemBearerModReq.array[i], &asn_DEF_S1ap_E_RABToBeModifiedItemBearerModReq, s1ap_E_RABToBeModifiedListBearerModReqIEs2->s1ap_E_RABToBeModifiedItemBearerModReq.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABAdmittedItem;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabadmittedlist(
    S1ap_E_RABAdmittedListIEs_t *s1ap_E_RABAdmittedListIEs1,
    S1ap_E_RABAdmittedListIEs_t *s1ap_E_RABAdmittedListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABAdmittedListIEs1 != NULL);
    assert(s1ap_E_RABAdmittedListIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABAdmittedListIEs1->s1ap_E_RABAdmittedItem.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABAdmittedItem.compare(&asn_DEF_S1ap_E_RABAdmittedItem, s1ap_E_RABAdmittedListIEs1->s1ap_E_RABAdmittedItem.array[i], &asn_DEF_S1ap_E_RABAdmittedItem, s1ap_E_RABAdmittedListIEs2->s1ap_E_RABAdmittedItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeSetupItemBearerSUReq;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabtobesetuplistbearersureq(
    S1ap_E_RABToBeSetupListBearerSUReqIEs_t *s1ap_E_RABToBeSetupListBearerSUReqIEs1,
    S1ap_E_RABToBeSetupListBearerSUReqIEs_t *s1ap_E_RABToBeSetupListBearerSUReqIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABToBeSetupListBearerSUReqIEs1 != NULL);
    assert(s1ap_E_RABToBeSetupListBearerSUReqIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABToBeSetupListBearerSUReqIEs1->s1ap_E_RABToBeSetupItemBearerSUReq.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABToBeSetupItemBearerSUReq.compare(&asn_DEF_S1ap_E_RABToBeSetupItemBearerSUReq, s1ap_E_RABToBeSetupListBearerSUReqIEs1->s1ap_E_RABToBeSetupItemBearerSUReq.array[i], &asn_DEF_S1ap_E_RABToBeSetupItemBearerSUReq, s1ap_E_RABToBeSetupListBearerSUReqIEs2->s1ap_E_RABToBeSetupItemBearerSUReq.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABDataForwardingItem;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabdataforwardinglist(
    S1ap_E_RABDataForwardingListIEs_t *s1ap_E_RABDataForwardingListIEs1,
    S1ap_E_RABDataForwardingListIEs_t *s1ap_E_RABDataForwardingListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABDataForwardingListIEs1 != NULL);
    assert(s1ap_E_RABDataForwardingListIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABDataForwardingListIEs1->s1ap_E_RABDataForwardingItem.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABDataForwardingItem.compare(&asn_DEF_S1ap_E_RABDataForwardingItem, s1ap_E_RABDataForwardingListIEs1->s1ap_E_RABDataForwardingItem.array[i], &asn_DEF_S1ap_E_RABDataForwardingItem, s1ap_E_RABDataForwardingListIEs2->s1ap_E_RABDataForwardingItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABFailedToSetupItemHOReqAck;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabfailedtosetuplisthoreqack(
    S1ap_E_RABFailedToSetupListHOReqAckIEs_t *s1ap_E_RABFailedToSetupListHOReqAckIEs1,
    S1ap_E_RABFailedToSetupListHOReqAckIEs_t *s1ap_E_RABFailedToSetupListHOReqAckIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABFailedToSetupListHOReqAckIEs1 != NULL);
    assert(s1ap_E_RABFailedToSetupListHOReqAckIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABFailedToSetupListHOReqAckIEs1->s1ap_E_RABFailedToSetupItemHOReqAck.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABFailedToSetupItemHOReqAck.compare(&asn_DEF_S1ap_E_RABFailedToSetupItemHOReqAck, s1ap_E_RABFailedToSetupListHOReqAckIEs1->s1ap_E_RABFailedToSetupItemHOReqAck.array[i], &asn_DEF_S1ap_E_RABFailedToSetupItemHOReqAck, s1ap_E_RABFailedToSetupListHOReqAckIEs2->s1ap_E_RABFailedToSetupItemHOReqAck.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeSwitchedDLItem;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabtobeswitcheddllist(
    S1ap_E_RABToBeSwitchedDLListIEs_t *s1ap_E_RABToBeSwitchedDLListIEs1,
    S1ap_E_RABToBeSwitchedDLListIEs_t *s1ap_E_RABToBeSwitchedDLListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABToBeSwitchedDLListIEs1 != NULL);
    assert(s1ap_E_RABToBeSwitchedDLListIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABToBeSwitchedDLListIEs1->s1ap_E_RABToBeSwitchedDLItem.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABToBeSwitchedDLItem.compare(&asn_DEF_S1ap_E_RABToBeSwitchedDLItem, s1ap_E_RABToBeSwitchedDLListIEs1->s1ap_E_RABToBeSwitchedDLItem.array[i], &asn_DEF_S1ap_E_RABToBeSwitchedDLItem, s1ap_E_RABToBeSwitchedDLListIEs2->s1ap_E_RABToBeSwitchedDLItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABSetupItemCtxtSURes;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabsetuplistctxtsures(
    S1ap_E_RABSetupListCtxtSUResIEs_t *s1ap_E_RABSetupListCtxtSUResIEs1,
    S1ap_E_RABSetupListCtxtSUResIEs_t *s1ap_E_RABSetupListCtxtSUResIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABSetupListCtxtSUResIEs1 != NULL);
    assert(s1ap_E_RABSetupListCtxtSUResIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABSetupListCtxtSUResIEs1->s1ap_E_RABSetupItemCtxtSURes.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABSetupItemCtxtSURes.compare(&asn_DEF_S1ap_E_RABSetupItemCtxtSURes, s1ap_E_RABSetupListCtxtSUResIEs1->s1ap_E_RABSetupItemCtxtSURes.array[i], &asn_DEF_S1ap_E_RABSetupItemCtxtSURes, s1ap_E_RABSetupListCtxtSUResIEs2->s1ap_E_RABSetupItemCtxtSURes.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeSwitchedULItem;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabtobeswitchedullist(
    S1ap_E_RABToBeSwitchedULListIEs_t *s1ap_E_RABToBeSwitchedULListIEs1,
    S1ap_E_RABToBeSwitchedULListIEs_t *s1ap_E_RABToBeSwitchedULListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABToBeSwitchedULListIEs1 != NULL);
    assert(s1ap_E_RABToBeSwitchedULListIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABToBeSwitchedULListIEs1->s1ap_E_RABToBeSwitchedULItem.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABToBeSwitchedULItem.compare(&asn_DEF_S1ap_E_RABToBeSwitchedULItem, s1ap_E_RABToBeSwitchedULListIEs1->s1ap_E_RABToBeSwitchedULItem.array[i], &asn_DEF_S1ap_E_RABToBeSwitchedULItem, s1ap_E_RABToBeSwitchedULListIEs2->s1ap_E_RABToBeSwitchedULItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABItem;
asn_comp_rval_t * s1ap_compare_s1ap_e_rablist(
    S1ap_E_RABListIEs_t *s1ap_E_RABListIEs1,
    S1ap_E_RABListIEs_t *s1ap_E_RABListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABListIEs1 != NULL);
    assert(s1ap_E_RABListIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABListIEs1->s1ap_E_RABItem.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABItem.compare(&asn_DEF_S1ap_E_RABItem, s1ap_E_RABListIEs1->s1ap_E_RABItem.array[i], &asn_DEF_S1ap_E_RABItem, s1ap_E_RABListIEs2->s1ap_E_RABItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_TAIItem;
asn_comp_rval_t * s1ap_compare_s1ap_tailist(
    S1ap_TAIListIEs_t *s1ap_TAIListIEs1,
    S1ap_TAIListIEs_t *s1ap_TAIListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_TAIListIEs1 != NULL);
    assert(s1ap_TAIListIEs2 != NULL);

    for (i = 0; i < s1ap_TAIListIEs1->s1ap_TAIItem.count; i++) {
        rv2 = asn_DEF_S1ap_TAIItem.compare(&asn_DEF_S1ap_TAIItem, s1ap_TAIListIEs1->s1ap_TAIItem.array[i], &asn_DEF_S1ap_TAIItem, s1ap_TAIListIEs2->s1ap_TAIItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem;
asn_comp_rval_t * s1ap_compare_s1ap_ue_associatedlogicals1_connectionlistres(
    S1ap_UE_associatedLogicalS1_ConnectionListResIEs_t *s1ap_UE_associatedLogicalS1_ConnectionListResIEs1,
    S1ap_UE_associatedLogicalS1_ConnectionListResIEs_t *s1ap_UE_associatedLogicalS1_ConnectionListResIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UE_associatedLogicalS1_ConnectionListResIEs1 != NULL);
    assert(s1ap_UE_associatedLogicalS1_ConnectionListResIEs2 != NULL);

    for (i = 0; i < s1ap_UE_associatedLogicalS1_ConnectionListResIEs1->s1ap_UE_associatedLogicalS1_ConnectionItemRes.count; i++) {
        rv2 = asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem.compare(&asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem, s1ap_UE_associatedLogicalS1_ConnectionListResIEs1->s1ap_UE_associatedLogicalS1_ConnectionItemRes.array[i], &asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem, s1ap_UE_associatedLogicalS1_ConnectionListResIEs2->s1ap_UE_associatedLogicalS1_ConnectionItemRes.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABSetupItemBearerSURes;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabsetuplistbearersures(
    S1ap_E_RABSetupListBearerSUResIEs_t *s1ap_E_RABSetupListBearerSUResIEs1,
    S1ap_E_RABSetupListBearerSUResIEs_t *s1ap_E_RABSetupListBearerSUResIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABSetupListBearerSUResIEs1 != NULL);
    assert(s1ap_E_RABSetupListBearerSUResIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABSetupListBearerSUResIEs1->s1ap_E_RABSetupItemBearerSURes.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABSetupItemBearerSURes.compare(&asn_DEF_S1ap_E_RABSetupItemBearerSURes, s1ap_E_RABSetupListBearerSUResIEs1->s1ap_E_RABSetupItemBearerSURes.array[i], &asn_DEF_S1ap_E_RABSetupItemBearerSURes, s1ap_E_RABSetupListBearerSUResIEs2->s1ap_E_RABSetupItemBearerSURes.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABModifyItemBearerModRes;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabmodifylistbearermodres(
    S1ap_E_RABModifyListBearerModResIEs_t *s1ap_E_RABModifyListBearerModResIEs1,
    S1ap_E_RABModifyListBearerModResIEs_t *s1ap_E_RABModifyListBearerModResIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABModifyListBearerModResIEs1 != NULL);
    assert(s1ap_E_RABModifyListBearerModResIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABModifyListBearerModResIEs1->s1ap_E_RABModifyItemBearerModRes.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABModifyItemBearerModRes.compare(&asn_DEF_S1ap_E_RABModifyItemBearerModRes, s1ap_E_RABModifyListBearerModResIEs1->s1ap_E_RABModifyItemBearerModRes.array[i], &asn_DEF_S1ap_E_RABModifyItemBearerModRes, s1ap_E_RABModifyListBearerModResIEs2->s1ap_E_RABModifyItemBearerModRes.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeSetupItemCtxtSUReq;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabtobesetuplistctxtsureq(
    S1ap_E_RABToBeSetupListCtxtSUReqIEs_t *s1ap_E_RABToBeSetupListCtxtSUReqIEs1,
    S1ap_E_RABToBeSetupListCtxtSUReqIEs_t *s1ap_E_RABToBeSetupListCtxtSUReqIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABToBeSetupListCtxtSUReqIEs1 != NULL);
    assert(s1ap_E_RABToBeSetupListCtxtSUReqIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABToBeSetupListCtxtSUReqIEs1->s1ap_E_RABToBeSetupItemCtxtSUReq.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABToBeSetupItemCtxtSUReq.compare(&asn_DEF_S1ap_E_RABToBeSetupItemCtxtSUReq, s1ap_E_RABToBeSetupListCtxtSUReqIEs1->s1ap_E_RABToBeSetupItemCtxtSUReq.array[i], &asn_DEF_S1ap_E_RABToBeSetupItemCtxtSUReq, s1ap_E_RABToBeSetupListCtxtSUReqIEs2->s1ap_E_RABToBeSetupItemCtxtSUReq.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem;
asn_comp_rval_t * s1ap_compare_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1ap_UE_associatedLogicalS1_ConnectionListResAckIEs_t *s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs1,
    S1ap_UE_associatedLogicalS1_ConnectionListResAckIEs_t *s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs1 != NULL);
    assert(s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs2 != NULL);

    for (i = 0; i < s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs1->s1ap_UE_associatedLogicalS1_ConnectionItemResAck.count; i++) {
        rv2 = asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem.compare(&asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem, s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs1->s1ap_UE_associatedLogicalS1_ConnectionItemResAck.array[i], &asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionItem, s1ap_UE_associatedLogicalS1_ConnectionListResAckIEs2->s1ap_UE_associatedLogicalS1_ConnectionItemResAck.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABInformationListItem;
asn_comp_rval_t * s1ap_compare_s1ap_e_rabinformationlist(
    S1ap_E_RABInformationListIEs_t *s1ap_E_RABInformationListIEs1,
    S1ap_E_RABInformationListIEs_t *s1ap_E_RABInformationListIEs2) {

    int i;
    asn_comp_rval_t *rv = NULL;

    asn_comp_rval_t *rv2 = NULL;

    assert(s1ap_E_RABInformationListIEs1 != NULL);
    assert(s1ap_E_RABInformationListIEs2 != NULL);

    for (i = 0; i < s1ap_E_RABInformationListIEs1->s1ap_E_RABInformationItem.count; i++) {
        rv2 = asn_DEF_S1ap_E_RABInformationListItem.compare(&asn_DEF_S1ap_E_RABInformationListItem, s1ap_E_RABInformationListIEs1->s1ap_E_RABInformationItem.array[i], &asn_DEF_S1ap_E_RABInformationListItem, s1ap_E_RABInformationListIEs2->s1ap_E_RABInformationItem.array[i]);
        if(rv2) {          if (NULL == rv) {            rv = rv2;          } else {            rv2->next = rv;            rv = rv2;          }          rv2 = NULL;        }    }
    return rv;
}

