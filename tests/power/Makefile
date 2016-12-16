#
# OMNeT++/OMNEST Makefile for mixim
#
# This file was generated with the command:
#  opp_makemake -f --nolink -O out -d deviceTest -d utils -d Nic80211Test -d deviceTestAccts -d deviceTestMulti -d deviceTestAll -L../../out/$$\(CONFIGNAME\)/src/base -L../../out/$$\(CONFIGNAME\)/src/modules -L../../out/$$\(CONFIGNAME\)/tests/testUtils -L../../out/$$\(CONFIGNAME\)/src/base -L../../out/$$\(CONFIGNAME\)/tests/power/utils -L../../out/$$\(CONFIGNAME\)/src/modules -L../../out/$$\(CONFIGNAME\)/tests/testUtils -lmiximbase -lmiximmodules -lmiximtestUtils -KFLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2 -KMIXIM_PROJ=../..
#

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = tests/power
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS =

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
# preserve default target
all: $(TARGET)

deviceTest_dir deviceTestAccts_dir deviceTestAll_dir deviceTestMulti_dir Nic80211Test_dir: utils_dir

.PHONY: utils

# <<<
#------------------------------------------------------------------------------

# Main target

all: $(OBJS) submakedirs Makefile
	@# Do nothing

submakedirs:  deviceTest_dir utils_dir Nic80211Test_dir deviceTestAccts_dir deviceTestMulti_dir deviceTestAll_dir

.PHONY: all clean cleanall depend msgheaders  deviceTest utils Nic80211Test deviceTestAccts deviceTestMulti deviceTestAll
deviceTest: deviceTest_dir
utils: utils_dir
Nic80211Test: Nic80211Test_dir
deviceTestAccts: deviceTestAccts_dir
deviceTestMulti: deviceTestMulti_dir
deviceTestAll: deviceTestAll_dir

deviceTest_dir:
	cd deviceTest && $(MAKE) all

utils_dir:
	cd utils && $(MAKE) all

Nic80211Test_dir:
	cd Nic80211Test && $(MAKE) all

deviceTestAccts_dir:
	cd deviceTestAccts && $(MAKE) all

deviceTestMulti_dir:
	cd deviceTestMulti && $(MAKE) all

deviceTestAll_dir:
	cd deviceTestAll && $(MAKE) all

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)
	$(Q)cd deviceTest && $(MAKE) msgheaders
	$(Q)cd utils && $(MAKE) msgheaders
	$(Q)cd Nic80211Test && $(MAKE) msgheaders
	$(Q)cd deviceTestAccts && $(MAKE) msgheaders
	$(Q)cd deviceTestMulti && $(MAKE) msgheaders
	$(Q)cd deviceTestAll && $(MAKE) msgheaders

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f mixim mixim.exe libmixim.so libmixim.a libmixim.dll libmixim.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h

	-$(Q)cd deviceTest && $(MAKE) clean
	-$(Q)cd utils && $(MAKE) clean
	-$(Q)cd Nic80211Test && $(MAKE) clean
	-$(Q)cd deviceTestAccts && $(MAKE) clean
	-$(Q)cd deviceTestMulti && $(MAKE) clean
	-$(Q)cd deviceTestAll && $(MAKE) clean

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc
	$(Q)-cd deviceTest && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd utils && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd Nic80211Test && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd deviceTestAccts && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd deviceTestMulti && if [ -f Makefile ]; then $(MAKE) depend; fi
	$(Q)-cd deviceTestAll && if [ -f Makefile ]; then $(MAKE) depend; fi

# DO NOT DELETE THIS LINE -- make depend depends on it.

