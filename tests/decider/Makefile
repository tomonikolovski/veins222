#
# OMNeT++/OMNEST Makefile for decider
#
# This file was generated with the command:
#  opp_makemake -f -o decider -O out -u CMDENV -I../../src/base/messages -I.. -I../../src/modules/analogueModel -I../../src/base/utils -I../../src/base/modules -I../../src/modules/phy -I../../src/modules/messages -I../../src/modules/mac/ieee80211p -I../../src/modules -I../../src/base/phyLayer -I../testUtils -I../../src/modules/utility -I../../src/base/connectionManager -I../../src/modules/obstacle -L../../out/$$\(CONFIGNAME\)/src/base -L../../out/$$\(CONFIGNAME\)/src/modules -L../../out/$$\(CONFIGNAME\)/tests/testUtils -L../../out/$$\(CONFIGNAME\)/src/base -L../../out/$$\(CONFIGNAME\)/tests/power/utils -L../../out/$$\(CONFIGNAME\)/src/modules -L../../out/$$\(CONFIGNAME\)/tests/testUtils -lmiximbase -lmiximmodules -lmiximtestUtils -lmiximbase -lmiximmodules -lmiximtestUtils -KFLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2 -KMIXIM_PROJ=../..
#

# Name of target to be created (-o option)
TARGET = decider$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
#USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../src/base/messages \
    -I.. \
    -I../../src/modules/analogueModel \
    -I../../src/base/utils \
    -I../../src/base/modules \
    -I../../src/modules/phy \
    -I../../src/modules/messages \
    -I../../src/modules/mac/ieee80211p \
    -I../../src/modules \
    -I../../src/base/phyLayer \
    -I../testUtils \
    -I../../src/modules/utility \
    -I../../src/base/connectionManager \
    -I../../src/modules/obstacle \
    -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../out/$(CONFIGNAME)/src/base -L../../out/$(CONFIGNAME)/src/modules -L../../out/$(CONFIGNAME)/tests/testUtils -L../../out/$(CONFIGNAME)/src/base -L../../out/$(CONFIGNAME)/tests/power/utils -L../../out/$(CONFIGNAME)/src/modules -L../../out/$(CONFIGNAME)/tests/testUtils  -lmiximbase -lmiximmodules -lmiximtestUtils -lmiximbase -lmiximmodules -lmiximtestUtils
LIBS += -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/base` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/modules` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/testUtils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/base` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/power/utils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/modules` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/testUtils`

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = tests/decider
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = $O/DeciderTest.o

# Message files
MSGFILES =

# Other makefile variables (-K)
FLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2
MIXIM_PROJ=../..

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f decider decider.exe libdecider.so libdecider.a libdecider.dll libdecider.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/DeciderTest.o: DeciderTest.cc \
	../../src/base/connectionManager/ChannelAccess.h \
	../../src/base/messages/AirFrame_m.h \
	../../src/base/messages/ChannelSenseRequest_m.h \
	../../src/base/modules/BaseBattery.h \
	../../src/base/modules/BaseMobility.h \
	../../src/base/modules/BaseModule.h \
	../../src/base/modules/BaseWorldUtility.h \
	../../src/base/modules/BatteryAccess.h \
	../../src/base/phyLayer/AnalogueModel.h \
	../../src/base/phyLayer/BaseDecider.h \
	../../src/base/phyLayer/BasePhyLayer.h \
	../../src/base/phyLayer/ChannelInfo.h \
	../../src/base/phyLayer/ChannelState.h \
	../../src/base/phyLayer/Decider.h \
	../../src/base/phyLayer/DeciderToPhyInterface.h \
	../../src/base/phyLayer/Interpolation.h \
	../../src/base/phyLayer/MacToPhyInterface.h \
	../../src/base/phyLayer/Mapping.h \
	../../src/base/phyLayer/MappingBase.h \
	../../src/base/phyLayer/MappingUtils.h \
	../../src/base/phyLayer/PhyUtils.h \
	../../src/base/phyLayer/Signal_.h \
	../../src/base/utils/Coord.h \
	../../src/base/utils/FWMath.h \
	../../src/base/utils/FindModule.h \
	../../src/base/utils/HostState.h \
	../../src/base/utils/MiXiMDefs.h \
	../../src/base/utils/Move.h \
	../../src/base/utils/miximkerneldefs.h \
	../../src/modules/phy/SNRThresholdDecider.h \
	DeciderTest.h \
	TestSNRThresholdDeciderNew.h \
	../testUtils/OmnetTestBase.h \
	../testUtils/asserts.h

