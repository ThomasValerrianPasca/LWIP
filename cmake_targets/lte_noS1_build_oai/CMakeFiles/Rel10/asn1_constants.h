#ifndef __ASN1_CONSTANTS_H__
#define __ASN1_CONSTANTS_H__
#define min_val_IMSI_Digit  0
#define max_val_IMSI_Digit  9
#define min_val_DRB_Identity  1
#define max_val_DRB_Identity  32
#define min_val_P_Max  -30
#define max_val_P_Max  33
#define min_val_N1PUCCH_AN_CS_r10	 0
#define max_val_N1PUCCH_AN_CS_r10	 2047
#define min_val_N1PUCCH_AN_PersistentList  0
#define max_val_N1PUCCH_AN_PersistentList  2047
#define min_val_NextHopChainingCount  0
#define max_val_NextHopChainingCount  7
#define min_val_AdditionalSpectrumEmission  1
#define max_val_AdditionalSpectrumEmission  32
#define min_val_ARFCN_ValueCDMA2000  0
#define max_val_ARFCN_ValueCDMA2000  2047
#define min_val_ARFCN_ValueEUTRA  0
#define max_val_ARFCN_ValueEUTRA  maxEARFCN
#define min_val_ARFCN_ValueGERAN  0
#define max_val_ARFCN_ValueGERAN  1023
#define min_val_ARFCN_ValueUTRA  0
#define max_val_ARFCN_ValueUTRA  16383
#define min_val_CellIndex  1
#define max_val_CellIndex  maxCellMeas
#define min_val_CellReselectionPriority  0
#define max_val_CellReselectionPriority  7
#define min_val_PhysCellId  0
#define max_val_PhysCellId  503
#define min_val_PhysCellIdCDMA2000  0
#define max_val_PhysCellIdCDMA2000  maxPNOffset
#define min_val_PhysCellIdUTRA_FDD  0
#define max_val_PhysCellIdUTRA_FDD  511
#define min_val_PhysCellIdUTRA_TDD  0
#define max_val_PhysCellIdUTRA_TDD  127
#define min_val_MCC_MNC_Digit  0
#define max_val_MCC_MNC_Digit  9
#define min_val_PreRegistrationZoneIdHRPD  0
#define max_val_PreRegistrationZoneIdHRPD  255
#define min_val_Q_QualMin_r9  -34
#define max_val_Q_QualMin_r9  -3
#define min_val_Q_RxLevMin  -70
#define max_val_Q_RxLevMin  -22
#define min_val_Q_OffsetRangeInterRAT  -15
#define max_val_Q_OffsetRangeInterRAT  15
#define min_val_ReselectionThreshold  0
#define max_val_ReselectionThreshold  31
#define min_val_ReselectionThresholdQ_r9  0
#define max_val_ReselectionThresholdQ_r9  31
#define min_val_SCellIndex_r10  1
#define max_val_SCellIndex_r10  7
#define min_val_ServCellIndex_r10  0
#define max_val_ServCellIndex_r10  7
#define min_val_T_Reselection  0
#define max_val_T_Reselection  7
#define min_val_Hysteresis  0
#define max_val_Hysteresis  30
#define min_val_MeasId  1
#define max_val_MeasId  maxMeasId
#define min_val_MeasObjectId  1
#define max_val_MeasObjectId  maxObjectId
#define min_val_ReportConfigId  1
#define max_val_ReportConfigId  maxReportConfigId
#define min_val_ThresholdGERAN  0
#define max_val_ThresholdGERAN  63
#define min_val_ThresholdCDMA2000  0
#define max_val_ThresholdCDMA2000  63
#define min_val_RSRP_Range  0
#define max_val_RSRP_Range  97
#define min_val_RSRQ_Range  0
#define max_val_RSRQ_Range  34
#define min_val_RRC_TransactionIdentifier  0
#define max_val_RRC_TransactionIdentifier  3
#define maxBandComb_r10					128	// Maximum number of band combinations.
#define maxBands					 64	// Maximum number of bands listed in EUTRA UE caps
#define maxBandwidthClass_r10			16	// Maximum number of supported CA BW classes per band
#define maxCDMA_BandClass			 32	// Maximum value of the CDMA band classes
#define maxCellBlack				 16	// Maximum number of blacklisted physical cell identity
#define maxCellInfoGERAN_r9 			32	// Maximum number of GERAN cells for which system in_
#define maxCellInfoUTRA_r9				16	// Maximum number of UTRA cells for which system
#define maxFreqUTRA_TDD_r10				6	// Maximum number of UTRA TDD carrier frequencies for
#define maxCellInter				 16	// Maximum number of neighbouring inter_frequency
#define maxCellIntra				 16	// Maximum number of neighbouring intra_frequency
#define maxCellListGERAN			 3	// Maximum number of lists of GERAN cells
#define maxCellMeas					 32	// Maximum number of entries in each of the
#define maxCellReport				 8	// Maximum number of reported cells
#define maxDRB						 11	// Maximum number of Data Radio Bearers
#define maxEARFCN					 65535	// Maximum value of EUTRA carrier fequency
#define maxFreq						 8	// Maximum number of carrier frequencies
#define maxGERAN_SI					 10	// Maximum number of GERAN SI blocks that can be
#define maxGNFG						 16	// Maximum number of GERAN neighbour freq groups
#define maxLogMeasReport_r10		 520	// Maximum number of logged measurement entries
#define maxMBSFN_Allocations		 8	// Maximum number of MBSFN frame allocations with
#define maxMBSFN_Area				 8
#define maxMBSFN_Area_minus_1				 7
#define maxMeasId					 32
#define maxObjectId					 32
#define maxPageRec					 16	// 
#define maxPhysCellIdRange_r9 		 4	// Maximum number of physical cell identity ranges
#define maxPNOffset						511	// Maximum number of CDMA2000 PNOffsets
#define maxPMCH_PerMBSFN			 15
#define maxRAT_Capabilities			 8	// Maximum number of interworking RATs (incl EUTRA)
#define maxReportConfigId			 32
#define maxRSTD_Freq_r10			 3	// Maximum number of frequency layers for RSTD
#define maxSCell_r10				 4	// Maximum number of SCells
#define maxServCell_r10				 5	// Maximum number of Serving cells
#define maxServiceCount 			 16	// Maximum number of MBMS services that can be included
#define maxServiceCount_minus_1			 15
#define maxSessionPerPMCH			 29
#define maxSessionPerPMCH_minus_1			 28
#define maxSIB						 32	// Maximum number of SIBs
#define maxSIB_minus_1					 31
#define maxSI_Message				 32	// Maximum number of SI messages
#define maxSimultaneousBands_r10	 64	// Maximum number of simultaneously aggregated bands
#define maxUTRA_FDD_Carrier			 16	// Maximum number of UTRA FDD carrier frequencies
#define maxUTRA_TDD_Carrier			 16	// Maximum number of UTRA TDD carrier frequencies
#define maxReestabInfo				 32	// Maximum number of KeNB* and shortMAC_I forwarded
#define maxLogMeas_r10				 4060// Maximum number of logged measurement entries
#endif 
