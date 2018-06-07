# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oai/openairinterface5g/cmake_targets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai

# Include any dependencies generated for this target.
include CMakeFiles/test_epc_generate_scenario.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_epc_generate_scenario.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_epc_generate_scenario.dir/flags.make

CMakeFiles/messages_xml.h: CMakeFiles/messages.xml
CMakeFiles/messages_xml.h: CMakeFiles/Rel10/asn1_constants.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/messages_xml.h"
	sed -e 's/ *//' -e 's/"/\\"/g' -e 's/^/"/' -e 's/$$/\\n"/' /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/messages.xml > /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/messages_xml.h

CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_ies_defs.h
CMakeFiles/messages.xml: CMakeFiles/Rel10/asn1_constants.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/messages.xml"
	gccxml -DCMAKE_BUILD_TYPE="RelWithDebInfo" -DCMAKER -DFIRMWARE_VERSION="No\ svn\ information" -DPACKAGE_VERSION="Branch:\ LWIP\ Abrev.\ Hash:\ 17b9a9e\ Date:\ Tue\ Aug\ 8\ 09:58:36\ 2017\ +0200" -DPACKAGE_BUGREPORT="openair4g-devel@lists.eurecom.fr" -DENABLE_ITTI -DRel10=1 -DS1AP_VERSION=R10 -DX2AP_VERSION=R11 -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DNB_ANTENNAS_TXRX=2 -DEXMIMO=1 -DNone=1 -DENABLE_SECURITY -DENABLE_USE_MME -DNO_RRM -DUSER_MODE -DDEADLINE_SCHEDULER -DOAI_NW_DRIVER_USE_NETLINK -DPACKAGE_NAME="NotDefined" -DENB_MODE -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_VCD -DENABLE_VCD_FIFO -DLOG_NO_THREAD -DOPENAIR_LTE -DDRIVER2013 -DENABLE_FXP -DEXMIMO_IOT -DMAX_NUM_CCs=1 -DNEW_FFT -DOPENAIR1 -DPC_DSP -DPC_TARGET -DPHYSIM -DPHY_CONTEXT -DPUCCH -DENABLE_NAS_UE_LOGGING -DNAS_BUILT_IN_UE -DNAS_UE -DMAC_CONTEXT -DJUMBO_FRAME -DOPENAIR2 -DTRACE_RLC_MUTEX -DLINK_ENB_PDCP_TO_GTPV1U -DNETTLE_VERSION_MAJOR=2 -DNETTLE_VERSION_MINOR=7 -DASN1_MINIMUM_VERSION=924 -I/home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/Rel10 -I/home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/R10.5 -I/home/oai/openairinterface5g/openair3/S1AP -I/home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/R11.2 -I/home/oai/openairinterface5g/openair2/X2AP -I/home/oai/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/oai/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/oai/openairinterface5g/targets/ARCH/USRP/USERSPACE/LIB -I/home/oai/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/oai/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/oai/openairinterface5g/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/oai/openairinterface5g/targets/ARCH/COMMON -I/home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles -I/home/oai/openairinterface5g/openair2/COMMON -I/home/oai/openairinterface5g/openair2/UTIL -I/home/oai/openairinterface5g/openair2/UTIL/LOG -I/home/oai/openairinterface5g/openair3/COMMON -I/home/oai/openairinterface5g/openair3/UTILS -I/home/oai/openairinterface5g/openair1 -I/home/oai/openairinterface5g/openair2/NAS -I/home/oai/openairinterface5g/openair2 -I/home/oai/openairinterface5g/openair2/LAYER2/RLC -I/home/oai/openairinterface5g/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/oai/openairinterface5g/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/oai/openairinterface5g/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/oai/openairinterface5g/openair2/LAYER2/PDCP_v10.1.0 -I/home/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/home/oai/openairinterface5g/openair2/RRC/LITE -I/home/oai/openairinterface5g/openair3/RAL-LTE/INTERFACE-802.21/INCLUDE -I/home/oai/openairinterface5g/openair3/RAL-LTE/LTE_RAL_ENB/INCLUDE -I/home/oai/openairinterface5g/openair3/RAL-LTE/LTE_RAL_UE/INCLUDE -I/home/oai/openairinterface5g/common/utils -I/home/oai/openairinterface5g/common/utils/itti -I/home/oai/openairinterface5g/openair3/NAS/COMMON -I/home/oai/openairinterface5g/openair3/NAS/COMMON/API/NETWORK -I/home/oai/openairinterface5g/openair3/NAS/COMMON/EMM/MSG -I/home/oai/openairinterface5g/openair3/NAS/COMMON/ESM/MSG -I/home/oai/openairinterface5g/openair3/NAS/COMMON/IES -I/home/oai/openairinterface5g/openair3/NAS/COMMON/UTIL -I/home/oai/openairinterface5g/openair3/SECU -I/home/oai/openairinterface5g/openair3/SCTP -I/home/oai/openairinterface5g/openair3/S1AP -I/home/oai/openairinterface5g/openair2/X2AP -I/home/oai/openairinterface5g/openair3/UDP -I/home/oai/openairinterface5g/openair3/GTPV1-U -I/home/oai/openairinterface5g/targets/COMMON -I/home/oai/openairinterface5g/targets/ARCH/COMMON -I/home/oai/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/oai/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/oai/openairinterface5g/openair2/ENB_APP -I/home/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/MAC -I/home/oai/openairinterface5g/openair2/UTIL/OSA -I/home/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/home/oai/openairinterface5g/openair2/UTIL/MEM -I/home/oai/openairinterface5g/openair2/UTIL/LISTS -I/home/oai/openairinterface5g/openair2/UTIL/FIFO -I/home/oai/openairinterface5g/openair2/UTIL/OCG -I/home/oai/openairinterface5g/openair2/UTIL/MATH -I/home/oai/openairinterface5g/openair2/UTIL/TIMER -I/home/oai/openairinterface5g/openair2/UTIL/OMG -I/home/oai/openairinterface5g/openair2/UTIL/OTG -I/home/oai/openairinterface5g/openair2/UTIL/CLI -I/home/oai/openairinterface5g/openair2/UTIL/OPT -I/home/oai/openairinterface5g/openair2/UTIL/OMV -I/home/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/home/oai/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/oai/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/include -I/home/oai/openairinterface5g -I/home/oai/openairinterface5g/common/utils/hashtable -I/home/oai/openairinterface5g/common/utils/msc -I/home/oai/openairinterface5g/openair3/NAS/UE -I/home/oai/openairinterface5g/openair3/NAS/UE/API/USER -I/home/oai/openairinterface5g/openair3/NAS/UE/API/USIM -I/home/oai/openairinterface5g/openair3/NAS/UE/EMM -I/home/oai/openairinterface5g/openair3/NAS/UE/EMM/SAP -I/home/oai/openairinterface5g/openair3/NAS/UE/ESM -I/home/oai/openairinterface5g/openair3/NAS/UE/ESM/SAP -I/home/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/home/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/libxml2 -I/usr/include/pgm-5.1 -I/usr/lib/x86_64-linux-gnu/pgm-5.1/include -I/usr/include/atlas -I/home/oai/openairinterface5g/common/utils/T -std=gnu89 -fxml=/home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/messages.xml /home/oai/openairinterface5g/common/utils/itti/intertask_interface_types.h

