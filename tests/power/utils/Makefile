#
# OMNeT++/OMNEST Makefile for libpowerTestUtils
#
# This file was generated with the command:
#  opp_makemake -f --make-so -o powerTestUtils -O out -I../../../src/base/utils -I../../../src/modules/power/battery -I../../../src/base/modules -I../../../src/base/phyLayer -I../../../src/base/messages -I../../../src/base/connectionManager -L../../../out/$$\(CONFIGNAME\)/src/base -L../../../out/$$\(CONFIGNAME\)/src/modules -L../../../out/$$\(CONFIGNAME\)/tests/testUtils -L../../../out/$$\(CONFIGNAME\)/src/base -L../../../out/$$\(CONFIGNAME\)/src/modules -L../../../out/$$\(CONFIGNAME\)/tests/testUtils -lmiximbase -lmiximmodules -lmiximbase -lmiximmodules -lmiximtestUtils -KFLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2 -KMIXIM_PROJ=../../..
#

# Name of target to be created (-o option)
TARGET = libpowerTestUtils$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../../src/base/utils \
    -I../../../src/modules/power/battery \
    -I../../../src/base/modules \
    -I../../../src/base/phyLayer \
    -I../../../src/base/messages \
    -I../../../src/base/connectionManager \
    -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../../out/$(CONFIGNAME)/src/base -L../../../out/$(CONFIGNAME)/src/modules -L../../../out/$(CONFIGNAME)/tests/testUtils -L../../../out/$(CONFIGNAME)/src/base -L../../../out/$(CONFIGNAME)/src/modules -L../../../out/$(CONFIGNAME)/tests/testUtils  -lmiximbase -lmiximmodules -lmiximbase -lmiximmodules -lmiximtestUtils
LIBS += -Wl,-rpath,`abspath ../../../out/$(CONFIGNAME)/src/base` -Wl,-rpath,`abspath ../../../out/$(CONFIGNAME)/src/modules` -Wl,-rpath,`abspath ../../../out/$(CONFIGNAME)/tests/testUtils` -Wl,-rpath,`abspath ../../../out/$(CONFIGNAME)/src/base` -Wl,-rpath,`abspath ../../../out/$(CONFIGNAME)/src/modules` -Wl,-rpath,`abspath ../../../out/$(CONFIGNAME)/tests/testUtils`

# Output directory
PROJECT_OUTPUT_DIR = ../../../out
PROJECTRELATIVE_PATH = tests/power/utils
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = $O/DeviceDuty.o $O/Subscriber.o $O/DeviceDutySimple.o

# Message files
MSGFILES =

# Other makefile variables (-K)
FLOODINGHOVERING2_PROJ=/home/tapache/FloodingHovering2copy/FloodingHovering2
MIXIM_PROJ=../../..

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
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

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
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

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
	$(Q)-rm -f powerTestUtils powerTestUtils.exe libpowerTestUtils.so libpowerTestUtils.a libpowerTestUtils.dll libpowerTestUtils.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/DeviceDuty.o: DeviceDuty.cc \
	../../../src/base/modules/BaseBattery.h \
	../../../src/base/modules/BaseModule.h \
	../../../src/base/modules/BatteryAccess.h \
	../../../src/base/utils/HostState.h \
	../../../src/base/utils/MiXiMDefs.h \
	../../../src/base/utils/miximkerneldefs.h \
	../../../src/modules/power/battery/BatteryState.h \
	DeviceDuty.h
$O/DeviceDutySimple.o: DeviceDutySimple.cc \
	../../../src/base/modules/BaseBattery.h \
	../../../src/base/modules/BaseModule.h \
	../../../src/base/modules/BatteryAccess.h \
	../../../src/base/utils/HostState.h \
	../../../src/base/utils/MiXiMDefs.h \
	../../../src/base/utils/miximkerneldefs.h \
	../../../src/modules/power/battery/BatteryState.h \
	DeviceDutySimple.h
$O/Subscriber.o: Subscriber.cc \
	../../../src/base/modules/BaseModule.h \
	../../../src/base/utils/HostState.h \
	../../../src/base/utils/MiXiMDefs.h \
	../../../src/base/utils/miximkerneldefs.h \
	Subscriber.h

