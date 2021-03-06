# Makefile generated by OpenModelica
# Platform: win64

# Simulations use -O3 by default
CC=gcc
CXX=g++
LINK=g++ -shared -Xlinker --export-all-symbols -fPIC
EXEEXT=.exe
DLLEXT=.dll
CFLAGS_BASED_ON_INIT_FILE=
DEBUG_FLAGS=-Os
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) $(DEBUG_FLAGS) -falign-functions -fno-ipa-pure-const -mstackrealign -msse2 -mfpmath=sse ${MODELICAUSERCFLAGS}   
CPPFLAGS= -I"E:/Modelica//include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=TrainCrossing_Car -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=0 -DOMC_NUM_NONLINEAR_SYSTEMS=0 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"E:/Modelica//lib//omc" -L"E:/Modelica//lib" -Wl,--stack,16777216,-rpath,"E:/Modelica//lib//omc" -Wl,-rpath,"E:/Modelica//lib"   -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lomcgc -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -Wl,-Bstatic -lSimulationRuntimeC -Wl,-Bdynamic -Wl,-Bstatic -lomcgc -lregex -ltre -lintl -liconv -lexpat -static-libgcc -luuid -loleaut32 -lole32 -limagehlp -lws2_32 -llis -lumfpack -lklu -lcolamd -lbtf -lamd  -lsundials_idas -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -lopenblas -lcminpack -Wl,-Bdynamic -lwsock32 -Wl,-Bstatic -lstdc++ -Wl,-Bdynamic 
DIREXTRA=-L"E:/Onlab/TrainCrossing2.2"
MAINFILE=TrainCrossing.Car.c
MAINOBJ=TrainCrossing.Car.o
CFILES=TrainCrossing.Car_functions.c TrainCrossing.Car_records.c \
TrainCrossing.Car_01exo.c TrainCrossing.Car_02nls.c TrainCrossing.Car_03lsy.c TrainCrossing.Car_04set.c TrainCrossing.Car_05evt.c TrainCrossing.Car_06inz.c TrainCrossing.Car_07dly.c \
TrainCrossing.Car_08bnd.c TrainCrossing.Car_09alg.c TrainCrossing.Car_10asr.c TrainCrossing.Car_11mix.c TrainCrossing.Car_12jac.c TrainCrossing.Car_13opt.c TrainCrossing.Car_14lnz.c \
TrainCrossing.Car_15syn.c TrainCrossing.Car_16dae.c TrainCrossing.Car_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) TrainCrossing.Car.makefile TrainCrossing.Car_literals.h TrainCrossing.Car_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that TrainCrossing.Car_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) TrainCrossing.Car_functions.h TrainCrossing.Car_literals.h $(OFILES)
	$(CC) -I. -o TrainCrossing.Car$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)   $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f TrainCrossing.Car_records.o $(MAINOBJ)

bundle:
	@tar -cvf TrainCrossing.Car_Files.tar $(GENERATEDFILES)