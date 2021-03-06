/* Simulation code for TrainCrossing.Car generated by the OpenModelica Compiler OpenModelica v1.15.0-dev-22-g5aea5c3aa6 (64-bit). */
#if !defined(TrainCrossing_Car__MODEL_H)
#define TrainCrossing_Car__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "util/parallel_helper.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "TrainCrossing_Car_functions.h"

#define TrainCrossing_Car_BreakCheck_index 0

extern void TrainCrossing_Car_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void TrainCrossing_Car_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int TrainCrossing_Car_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_checkForAsserts(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int TrainCrossing_Car_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* TrainCrossing_Car_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* TrainCrossing_Car_relationDescription(int i);
extern void TrainCrossing_Car_function_initSample(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainCrossing_Car_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainCrossing_Car_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainCrossing_Car_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainCrossing_Car_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainCrossing_Car_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainCrossing_Car_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainCrossing_Car_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainCrossing_Car_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainCrossing_Car_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainCrossing_Car_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainCrossing_Car_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* TrainCrossing_Car_linear_model_frame(void);
extern const char* TrainCrossing_Car_linear_model_datarecovery_frame(void);
extern int TrainCrossing_Car_mayer(DATA* data, modelica_real** res, short *);
extern int TrainCrossing_Car_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int TrainCrossing_Car_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int TrainCrossing_Car_setInputData(DATA *data, const modelica_boolean file);
extern int TrainCrossing_Car_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void TrainCrossing_Car_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void TrainCrossing_Car_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int TrainCrossing_Car_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void TrainCrossing_Car_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void TrainCrossing_Car_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int TrainCrossing_Car_inputNames(DATA* data, char ** names);
extern int TrainCrossing_Car_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int TrainCrossing_Car_functionLocalKnownVars(DATA*, threadData_t*);
extern int TrainCrossing_Car_symbolicInlineSystem(DATA*, threadData_t*);

#include "TrainCrossing_Car_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(TrainCrossing_Car__MODEL_H) */