CMakeFiles/Rel10/asn1_constants.h: /home/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions-a20.asn
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/Rel10/asn1_constants.h"
	../tools/generate_asn1 /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/Rel10 /home/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions-a20.asn
	../tools/fix_asn1 /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/Rel10 RRC Rel10

CMakeFiles/R10.5/s1ap_decoder.c: /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/R10.5/s1ap_decoder.c, CMakeFiles/R10.5/s1ap_encoder.c, CMakeFiles/R10.5/s1ap_xer_print.c, CMakeFiles/R10.5/s1ap_compare.c, CMakeFiles/R10.5/s1ap_ies_defs.h"
	../tools/generate_asn1 /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/R10.5 /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	python /home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/asn1tostruct.py -f/home/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU-Contents.asn -o/home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/R10.5
	../tools/fix_asn1 /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/R10.5 S1AP R10

CMakeFiles/R10.5/s1ap_encoder.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_xer_print.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_compare.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_ies_defs.h: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o: CMakeFiles/test_epc_generate_scenario.dir/flags.make
CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o: /home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o   -c /home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c

CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c > CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.i

CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c -o CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.s

CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.requires:
.PHONY : CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.requires

CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.provides: CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.requires
	$(MAKE) -f CMakeFiles/test_epc_generate_scenario.dir/build.make CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.provides.build
.PHONY : CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.provides

CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.provides.build: CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o

# Object files for target test_epc_generate_scenario
test_epc_generate_scenario_OBJECTS = \
"CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o"

# External object files for target test_epc_generate_scenario
test_epc_generate_scenario_EXTERNAL_OBJECTS =

test_epc_generate_scenario: CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o
test_epc_generate_scenario: CMakeFiles/test_epc_generate_scenario.dir/build.make
test_epc_generate_scenario: libRRC_LIB.a
test_epc_generate_scenario: libS1AP_LIB.a
test_epc_generate_scenario: libS1AP_ENB.a
test_epc_generate_scenario: libX2AP_LIB.a
test_epc_generate_scenario: libGTPV1U.a
test_epc_generate_scenario: libLIB_NAS_UE.a
test_epc_generate_scenario: libSECU_CN.a
test_epc_generate_scenario: libUTIL.a
test_epc_generate_scenario: libHASHTABLE.a
test_epc_generate_scenario: libSCTP_CLIENT.a
test_epc_generate_scenario: libUDP.a
test_epc_generate_scenario: libSCHED_LIB.a
test_epc_generate_scenario: libPHY.a
test_epc_generate_scenario: libLFDS.a
test_epc_generate_scenario: libITTI.a
test_epc_generate_scenario: libL2.a
test_epc_generate_scenario: CMakeFiles/test_epc_generate_scenario.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable test_epc_generate_scenario"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_epc_generate_scenario.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_epc_generate_scenario.dir/build: test_epc_generate_scenario
.PHONY : CMakeFiles/test_epc_generate_scenario.dir/build

CMakeFiles/test_epc_generate_scenario.dir/requires: CMakeFiles/test_epc_generate_scenario.dir/home/oai/openairinterface5g/openair3/TEST/EPC_TEST/generate_scenario.c.o.requires
.PHONY : CMakeFiles/test_epc_generate_scenario.dir/requires

CMakeFiles/test_epc_generate_scenario.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_epc_generate_scenario.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_epc_generate_scenario.dir/clean

CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/messages_xml.h
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/messages.xml
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/Rel10/asn1_constants.h
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/test_epc_generate_scenario.dir/depend: CMakeFiles/R10.5/s1ap_ies_defs.h
	cd /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oai/openairinterface5g/cmake_targets /home/oai/openairinterface5g/cmake_targets /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai /home/oai/openairinterface5g/cmake_targets/lte_noS1_build_oai/CMakeFiles/test_epc_generate_scenario.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_epc_generate_scenario.dir/depend
