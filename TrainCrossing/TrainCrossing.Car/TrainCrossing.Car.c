/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing.Car_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation TrainCrossing_Car_performSimulation
#define prefixedName_updateContinuousSystem TrainCrossing_Car_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation TrainCrossing_Car_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_Car_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[9] /* DistanceVec[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[10] /* DistanceVec[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[11] /* DistanceVec[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[12] /* Gate_Angle variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[14] /* LengthVec[1] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[15] /* LengthVec[2] variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[16] /* LengthVec[3] variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[17] /* Target variable */ = data->simulationInfo->inputVars[7];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[9].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[10].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[11].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[12].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[14].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[15].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[16].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[17].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[9].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[10].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[11].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[12].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[14].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[16].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[17].attribute.start = data->simulationInfo->inputVars[7];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[9].info.name;
  names[1] = (char *) data->modelData->realVarsData[10].info.name;
  names[2] = (char *) data->modelData->realVarsData[11].info.name;
  names[3] = (char *) data->modelData->realVarsData[12].info.name;
  names[4] = (char *) data->modelData->realVarsData[14].info.name;
  names[5] = (char *) data->modelData->realVarsData[15].info.name;
  names[6] = (char *) data->modelData->realVarsData[16].info.name;
  names[7] = (char *) data->modelData->integerVarsData[0].info.name;
  names[8] = (char *) data->modelData->realVarsData[17].info.name;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_Car_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[8] /* Distance variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[13] /* Length variable */;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 17
type: SIMPLE_ASSIGN
state = (*TrainCrossing.TrainLightColor*)(LightColor)
*/
void TrainCrossing_Car_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->integerVars[1] /* state DISCRETE */ = ((modelica_integer)data->localData[0]->integerVars[0] /* LightColor variable */);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
$whenCondition3 = distance < Target and state == TrainCrossing.TrainLightColor.on and Gate_Angle >= 90.0 and speed < maxSpeed
*/
void TrainCrossing_Car_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_boolean tmp0;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, 7, Less);
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[12] /* Gate_Angle variable */, 90.0, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, 9, Less);
  data->localData[0]->booleanVars[2] /* $whenCondition3 DISCRETE */ = (((tmp0 && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 1)) && tmp2) && tmp3);
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
$DER.acceleration = 0.0
*/
void TrainCrossing_Car_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[3] /* der(acceleration) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
$DER.distance = speed
*/
void TrainCrossing_Car_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[4] /* der(distance) STATE_DER */ = data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.speed = acceleration
*/
void TrainCrossing_Car_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[5] /* der(speed) STATE_DER */ = data->localData[0]->realVars[0] /* acceleration STATE(1) */;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
Distance = distance
*/
void TrainCrossing_Car_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[8] /* Distance variable */ = data->localData[0]->realVars[1] /* distance STATE(1,speed) */;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
Length = length
*/
void TrainCrossing_Car_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[13] /* Length variable */ = data->simulationInfo->realParameter[3] /* length PARAM */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
$whenCondition5 = isClumsy >= 1.0 and distance - Length <= Target and distance >= Target
*/
void TrainCrossing_Car_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  tmp4 = GreaterEq(data->simulationInfo->realParameter[2] /* isClumsy PARAM */,1.0);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[1] /* distance STATE(1,speed) */ - data->localData[0]->realVars[13] /* Length variable */, data->localData[0]->realVars[17] /* Target variable */, 2, LessEq);
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, 3, GreaterEq);
  data->localData[0]->booleanVars[4] /* $whenCondition5 DISCRETE */ = (tmp4 && (tmp5 && tmp6));
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
$whenCondition1 = speed >= maxSpeed
*/
void TrainCrossing_Car_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, 1, GreaterEq);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = tmp7;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
$whenCondition4 = speed <= 0.0
*/
void TrainCrossing_Car_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, 0, LessEq);
  data->localData[0]->booleanVars[3] /* $whenCondition4 DISCRETE */ = tmp8;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
