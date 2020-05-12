#include "simulation_data.h"

OMC_DISABLE_OPT
void TrainCrossing_Car_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
{
  simulationInfo->startTime = 0.0;
  simulationInfo->stopTime = 1.0;
  simulationInfo->stepSize = 0.002;
  simulationInfo->tolerance = 1e-006;
  simulationInfo->solverMethod = "dassl";
  simulationInfo->outputFormat = "mat";
  simulationInfo->variableFilter = ".*";
  simulationInfo->OPENMODELICAHOME = "E:/Modelica/";
  modelData->realVarsData[0].info.id = 1000;
  modelData->realVarsData[0].info.name = "acceleration";
  modelData->realVarsData[0].info.comment = "";
  modelData->realVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[0].info.info.lineStart = 22;
  modelData->realVarsData[0].info.info.colStart = 5;
  modelData->realVarsData[0].info.info.lineEnd = 22;
  modelData->realVarsData[0].info.info.colEnd = 33;
  modelData->realVarsData[0].info.info.readonly = 0;
  modelData->realVarsData[0].attribute.unit = "";
  modelData->realVarsData[0].attribute.displayUnit = "";
  modelData->realVarsData[0].attribute.min = -DBL_MAX;
  modelData->realVarsData[0].attribute.max = DBL_MAX;
  modelData->realVarsData[0].attribute.fixed = 0;
  modelData->realVarsData[0].attribute.useNominal = 0;
  modelData->realVarsData[0].attribute.nominal = 1.0;
  modelData->realVarsData[0].attribute.start = 0.0;
  modelData->realVarsData[1].info.id = 1001;
  modelData->realVarsData[1].info.name = "distance";
  modelData->realVarsData[1].info.comment = "";
  modelData->realVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[1].info.info.lineStart = 20;
  modelData->realVarsData[1].info.info.colStart = 5;
  modelData->realVarsData[1].info.info.lineEnd = 20;
  modelData->realVarsData[1].info.info.colEnd = 39;
  modelData->realVarsData[1].info.info.readonly = 0;
  modelData->realVarsData[1].attribute.unit = "";
  modelData->realVarsData[1].attribute.displayUnit = "";
  modelData->realVarsData[1].attribute.min = -DBL_MAX;
  modelData->realVarsData[1].attribute.max = DBL_MAX;
  modelData->realVarsData[1].attribute.fixed = 0;
  modelData->realVarsData[1].attribute.useNominal = 0;
  modelData->realVarsData[1].attribute.nominal = 1.0;
  modelData->realVarsData[1].attribute.start = 0.0;
  modelData->realVarsData[2].info.id = 1002;
  modelData->realVarsData[2].info.name = "speed";
  modelData->realVarsData[2].info.comment = "";
  modelData->realVarsData[2].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[2].info.info.lineStart = 21;
  modelData->realVarsData[2].info.info.colStart = 5;
  modelData->realVarsData[2].info.info.lineEnd = 21;
  modelData->realVarsData[2].info.info.colEnd = 31;
  modelData->realVarsData[2].info.info.readonly = 0;
  modelData->realVarsData[2].attribute.unit = "";
  modelData->realVarsData[2].attribute.displayUnit = "";
  modelData->realVarsData[2].attribute.min = -DBL_MAX;
  modelData->realVarsData[2].attribute.max = DBL_MAX;
  modelData->realVarsData[2].attribute.fixed = 0;
  modelData->realVarsData[2].attribute.useNominal = 0;
  modelData->realVarsData[2].attribute.nominal = 1.0;
  modelData->realVarsData[2].attribute.start = 0.0;
  modelData->realVarsData[3].info.id = 1003;
  modelData->realVarsData[3].info.name = "der(acceleration)";
  modelData->realVarsData[3].info.comment = "";
  modelData->realVarsData[3].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[3].info.info.lineStart = 22;
  modelData->realVarsData[3].info.info.colStart = 5;
  modelData->realVarsData[3].info.info.lineEnd = 22;
  modelData->realVarsData[3].info.info.colEnd = 33;
  modelData->realVarsData[3].info.info.readonly = 0;
  modelData->realVarsData[3].attribute.unit = "";
  modelData->realVarsData[3].attribute.displayUnit = "";
  modelData->realVarsData[3].attribute.min = -DBL_MAX;
  modelData->realVarsData[3].attribute.max = DBL_MAX;
  modelData->realVarsData[3].attribute.fixed = 0;
  modelData->realVarsData[3].attribute.useNominal = 0;
  modelData->realVarsData[3].attribute.nominal = 1.0;
  modelData->realVarsData[3].attribute.start = 0.0;
  modelData->realVarsData[4].info.id = 1004;
  modelData->realVarsData[4].info.name = "der(distance)";
  modelData->realVarsData[4].info.comment = "";
  modelData->realVarsData[4].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[4].info.info.lineStart = 20;
  modelData->realVarsData[4].info.info.colStart = 5;
  modelData->realVarsData[4].info.info.lineEnd = 20;
  modelData->realVarsData[4].info.info.colEnd = 39;
  modelData->realVarsData[4].info.info.readonly = 0;
  modelData->realVarsData[4].attribute.unit = "";
  modelData->realVarsData[4].attribute.displayUnit = "";
  modelData->realVarsData[4].attribute.min = -DBL_MAX;
  modelData->realVarsData[4].attribute.max = DBL_MAX;
  modelData->realVarsData[4].attribute.fixed = 0;
  modelData->realVarsData[4].attribute.useNominal = 0;
  modelData->realVarsData[4].attribute.nominal = 1.0;
  modelData->realVarsData[4].attribute.start = 0.0;
  modelData->realVarsData[5].info.id = 1005;
  modelData->realVarsData[5].info.name = "der(speed)";
  modelData->realVarsData[5].info.comment = "";
  modelData->realVarsData[5].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[5].info.info.lineStart = 21;
  modelData->realVarsData[5].info.info.colStart = 5;
  modelData->realVarsData[5].info.info.lineEnd = 21;
  modelData->realVarsData[5].info.info.colEnd = 31;
  modelData->realVarsData[5].info.info.readonly = 0;
  modelData->realVarsData[5].attribute.unit = "";
  modelData->realVarsData[5].attribute.displayUnit = "";
  modelData->realVarsData[5].attribute.min = -DBL_MAX;
  modelData->realVarsData[5].attribute.max = DBL_MAX;
  modelData->realVarsData[5].attribute.fixed = 0;
  modelData->realVarsData[5].attribute.useNominal = 0;
  modelData->realVarsData[5].attribute.nominal = 1.0;
  modelData->realVarsData[5].attribute.start = 0.0;
  modelData->realVarsData[6].info.id = 1006;
  modelData->realVarsData[6].info.name = "$cse1";
  modelData->realVarsData[6].info.comment = "";
  modelData->realVarsData[6].info.info.filename = "";
  modelData->realVarsData[6].info.info.lineStart = 0;
  modelData->realVarsData[6].info.info.colStart = 0;
  modelData->realVarsData[6].info.info.lineEnd = 0;
  modelData->realVarsData[6].info.info.colEnd = 0;
  modelData->realVarsData[6].info.info.readonly = 0;
  modelData->realVarsData[6].attribute.unit = "";
  modelData->realVarsData[6].attribute.displayUnit = "";
  modelData->realVarsData[6].attribute.min = -DBL_MAX;
  modelData->realVarsData[6].attribute.max = DBL_MAX;
  modelData->realVarsData[6].attribute.fixed = 0;
  modelData->realVarsData[6].attribute.useNominal = 0;
  modelData->realVarsData[6].attribute.nominal = 1.0;
  modelData->realVarsData[6].attribute.start = 0.0;
  modelData->realVarsData[7].info.id = 1007;
  modelData->realVarsData[7].info.name = "BreakingDistance";
  modelData->realVarsData[7].info.comment = "";
  modelData->realVarsData[7].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[7].info.info.lineStart = 19;
  modelData->realVarsData[7].info.info.colStart = 5;
  modelData->realVarsData[7].info.info.lineEnd = 19;
  modelData->realVarsData[7].info.info.colEnd = 26;
  modelData->realVarsData[7].info.info.readonly = 0;
  modelData->realVarsData[7].attribute.unit = "";
  modelData->realVarsData[7].attribute.displayUnit = "";
  modelData->realVarsData[7].attribute.min = -DBL_MAX;
  modelData->realVarsData[7].attribute.max = DBL_MAX;
  modelData->realVarsData[7].attribute.fixed = 0;
  modelData->realVarsData[7].attribute.useNominal = 0;
  modelData->realVarsData[7].attribute.nominal = 1.0;
  modelData->realVarsData[7].attribute.start = 0.0;
  modelData->realVarsData[8].info.id = 1008;
  modelData->realVarsData[8].info.name = "DistanceVec[1]";
  modelData->realVarsData[8].info.comment = "";
  modelData->realVarsData[8].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[8].info.info.lineStart = 7;
  modelData->realVarsData[8].info.info.colStart = 5;
  modelData->realVarsData[8].info.info.lineEnd = 7;
  modelData->realVarsData[8].info.info.colEnd = 65;
  modelData->realVarsData[8].info.info.readonly = 0;
  modelData->realVarsData[8].attribute.unit = "";
  modelData->realVarsData[8].attribute.displayUnit = "";
  modelData->realVarsData[8].attribute.min = -DBL_MAX;
  modelData->realVarsData[8].attribute.max = DBL_MAX;
  modelData->realVarsData[8].attribute.fixed = 1;
  modelData->realVarsData[8].attribute.useNominal = 0;
  modelData->realVarsData[8].attribute.nominal = 1.0;
  modelData->realVarsData[8].attribute.start = 0.0;
  modelData->realVarsData[9].info.id = 1009;
  modelData->realVarsData[9].info.name = "DistanceVec[2]";
  modelData->realVarsData[9].info.comment = "";
  modelData->realVarsData[9].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[9].info.info.lineStart = 7;
  modelData->realVarsData[9].info.info.colStart = 5;
  modelData->realVarsData[9].info.info.lineEnd = 7;
  modelData->realVarsData[9].info.info.colEnd = 65;
  modelData->realVarsData[9].info.info.readonly = 0;
  modelData->realVarsData[9].attribute.unit = "";
  modelData->realVarsData[9].attribute.displayUnit = "";
  modelData->realVarsData[9].attribute.min = -DBL_MAX;
  modelData->realVarsData[9].attribute.max = DBL_MAX;
  modelData->realVarsData[9].attribute.fixed = 1;
  modelData->realVarsData[9].attribute.useNominal = 0;
  modelData->realVarsData[9].attribute.nominal = 1.0;
  modelData->realVarsData[9].attribute.start = 0.0;
  modelData->realVarsData[10].info.id = 1010;
  modelData->realVarsData[10].info.name = "DistanceVec[3]";
  modelData->realVarsData[10].info.comment = "";
  modelData->realVarsData[10].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[10].info.info.lineStart = 7;
  modelData->realVarsData[10].info.info.colStart = 5;
  modelData->realVarsData[10].info.info.lineEnd = 7;
  modelData->realVarsData[10].info.info.colEnd = 65;
  modelData->realVarsData[10].info.info.readonly = 0;
  modelData->realVarsData[10].attribute.unit = "";
  modelData->realVarsData[10].attribute.displayUnit = "";
  modelData->realVarsData[10].attribute.min = -DBL_MAX;
  modelData->realVarsData[10].attribute.max = DBL_MAX;
  modelData->realVarsData[10].attribute.fixed = 1;
  modelData->realVarsData[10].attribute.useNominal = 0;
  modelData->realVarsData[10].attribute.nominal = 1.0;
  modelData->realVarsData[10].attribute.start = 0.0;
  modelData->realVarsData[11].info.id = 1011;
  modelData->realVarsData[11].info.name = "Gate_Angle";
  modelData->realVarsData[11].info.comment = "";
  modelData->realVarsData[11].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[11].info.info.lineStart = 4;
  modelData->realVarsData[11].info.info.colStart = 5;
  modelData->realVarsData[11].info.info.lineEnd = 4;
  modelData->realVarsData[11].info.info.colEnd = 52;
  modelData->realVarsData[11].info.info.readonly = 0;
  modelData->realVarsData[11].attribute.unit = "";
  modelData->realVarsData[11].attribute.displayUnit = "";
  modelData->realVarsData[11].attribute.min = -DBL_MAX;
  modelData->realVarsData[11].attribute.max = DBL_MAX;
  modelData->realVarsData[11].attribute.fixed = 1;
  modelData->realVarsData[11].attribute.useNominal = 0;
  modelData->realVarsData[11].attribute.nominal = 1.0;
  modelData->realVarsData[11].attribute.start = 0.0;
  modelData->realVarsData[12].info.id = 1012;
  modelData->realVarsData[12].info.name = "LengthVec[1]";
  modelData->realVarsData[12].info.comment = "";
  modelData->realVarsData[12].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[12].info.info.lineStart = 6;
  modelData->realVarsData[12].info.info.colStart = 5;
  modelData->realVarsData[12].info.info.lineEnd = 6;
  modelData->realVarsData[12].info.info.colEnd = 63;
  modelData->realVarsData[12].info.info.readonly = 0;
  modelData->realVarsData[12].attribute.unit = "";
  modelData->realVarsData[12].attribute.displayUnit = "";
  modelData->realVarsData[12].attribute.min = -DBL_MAX;
  modelData->realVarsData[12].attribute.max = DBL_MAX;
  modelData->realVarsData[12].attribute.fixed = 1;
  modelData->realVarsData[12].attribute.useNominal = 0;
  modelData->realVarsData[12].attribute.nominal = 1.0;
  modelData->realVarsData[12].attribute.start = 0.0;
  modelData->realVarsData[13].info.id = 1013;
  modelData->realVarsData[13].info.name = "LengthVec[2]";
  modelData->realVarsData[13].info.comment = "";
  modelData->realVarsData[13].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[13].info.info.lineStart = 6;
  modelData->realVarsData[13].info.info.colStart = 5;
  modelData->realVarsData[13].info.info.lineEnd = 6;
  modelData->realVarsData[13].info.info.colEnd = 63;
  modelData->realVarsData[13].info.info.readonly = 0;
  modelData->realVarsData[13].attribute.unit = "";
  modelData->realVarsData[13].attribute.displayUnit = "";
  modelData->realVarsData[13].attribute.min = -DBL_MAX;
  modelData->realVarsData[13].attribute.max = DBL_MAX;
  modelData->realVarsData[13].attribute.fixed = 1;
  modelData->realVarsData[13].attribute.useNominal = 0;
  modelData->realVarsData[13].attribute.nominal = 1.0;
  modelData->realVarsData[13].attribute.start = 0.0;
  modelData->realVarsData[14].info.id = 1014;
  modelData->realVarsData[14].info.name = "LengthVec[3]";
  modelData->realVarsData[14].info.comment = "";
  modelData->realVarsData[14].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[14].info.info.lineStart = 6;
  modelData->realVarsData[14].info.info.colStart = 5;
  modelData->realVarsData[14].info.info.lineEnd = 6;
  modelData->realVarsData[14].info.info.colEnd = 63;
  modelData->realVarsData[14].info.info.readonly = 0;
  modelData->realVarsData[14].attribute.unit = "";
  modelData->realVarsData[14].attribute.displayUnit = "";
  modelData->realVarsData[14].attribute.min = -DBL_MAX;
  modelData->realVarsData[14].attribute.max = DBL_MAX;
  modelData->realVarsData[14].attribute.fixed = 1;
  modelData->realVarsData[14].attribute.useNominal = 0;
  modelData->realVarsData[14].attribute.nominal = 1.0;
  modelData->realVarsData[14].attribute.start = 0.0;
  modelData->realVarsData[15].info.id = 1015;
  modelData->realVarsData[15].info.name = "Target";
  modelData->realVarsData[15].info.comment = "";
  modelData->realVarsData[15].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[15].info.info.lineStart = 5;
  modelData->realVarsData[15].info.info.colStart = 5;
  modelData->realVarsData[15].info.info.lineEnd = 5;
  modelData->realVarsData[15].info.info.colEnd = 48;
  modelData->realVarsData[15].info.info.readonly = 0;
  modelData->realVarsData[15].attribute.unit = "";
  modelData->realVarsData[15].attribute.displayUnit = "";
  modelData->realVarsData[15].attribute.min = -DBL_MAX;
  modelData->realVarsData[15].attribute.max = DBL_MAX;
  modelData->realVarsData[15].attribute.fixed = 1;
  modelData->realVarsData[15].attribute.useNominal = 0;
  modelData->realVarsData[15].attribute.nominal = 1.0;
  modelData->realVarsData[15].attribute.start = 0.0;
  modelData->realParameterData[0].info.id = 1016;
  modelData->realParameterData[0].info.name = "Length";
  modelData->realParameterData[0].info.comment = "";
  modelData->realParameterData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[0].info.info.lineStart = 14;
  modelData->realParameterData[0].info.info.colStart = 5;
  modelData->realParameterData[0].info.info.lineEnd = 14;
  modelData->realParameterData[0].info.info.colEnd = 45;
  modelData->realParameterData[0].info.info.readonly = 0;
  modelData->realParameterData[0].attribute.unit = "m";
  modelData->realParameterData[0].attribute.displayUnit = "";
  modelData->realParameterData[0].attribute.min = -DBL_MAX;
  modelData->realParameterData[0].attribute.max = DBL_MAX;
  modelData->realParameterData[0].attribute.fixed = 1;
  modelData->realParameterData[0].attribute.useNominal = 0;
  modelData->realParameterData[0].attribute.nominal = 1.0;
  modelData->realParameterData[0].attribute.start = 4.74;
  modelData->realParameterData[1].info.id = 1017;
  modelData->realParameterData[1].info.name = "breakingDeceleration";
  modelData->realParameterData[1].info.comment = "";
  modelData->realParameterData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[1].info.info.lineStart = 11;
  modelData->realParameterData[1].info.info.colStart = 5;
  modelData->realParameterData[1].info.info.lineEnd = 11;
  modelData->realParameterData[1].info.info.colEnd = 63;
  modelData->realParameterData[1].info.info.readonly = 0;
  modelData->realParameterData[1].attribute.unit = "m/s2";
  modelData->realParameterData[1].attribute.displayUnit = "";
  modelData->realParameterData[1].attribute.min = -DBL_MAX;
  modelData->realParameterData[1].attribute.max = DBL_MAX;
  modelData->realParameterData[1].attribute.fixed = 1;
  modelData->realParameterData[1].attribute.useNominal = 0;
  modelData->realParameterData[1].attribute.nominal = 1.0;
  modelData->realParameterData[1].attribute.start = 13.14;
  modelData->realParameterData[2].info.id = 1018;
  modelData->realParameterData[2].info.name = "distanceStart";
  modelData->realParameterData[2].info.comment = "";
  modelData->realParameterData[2].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[2].info.info.lineStart = 15;
  modelData->realParameterData[2].info.info.colStart = 5;
  modelData->realParameterData[2].info.info.lineEnd = 15;
  modelData->realParameterData[2].info.info.colEnd = 51;
  modelData->realParameterData[2].info.info.readonly = 0;
  modelData->realParameterData[2].attribute.unit = "m";
  modelData->realParameterData[2].attribute.displayUnit = "";
  modelData->realParameterData[2].attribute.min = -DBL_MAX;
  modelData->realParameterData[2].attribute.max = DBL_MAX;
  modelData->realParameterData[2].attribute.fixed = 1;
  modelData->realParameterData[2].attribute.useNominal = 0;
  modelData->realParameterData[2].attribute.nominal = 1.0;
  modelData->realParameterData[2].attribute.start = 0.0;
  modelData->realParameterData[3].info.id = 1019;
  modelData->realParameterData[3].info.name = "maxAcceleration";
  modelData->realParameterData[3].info.comment = "";
  modelData->realParameterData[3].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[3].info.info.lineStart = 13;
  modelData->realParameterData[3].info.info.colStart = 5;
  modelData->realParameterData[3].info.info.lineEnd = 13;
  modelData->realParameterData[3].info.info.colEnd = 56;
  modelData->realParameterData[3].info.info.readonly = 0;
  modelData->realParameterData[3].attribute.unit = "m/s";
  modelData->realParameterData[3].attribute.displayUnit = "";
  modelData->realParameterData[3].attribute.min = -DBL_MAX;
  modelData->realParameterData[3].attribute.max = DBL_MAX;
  modelData->realParameterData[3].attribute.fixed = 1;
  modelData->realParameterData[3].attribute.useNominal = 0;
  modelData->realParameterData[3].attribute.nominal = 1.0;
  modelData->realParameterData[3].attribute.start = 8.76;
  modelData->realParameterData[4].info.id = 1020;
  modelData->realParameterData[4].info.name = "maxSpeed";
  modelData->realParameterData[4].info.comment = "";
  modelData->realParameterData[4].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[4].info.info.lineStart = 12;
  modelData->realParameterData[4].info.info.colStart = 5;
  modelData->realParameterData[4].info.info.lineEnd = 12;
  modelData->realParameterData[4].info.info.colEnd = 49;
  modelData->realParameterData[4].info.info.readonly = 0;
  modelData->realParameterData[4].attribute.unit = "m/s";
  modelData->realParameterData[4].attribute.displayUnit = "";
  modelData->realParameterData[4].attribute.min = -DBL_MAX;
  modelData->realParameterData[4].attribute.max = DBL_MAX;
  modelData->realParameterData[4].attribute.fixed = 1;
  modelData->realParameterData[4].attribute.useNominal = 0;
  modelData->realParameterData[4].attribute.nominal = 1.0;
  modelData->realParameterData[4].attribute.start = 16.7;
  modelData->integerVarsData[0].info.id = 1021;
  modelData->integerVarsData[0].info.name = "LightColor";
  modelData->integerVarsData[0].info.comment = "";
  modelData->integerVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->integerVarsData[0].info.info.lineStart = 3;
  modelData->integerVarsData[0].info.info.colStart = 5;
  modelData->integerVarsData[0].info.info.lineEnd = 3;
  modelData->integerVarsData[0].info.info.colEnd = 55;
  modelData->integerVarsData[0].info.info.readonly = 0;
  modelData->integerVarsData[0].attribute.min = -LONG_MAX;
  modelData->integerVarsData[0].attribute.max = LONG_MAX;
  modelData->integerVarsData[0].attribute.fixed = 1;
  modelData->integerVarsData[0].attribute.start = 0;
  modelData->integerVarsData[1].info.id = 1022;
  modelData->integerVarsData[1].info.name = "state";
  modelData->integerVarsData[1].info.comment = "";
  modelData->integerVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->integerVarsData[1].info.info.lineStart = 9;
  modelData->integerVarsData[1].info.info.colStart = 5;
  modelData->integerVarsData[1].info.info.lineEnd = 9;
  modelData->integerVarsData[1].info.info.colEnd = 54;
  modelData->integerVarsData[1].info.info.readonly = 0;
  modelData->integerVarsData[1].attribute.min = 1;
  modelData->integerVarsData[1].attribute.max = 3;
  modelData->integerVarsData[1].attribute.fixed = 0;
  modelData->integerVarsData[1].attribute.start = 1;
  modelData->integerParameterData[0].info.id = 1023;
  modelData->integerParameterData[0].info.name = "size";
  modelData->integerParameterData[0].info.comment = "";
  modelData->integerParameterData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->integerParameterData[0].info.info.lineStart = 16;
  modelData->integerParameterData[0].info.info.colStart = 5;
  modelData->integerParameterData[0].info.info.lineEnd = 16;
  modelData->integerParameterData[0].info.info.colEnd = 31;
  modelData->integerParameterData[0].info.info.readonly = 0;
  modelData->integerParameterData[0].attribute.min = -LONG_MAX;
  modelData->integerParameterData[0].attribute.max = LONG_MAX;
  modelData->integerParameterData[0].attribute.fixed = 1;
  modelData->integerParameterData[0].attribute.start = 3;
  modelData->booleanVarsData[0].info.id = 1024;
  modelData->booleanVarsData[0].info.name = "$whenCondition1";
  modelData->booleanVarsData[0].info.comment = "speed <= 0.0";
  modelData->booleanVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[0].info.info.lineStart = 58;
  modelData->booleanVarsData[0].info.info.colStart = 7;
  modelData->booleanVarsData[0].info.info.lineEnd = 58;
  modelData->booleanVarsData[0].info.info.colEnd = 32;
  modelData->booleanVarsData[0].info.info.readonly = 0;
  modelData->booleanVarsData[0].attribute.fixed = 1;
  modelData->booleanVarsData[0].attribute.start = 0;
  modelData->booleanVarsData[1].info.id = 1025;
  modelData->booleanVarsData[1].info.name = "$whenCondition2";
  modelData->booleanVarsData[1].info.comment = "distance < Target and state == TrainCrossing.TrainLightColor.on and Gate_Angle >= 90.0 and speed < maxSpeed";
  modelData->booleanVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[1].info.info.lineStart = 54;
  modelData->booleanVarsData[1].info.info.colStart = 7;
  modelData->booleanVarsData[1].info.info.lineEnd = 54;
  modelData->booleanVarsData[1].info.info.colEnd = 44;
  modelData->booleanVarsData[1].info.info.readonly = 0;
  modelData->booleanVarsData[1].attribute.fixed = 1;
  modelData->booleanVarsData[1].attribute.start = 0;
  modelData->booleanVarsData[2].info.id = 1026;
  modelData->booleanVarsData[2].info.name = "$whenCondition3";
  modelData->booleanVarsData[2].info.comment = "distance + BreakingDistance + 5.0 >= Target and distance + BreakingDistance - 5.0 <= Target and speed > 0.0 and state == TrainCrossing.TrainLightColor.red";
  modelData->booleanVarsData[2].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[2].info.info.lineStart = 50;
  modelData->booleanVarsData[2].info.info.colStart = 7;
  modelData->booleanVarsData[2].info.info.lineEnd = 50;
  modelData->booleanVarsData[2].info.info.colEnd = 50;
  modelData->booleanVarsData[2].info.info.readonly = 0;
  modelData->booleanVarsData[2].attribute.fixed = 1;
  modelData->booleanVarsData[2].attribute.start = 0;
  modelData->booleanVarsData[3].info.id = 1027;
  modelData->booleanVarsData[3].info.name = "$whenCondition4";
  modelData->booleanVarsData[3].info.comment = "speed >= maxSpeed";
  modelData->booleanVarsData[3].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[3].info.info.lineStart = 46;
  modelData->booleanVarsData[3].info.info.colStart = 7;
  modelData->booleanVarsData[3].info.info.lineEnd = 46;
  modelData->booleanVarsData[3].info.info.colEnd = 32;
  modelData->booleanVarsData[3].info.info.readonly = 0;
  modelData->booleanVarsData[3].attribute.fixed = 1;
  modelData->booleanVarsData[3].attribute.start = 0;
  modelData->booleanParameterData[0].info.id = 1028;
  modelData->booleanParameterData[0].info.name = "isClumsy";
  modelData->booleanParameterData[0].info.comment = "";
  modelData->booleanParameterData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanParameterData[0].info.info.lineStart = 17;
  modelData->booleanParameterData[0].info.info.colStart = 5;
  modelData->booleanParameterData[0].info.info.lineEnd = 17;
  modelData->booleanParameterData[0].info.info.colEnd = 39;
  modelData->booleanParameterData[0].info.info.readonly = 0;
  modelData->booleanParameterData[0].attribute.fixed = 1;
  modelData->booleanParameterData[0].attribute.start = 0;
}