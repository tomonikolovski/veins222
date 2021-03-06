#
# OMNeT++/OMNEST Makefile for mixim
#
# This file was generated with the command:
#  opp_makemake -f --nolink -O out -d blackboard -d traci -d connectionManager -d radioState -d baseMobility -d decider -d nicTest -d coord -d basePhyLayer -d power -d mapping -d testUtils -d channelInfo -L../out/$$\(CONFIGNAME\)/src/base -L../out/$$\(CONFIGNAME\)/src/modules -L../out/$$\(CONFIGNAME\)/tests/testUtils -L../out/$$\(CONFIGNAME\)/src/base -L../out/$$\(CONFIGNAME\)/tests/power/utils -L../out/$$\(CONFIGNAME\)/src/modules -L../out/$$\(CONFIGNAME\)/tests/testUtils -lmiximbase -lmiximmodules -lmiximtestUtils -KFLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2 -KMIXIM_PROJ=..
#

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = tests
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS =

# Message files
MSGFILES =

# Other makefile variables (-K)
FLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2
MIXIM_PROJ=..

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
# inserted from file 'makefrag':
# makefrag for "tests" directory of MiXiM
#
# this file automatically gets inserted into Makefiles generated by opp_makemake

# preserve default target
all: $(TARGET)

baseMobility_dir basePhyLayer_dir blackboard_dir channelInfo_dir connectionManager_dir coord_dir mapping_dir radioState_dir decider_dir nicTest_dir power_dir traci_dir: testUtils_dir

.PHONY: testUtils

# <<<
#------------------------------------------------------------------------------

# Main target

all: $(OBJS) submakedirs Makefile
	@# Do nothing

submakedirs:  blackboard_dir traci_dir connectionManager_dir radioState_dir baseMobility_dir decider_dir nicTest_dir coord_dir basePhyLayer_dir power_dir mapping_dir testUtils_dir channelInfo_dir

.PHONY: all clean cleanall depend msgheaders  blackboard traci connectionManager radioState baseMobility decider nicTest coord basePhyLayer power mapping testUtils channelInfo
blackboard: blackboard_dir
traci: traci_dir
connectionManager: connectionManager_dir
radioState: radioState_dir
baseMobility: baseMobility_dir
decider: decider_dir
nicTest: nicTest_dir
coord: coord_dir
basePhyLayer: basePhyLayer_dir
power: power_dir
mapping: mapping_dir
testUtils: testUtils_dir
channelInfo: channelInfo_dir

blackboard_dir:
	cd blackboard && $(MAKE) all

traci_dir:
	cd traci && $(MAKE) all

connectionManager_dir:
	cd connectionManager && $(MAKE) all

radioState_dir:
	cd radioState && $(MAKE) all

baseMobility_dir:
	cd baseMobility && $(MAKE) all

decider_dir:
	cd decider && $(MAKE) all

nicTest_dir:
	cd nicTest && $(MAKE) all

coord_dir:
	cd coord && $(MAKE) all

basePhyLayer_dir:
	cd basePhyLayer && $(MAKE) all

power_dir:
	cd power && $(MAKE) all

mapping_dir:
	cd mapping && $(MAKE) all

testUtils_dir:
	cd testUtils && $(MAKE) all

channelInfo_dir:
	cd channelInfo && $(MAKE) all

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)
	$(Q)cd blackboard && $(MAKE) msgheaders
	$(Q)cd traci && $(MAKE) msgheaders
	$(Q)cd connectionManager && $(MAKE) msgheaders
	$(Q)cd radioState && $(MAKE) msgheaders
	$(Q)cd baseMobility && $(MAKE) msgheaders
	$(Q)cd decider && $(MAKE) msgheaders
	$(Q)cd nicTest && $(MAKE) msgheaders
	$(Q)cd coord && $(MAKE) msgheaders
	$(Q)cd basePhyLayer && $(MAKE) msgheaders
	$(Q)cd power && $(MAKE) msgheaders
	$(Q)cd mapping && $(MAKE) msgheaders
	$(Q)cd testUtils && $(MAKE) msgheaders
	$(Q)cd channelInfo && $(MAKE) msgheaders

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f mixim mixim.exe libmixim.so libmixim.a libmixim.dll libmixim.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h

	-$(Q)cd blackboard && $(MAKE) clean
	-$(Q)cd traci && $(MAKE) clean
	-$(Q)cd connectionManager && $(MAKE) clean
	-$(Q)cd radioState && $(MAKE) clean
	-$(Q)cd baseMobility && $(MAKE) clean
	-$(Q)cd decider && $(MAKE) clean
	-$(Q)cd nicTest && $(MAKE) clean
	-$(Q)cd coord && $(MAKE) clean
	-$(Q)cd basePhyLayer && $(MAKE) clean
	-$(Q)cd power && $(MAKE) clean
	-$(Q)cd mapping && $(MAKE) clean
	-$(Q)cd testUtils && $(MAKE) clean
	-$(Q)cd channelInfo && $(MAKE) clean

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc
	$(Q)-cd blackboard && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd traci && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd connectionManager && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd radioState && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd baseMobility && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd decider && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd nicTest && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd coord && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd basePhyLayer && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd power && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd mapping && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd testUtils && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd channelInfo && if [ -f Makefile ]; then $(MAKE) depend; fi

# DO NOT DELETE THIS LINE -- make depend depends on it.

