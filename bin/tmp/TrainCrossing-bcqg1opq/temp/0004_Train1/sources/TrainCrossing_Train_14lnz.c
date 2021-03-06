/* Linearization */
#include "TrainCrossing_Train_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_Train_linear_model_frame()
{
  return "model linear_TrainCrossing_Train\n  parameter Integer n = 1 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 2 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = [%s];\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'x_distance' = x[1];\n"
  "  Real 'y_Distance' = y[1];\n""  Real 'y_Length' = y[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_Train;\n";
}
const char *TrainCrossing_Train_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_Train\n  parameter Integer n = 1 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 2 \"number of outputs\";\n  parameter Integer nz = 2 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[1] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[2] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = [%s];\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "  parameter Real Cz[nz, n] = [%s];\n"
  "  parameter Real Dz[nz, p] = zeros(nz, p);%s\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_distance' = x[1];\n"
  "  Real 'y_Distance' = y[1];\n""  Real 'y_Length' = y[2];\n"
  "  Real 'z_Distance' = z[1];\n""  Real 'z_Length' = z[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_Train;\n";
}
#if defined(__cplusplus)
}
#endif

