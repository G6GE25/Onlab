#ifndef TrainCrossing_TrainIntersection__H
#define TrainCrossing_TrainIntersection__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_boolean omc_Modelica_StateGraph_Temporary_anyTrue(threadData_t *threadData, boolean_array _b);
DLLExport
modelica_metatype boxptr_Modelica_StateGraph_Temporary_anyTrue(threadData_t *threadData, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_StateGraph_Temporary_anyTrue,2,0) {(void*) boxptr_Modelica_StateGraph_Temporary_anyTrue,0}};
#define boxvar_Modelica_StateGraph_Temporary_anyTrue MMC_REFSTRUCTLIT(boxvar_lit_Modelica_StateGraph_Temporary_anyTrue)


DLLExport
modelica_real omc_TrainCrossing_TrainIntersection_car_BreakCheck(threadData_t *threadData, modelica_integer _size, modelica_real _ThisCarDistance, modelica_real _Target, real_array _CarDistance, real_array _CarLength);
DLLExport
modelica_metatype boxptr_TrainCrossing_TrainIntersection_car_BreakCheck(threadData_t *threadData, modelica_metatype _size, modelica_metatype _ThisCarDistance, modelica_metatype _Target, modelica_metatype _CarDistance, modelica_metatype _CarLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_car_BreakCheck,2,0) {(void*) boxptr_TrainCrossing_TrainIntersection_car_BreakCheck,0}};
#define boxvar_TrainCrossing_TrainIntersection_car_BreakCheck MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_car_BreakCheck)


DLLExport
modelica_real omc_TrainCrossing_TrainIntersection_car1_BreakCheck(threadData_t *threadData, modelica_integer _size, modelica_real _ThisCarDistance, modelica_real _Target, real_array _CarDistance, real_array _CarLength);
DLLExport
modelica_metatype boxptr_TrainCrossing_TrainIntersection_car1_BreakCheck(threadData_t *threadData, modelica_metatype _size, modelica_metatype _ThisCarDistance, modelica_metatype _Target, modelica_metatype _CarDistance, modelica_metatype _CarLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_car1_BreakCheck,2,0) {(void*) boxptr_TrainCrossing_TrainIntersection_car1_BreakCheck,0}};
#define boxvar_TrainCrossing_TrainIntersection_car1_BreakCheck MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_car1_BreakCheck)


DLLExport
modelica_real omc_TrainCrossing_TrainIntersection_car2_BreakCheck(threadData_t *threadData, modelica_integer _size, modelica_real _ThisCarDistance, modelica_real _Target, real_array _CarDistance, real_array _CarLength);
DLLExport
modelica_metatype boxptr_TrainCrossing_TrainIntersection_car2_BreakCheck(threadData_t *threadData, modelica_metatype _size, modelica_metatype _ThisCarDistance, modelica_metatype _Target, modelica_metatype _CarDistance, modelica_metatype _CarLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_car2_BreakCheck,2,0) {(void*) boxptr_TrainCrossing_TrainIntersection_car2_BreakCheck,0}};
#define boxvar_TrainCrossing_TrainIntersection_car2_BreakCheck MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_car2_BreakCheck)


DLLExport
modelica_boolean omc_TrainCrossing_TrainIntersection_sensors_Active(threadData_t *threadData, modelica_integer _size, boolean_array _Train_Detected);
DLLExport
modelica_metatype boxptr_TrainCrossing_TrainIntersection_sensors_Active(threadData_t *threadData, modelica_metatype _size, modelica_metatype _Train_Detected);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_sensors_Active,2,0) {(void*) boxptr_TrainCrossing_TrainIntersection_sensors_Active,0}};
#define boxvar_TrainCrossing_TrainIntersection_sensors_Active MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_TrainIntersection_sensors_Active)
#include "TrainCrossing_TrainIntersection_model.h"


#ifdef __cplusplus
}
#endif
#endif

