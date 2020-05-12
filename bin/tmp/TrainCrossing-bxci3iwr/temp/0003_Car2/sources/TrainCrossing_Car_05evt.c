/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing_Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_Car_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_Car_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"speed <= 0.0",
  "distance < Target and state == TrainCrossing.TrainLightColor.on and Gate_Angle >= 90.0 and speed < maxSpeed",
  "distance + BreakingDistance + 5.0 >= Target and distance + BreakingDistance - 5.0 <= Target and speed > 0.0 and state == TrainCrossing.TrainLightColor.red",
  "speed >= maxSpeed"};
  static const int occurEqs0[] = {1,15};
  static const int occurEqs1[] = {1,21};
  static const int occurEqs2[] = {1,22};
  static const int occurEqs3[] = {1,14};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainCrossing_Car_eqFunction_13(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_16(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_17(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_18(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_20(DATA* data, threadData_t *threadData);

int TrainCrossing_Car_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainCrossing_Car_eqFunction_13(data, threadData);

  TrainCrossing_Car_eqFunction_16(data, threadData);

  TrainCrossing_Car_eqFunction_17(data, threadData);

  TrainCrossing_Car_eqFunction_18(data, threadData);

  TrainCrossing_Car_eqFunction_19(data, threadData);

  TrainCrossing_Car_eqFunction_20(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp9;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = LessZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[15] /* Target variable */, data->simulationInfo->storedRelations[1]);
  tmp3 = GreaterEqZC(data->localData[0]->realVars[11] /* Gate_Angle variable */, 90.0, data->simulationInfo->storedRelations[2]);
  tmp4 = LessZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[4] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((((tmp1 && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 1)) && tmp3) && tmp4)) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[15] /* Target variable */, data->simulationInfo->storedRelations[4]);
  tmp6 = LessEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[15] /* Target variable */, data->simulationInfo->storedRelations[5]);
  tmp7 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[6]);
  gout[2] = ((((tmp5 && tmp6) && tmp7) && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 2))) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[4] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[7]);
  gout[3] = (tmp9) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_Car_relationDescription(int i)
{
  const char *res[] = {"speed <= 0.0",
  "distance < Target",
  "Gate_Angle >= 90.0",
  "speed < maxSpeed",
  "distance + BreakingDistance + 5.0 >= Target",
  "distance + BreakingDistance - 5.0 <= Target",
  "speed > 0.0",
  "speed >= maxSpeed"};
  return res[i];
}

int TrainCrossing_Car_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  
  if(evalforZeroCross) {
    tmp10 = LessEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp10;
    tmp11 = LessZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[15] /* Target variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp11;
    tmp12 = GreaterEqZC(data->localData[0]->realVars[11] /* Gate_Angle variable */, 90.0, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp12;
    tmp13 = LessZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[4] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp13;
    tmp14 = GreaterEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[15] /* Target variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp14;
    tmp15 = LessEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[15] /* Target variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp15;
    tmp16 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp16;
    tmp17 = GreaterEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[4] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp17;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ <= 0.0);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ < data->localData[0]->realVars[15] /* Target variable */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[11] /* Gate_Angle variable */ >= 90.0);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ < data->simulationInfo->realParameter[4] /* maxSpeed PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0 >= data->localData[0]->realVars[15] /* Target variable */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0 <= data->localData[0]->realVars[15] /* Target variable */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ > 0.0);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ >= data->simulationInfo->realParameter[4] /* maxSpeed PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