$cse1 = TrainCrossing.Car.BreakCheck(3, distance, Target, DistanceVec, LengthVec)
*/
void TrainCrossing_Car_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp9;
  real_array tmp10;
  real_array_create(&tmp9, ((modelica_real*)&((&data->localData[0]->realVars[9] /* DistanceVec[1] variable */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  real_array_create(&tmp10, ((modelica_real*)&((&data->localData[0]->realVars[14] /* LengthVec[1] variable */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->realVars[6] /* $cse1 variable */ = omc_TrainCrossing_Car_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, tmp9, tmp10);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
BreakingDistance = 0.5 * (speed / breakingDeceleration) ^ 2.0 * breakingDeceleration + $cse1
*/
void TrainCrossing_Car_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_real tmp11;
  tmp11 = DIVISION_SIM(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */,"breakingDeceleration",equationIndexes);
  data->localData[0]->realVars[7] /* BreakingDistance variable */ = (0.5) * (((tmp11 * tmp11)) * (data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */)) + data->localData[0]->realVars[6] /* $cse1 variable */;
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
$whenCondition2 = distance + BreakingDistance + 5.0 >= Target and distance + BreakingDistance - 5.0 <= Target and speed > 0.0 and state == TrainCrossing.TrainLightColor.red
*/
void TrainCrossing_Car_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[17] /* Target variable */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[17] /* Target variable */, 5, LessEq);
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, 6, Greater);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (((tmp12 && tmp13) && tmp14) && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 2));
  TRACE_POP
}
/*
equation index: 34
type: WHEN

when {$whenCondition1} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainCrossing_Car_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 33
type: WHEN

when {$whenCondition2} then
  reinit(acceleration,  -breakingDeceleration);
end when;
*/
void TrainCrossing_Car_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = (-data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 32
type: WHEN

when {$whenCondition3} then
  reinit(acceleration,  maxAcceleration);
end when;
*/
void TrainCrossing_Car_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  if((data->localData[0]->booleanVars[2] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->simulationInfo->realParameter[4] /* maxAcceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 31
type: WHEN

when {$whenCondition4} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainCrossing_Car_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  if((data->localData[0]->booleanVars[3] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 30
type: WHEN

when {$whenCondition5} then
  reinit(acceleration,  -100.0);
end when;
*/
void TrainCrossing_Car_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  if((data->localData[0]->booleanVars[4] /* $whenCondition5 DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* $whenCondition5 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = -100.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_Car_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Car_functionLocalKnownVars(data, threadData);
  TrainCrossing_Car_eqFunction_17(data, threadData);

  TrainCrossing_Car_eqFunction_18(data, threadData);

  TrainCrossing_Car_eqFunction_19(data, threadData);

  TrainCrossing_Car_eqFunction_20(data, threadData);

  TrainCrossing_Car_eqFunction_21(data, threadData);

  TrainCrossing_Car_eqFunction_22(data, threadData);

  TrainCrossing_Car_eqFunction_23(data, threadData);

  TrainCrossing_Car_eqFunction_24(data, threadData);

  TrainCrossing_Car_eqFunction_25(data, threadData);

  TrainCrossing_Car_eqFunction_26(data, threadData);

  TrainCrossing_Car_eqFunction_27(data, threadData);

  TrainCrossing_Car_eqFunction_28(data, threadData);

  TrainCrossing_Car_eqFunction_29(data, threadData);

  TrainCrossing_Car_eqFunction_34(data, threadData);

  TrainCrossing_Car_eqFunction_33(data, threadData);

  TrainCrossing_Car_eqFunction_32(data, threadData);

  TrainCrossing_Car_eqFunction_31(data, threadData);

  TrainCrossing_Car_eqFunction_30(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_Car_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TrainCrossing_Car_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_21(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Car_eqFunction_19(data, threadData);

    TrainCrossing_Car_eqFunction_20(data, threadData);

    TrainCrossing_Car_eqFunction_21(data, threadData);
}

int TrainCrossing_Car_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_Car_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing.Car_12jac.h"
#include "TrainCrossing.Car_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_Car_callback = {
   (int (*)(DATA *, threadData_t *, void *)) TrainCrossing_Car_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) TrainCrossing_Car_performQSSSimulation,
   TrainCrossing_Car_updateContinuousSystem,
   TrainCrossing_Car_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_Car_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_Car_initializeDAEmodeData,
   TrainCrossing_Car_functionODE,
   TrainCrossing_Car_functionAlgebraics,
   TrainCrossing_Car_functionDAE,
   TrainCrossing_Car_functionLocalKnownVars,
   TrainCrossing_Car_input_function,
   TrainCrossing_Car_input_function_init,
   TrainCrossing_Car_input_function_updateStartValues,
   TrainCrossing_Car_data_function,
   TrainCrossing_Car_output_function,
   TrainCrossing_Car_setc_function,
   TrainCrossing_Car_function_storeDelayed,
   TrainCrossing_Car_updateBoundVariableAttributes,
   TrainCrossing_Car_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_Car_functionInitialEquations_lambda0,
   TrainCrossing_Car_functionRemovedInitialEquations,
   TrainCrossing_Car_updateBoundParameters,
   TrainCrossing_Car_checkForAsserts,
   TrainCrossing_Car_function_ZeroCrossingsEquations,
   TrainCrossing_Car_function_ZeroCrossings,
   TrainCrossing_Car_function_updateRelations,
   TrainCrossing_Car_zeroCrossingDescription,
   TrainCrossing_Car_relationDescription,
   TrainCrossing_Car_function_initSample,
   TrainCrossing_Car_INDEX_JAC_A,
   TrainCrossing_Car_INDEX_JAC_B,
   TrainCrossing_Car_INDEX_JAC_C,
   TrainCrossing_Car_INDEX_JAC_D,
   TrainCrossing_Car_INDEX_JAC_F,
   TrainCrossing_Car_initialAnalyticJacobianA,
   TrainCrossing_Car_initialAnalyticJacobianB,
   TrainCrossing_Car_initialAnalyticJacobianC,
   TrainCrossing_Car_initialAnalyticJacobianD,
   TrainCrossing_Car_initialAnalyticJacobianF,
   TrainCrossing_Car_functionJacA_column,
   TrainCrossing_Car_functionJacB_column,
   TrainCrossing_Car_functionJacC_column,
   TrainCrossing_Car_functionJacD_column,
   TrainCrossing_Car_functionJacF_column,
   TrainCrossing_Car_linear_model_frame,
   TrainCrossing_Car_linear_model_datarecovery_frame,
   TrainCrossing_Car_mayer,
   TrainCrossing_Car_lagrange,
   TrainCrossing_Car_pickUpBoundsForInputsInOptimization,
   TrainCrossing_Car_setInputData,
   TrainCrossing_Car_getTimeGrid,
   TrainCrossing_Car_symbolicInlineSystem,
   TrainCrossing_Car_function_initSynchronous,
   TrainCrossing_Car_function_updateSynchronous,
   TrainCrossing_Car_function_equationsSynchronous,
   TrainCrossing_Car_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "E:/Modelica/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,25,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "E:/Modelica/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,40,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_2_dir_data "E:/Modelica/lib/omlibrary/ModelicaReference"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,17,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,43,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "E:/Modelica/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,48,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "TrainCrossing"
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainCrossing_Car_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_Car_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.Car";
  data->modelData->modelFilePrefix = "TrainCrossing.Car";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.2";
  data->modelData->modelGUID = "{924ce0bc-9213-4158-9413-fc4181424918}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "TrainCrossing.Car_init.c"
    ;
  static const char contents_info[] =
    #include "TrainCrossing.Car_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "TrainCrossing.Car_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "TrainCrossing.Car_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 3;
  data->modelData->nVariablesReal = 19;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 2;
  data->modelData->nVariablesBoolean = 5;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 6;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 9;
  data->modelData->nOutputVars = 2;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 5;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 10;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "TrainCrossing.Car_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 40;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    TrainCrossing_Car_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


