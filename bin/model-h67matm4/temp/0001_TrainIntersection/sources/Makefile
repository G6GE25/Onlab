# Makefile generated by OpenModelica
CC=gcc
AR=@AR@
CFLAGS=-Os -falign-functions -fno-ipa-pure-const -mstackrealign -msse2 -mfpmath=sse 
LD=$(CC) -shared
LDFLAGS=-L"E:/Modelica//lib//omc" -Wl,-rpath,"E:/Modelica//lib//omc" -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lomcgc -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -lSimulationRuntimeFMI  -Wl,-Bstatic -lregex -ltre -lintl -liconv -static-libgcc -lpthread -lm -lgfortranbegin -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -limagehlp -lopenblas -lhdf5 -lz -lszip -Wl,-Bdynamic 
DLLEXT=.dll
NEED_RUNTIME=
NEED_DGESV=
FMIPLATFORM=win64
# Note: Simulation of the fmu with dymola does not work with -finline-small-functions (enabled by most optimization levels)
CPPFLAGS=-DOMC_MINIMAL_RUNTIME=1 -DCMINPACK_NO_DLL=1 -I"E:/Modelica//include/omc/c/fmi"

override CPPFLAGS += 

CFILES=TrainCrossing_TrainIntersection.c TrainCrossing_TrainIntersection_functions.c TrainCrossing_TrainIntersection_records.c TrainCrossing_TrainIntersection_01exo.c TrainCrossing_TrainIntersection_02nls.c TrainCrossing_TrainIntersection_03lsy.c TrainCrossing_TrainIntersection_04set.c TrainCrossing_TrainIntersection_05evt.c TrainCrossing_TrainIntersection_06inz.c TrainCrossing_TrainIntersection_07dly.c TrainCrossing_TrainIntersection_08bnd.c TrainCrossing_TrainIntersection_09alg.c TrainCrossing_TrainIntersection_10asr.c TrainCrossing_TrainIntersection_11mix.c TrainCrossing_TrainIntersection_12jac.c TrainCrossing_TrainIntersection_13opt.c TrainCrossing_TrainIntersection_14lnz.c TrainCrossing_TrainIntersection_15syn.c TrainCrossing_TrainIntersection_16dae.c TrainCrossing_TrainIntersection_17inl.c TrainCrossing_TrainIntersection_init_fmu.c TrainCrossing_TrainIntersection_FMU.c
OFILES=$(CFILES:.c=.o)

RUNTIMEDIR=.
ifneq ($(NEED_DGESV),)
DGESV_OBJS = 
endif
ifneq ($(NEED_RUNTIME),)
RUNTIMEFILES=./util/read_matlab4.o ./util/read_csv.o ./util/libcsv.o gc/memory_pool.o gc/omc_gc.o ./util/base_array.o ./util/boolean_array.o ./util/omc_error.o ./util/omc_file.o ./util/division.o ./util/generic_array.o ./util/index_spec.o ./util/integer_array.o ./util/list.o ./util/modelica_string.o ./util/real_array.o ./util/ringbuffer.o ./util/string_array.o ./util/utility.o ./util/varinfo.o ./util/ModelicaUtilities.o ./util/omc_msvc.o ./util/parallel_helper.o ./util/simulation_options.o ./util/rational.o ./util/modelica_string_lit.o ./util/omc_init.o ./util/omc_mmap.o ./util/jacobian_util.o ./math-support/pivot.o ./simulation/simulation_info_json.o ./simulation/options.o ./simulation/simulation_omc_assert.o ./simulation/omc_simulation_util.o ./simulation/solver/delay.o ./simulation/solver/fmi_events.o ./simulation/solver/omc_math.o ./simulation/solver/model_help.o ./simulation/solver/stateset.o ./simulation/solver/synchronous.o ./simulation/solver/initialization/initialization.o ./meta/meta_modelica_catch.o $(DGESV_OBJS)
endif

PHONY: TrainCrossing_TrainIntersection_FMU
TrainCrossing_TrainIntersection_FMU: nozip
	cd .. && rm -f ../TrainCrossing_TrainIntersection.fmu && zip -r ../TrainCrossing.TrainIntersection.fmu *
nozip: TrainCrossing_TrainIntersection_functions.h TrainCrossing_TrainIntersection_literals.h $(OFILES) $(RUNTIMEFILES)
	$(CXX) -shared -I. -o TrainCrossing_TrainIntersection$(DLLEXT) $(RUNTIMEFILES) $(OFILES) $(CPPFLAGS) -L"E:/Onlab/TrainCrossing2.0"   $(CFLAGS) $(LDFLAGS) -llis -Wl,--kill-at
	mkdir.exe -p ../binaries/win64
	dlltool -d TrainCrossing_TrainIntersection.def --dllname TrainCrossing_TrainIntersection$(DLLEXT) --output-lib TrainCrossing_TrainIntersection.lib --kill-at
	cp TrainCrossing_TrainIntersection$(DLLEXT) TrainCrossing_TrainIntersection.lib TrainCrossing_TrainIntersection_FMU.libs ../binaries/win64/
	rm -f *.o TrainCrossing_TrainIntersection$(DLLEXT) $(OFILES) $(RUNTIMEFILES)
	cd .. && rm -f ../TrainCrossing_TrainIntersection.fmu && zip -r ../TrainCrossing.TrainIntersection.fmu *

