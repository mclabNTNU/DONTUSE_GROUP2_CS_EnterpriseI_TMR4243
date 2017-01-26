/*
 * ctrl_sixaxis2thruster.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_sixaxis2thruster".
 *
 * Model version              : 1.26
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Thu Jan 26 17:28:59 2017
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ctrl_sixaxis2thruster.h"
#include "ctrl_sixaxis2thruster_private.h"

const real_T ctrl_sixaxis2thruster_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_B;

/* Block states (auto storage) */
DW_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_DW;

/* Real-time model */
RT_MODEL_ctrl_sixaxis2thruste_T ctrl_sixaxis2thruster_M_;
RT_MODEL_ctrl_sixaxis2thruste_T *const ctrl_sixaxis2thruster_M =
  &ctrl_sixaxis2thruster_M_;

/* Model output function */
static void ctrl_sixaxis2thruster_output(void)
{
  /* (no output code required) */
}

/* Model update function */
static void ctrl_sixaxis2thruster_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ctrl_sixaxis2thruster_M->Timing.clockTick0)) {
    ++ctrl_sixaxis2thruster_M->Timing.clockTickH0;
  }

  ctrl_sixaxis2thruster_M->Timing.t[0] =
    ctrl_sixaxis2thruster_M->Timing.clockTick0 *
    ctrl_sixaxis2thruster_M->Timing.stepSize0 +
    ctrl_sixaxis2thruster_M->Timing.clockTickH0 *
    ctrl_sixaxis2thruster_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void ctrl_sixaxis2thruster_initialize(void)
{
}

/* Model terminate function */
static void ctrl_sixaxis2thruster_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  ctrl_sixaxis2thruster_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ctrl_sixaxis2thruster_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  ctrl_sixaxis2thruster_initialize();
}

void MdlTerminate(void)
{
  ctrl_sixaxis2thruster_terminate();
}

/* Registration function */
RT_MODEL_ctrl_sixaxis2thruste_T *ctrl_sixaxis2thruster(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ctrl_sixaxis2thruster_M, 0,
                sizeof(RT_MODEL_ctrl_sixaxis2thruste_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ctrl_sixaxis2thruster_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    ctrl_sixaxis2thruster_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ctrl_sixaxis2thruster_M->Timing.sampleTimes =
      (&ctrl_sixaxis2thruster_M->Timing.sampleTimesArray[0]);
    ctrl_sixaxis2thruster_M->Timing.offsetTimes =
      (&ctrl_sixaxis2thruster_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ctrl_sixaxis2thruster_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    ctrl_sixaxis2thruster_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(ctrl_sixaxis2thruster_M, &ctrl_sixaxis2thruster_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ctrl_sixaxis2thruster_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    ctrl_sixaxis2thruster_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ctrl_sixaxis2thruster_M, -1);
  ctrl_sixaxis2thruster_M->Timing.stepSize0 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    ctrl_sixaxis2thruster_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
    rtliSetLogT(ctrl_sixaxis2thruster_M->rtwLogInfo, "tout");
    rtliSetLogX(ctrl_sixaxis2thruster_M->rtwLogInfo, "");
    rtliSetLogXFinal(ctrl_sixaxis2thruster_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ctrl_sixaxis2thruster_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ctrl_sixaxis2thruster_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(ctrl_sixaxis2thruster_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(ctrl_sixaxis2thruster_M->rtwLogInfo, 1);
    rtliSetLogY(ctrl_sixaxis2thruster_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
  }

  ctrl_sixaxis2thruster_M->solverInfoPtr = (&ctrl_sixaxis2thruster_M->solverInfo);
  ctrl_sixaxis2thruster_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&ctrl_sixaxis2thruster_M->solverInfo, 0.01);
  rtsiSetSolverMode(&ctrl_sixaxis2thruster_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ctrl_sixaxis2thruster_M->ModelData.blockIO = ((void *)
    &ctrl_sixaxis2thruster_B);
  (void) memset(((void *) &ctrl_sixaxis2thruster_B), 0,
                sizeof(B_ctrl_sixaxis2thruster_T));

  /* parameters */
  ctrl_sixaxis2thruster_M->ModelData.defaultParam = ((real_T *)
    &ctrl_sixaxis2thruster_P);

  /* states (dwork) */
  ctrl_sixaxis2thruster_M->ModelData.dwork = ((void *) &ctrl_sixaxis2thruster_DW);
  (void) memset((void *)&ctrl_sixaxis2thruster_DW, 0,
                sizeof(DW_ctrl_sixaxis2thruster_T));

  /* Initialize Sizes */
  ctrl_sixaxis2thruster_M->Sizes.numContStates = (0);/* Number of continuous states */
  ctrl_sixaxis2thruster_M->Sizes.numY = (0);/* Number of model outputs */
  ctrl_sixaxis2thruster_M->Sizes.numU = (0);/* Number of model inputs */
  ctrl_sixaxis2thruster_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ctrl_sixaxis2thruster_M->Sizes.numSampTimes = (1);/* Number of sample times */
  ctrl_sixaxis2thruster_M->Sizes.numBlocks = (19);/* Number of blocks */
  ctrl_sixaxis2thruster_M->Sizes.numBlockIO = (9);/* Number of block outputs */
  ctrl_sixaxis2thruster_M->Sizes.numBlockPrms = (109);/* Sum of parameter "widths" */
  return ctrl_sixaxis2thruster_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

/*========================================================================*
 * NI VeriStand Generated Code                                            *
 *========================================================================*
 * This file contains automatically generated code for functions
 * to update the inports and outports of a Simulink/Realtime Workshop
 * model. Calls to these functions should be made before each step is taken
 * (inports, call SetExternalInputs) and after each step is taken
 * (outports, call SetExternalOutputs.)
 */
#ifdef NI_ROOTMODEL_ctrl_sixaxis2thruster
#include "model_info.h"
#include <stddef.h>
#include <stdlib.h>
#include <float.h>

unsigned char ReadSideDirtyFlag = 0, WriteSideDirtyFlag = 0;
double NIRT_GetValueByDataType(void* ptr,int subindex, int type, int Complex)
{
  switch (type)
  {
   case 0:
    return (double)(((real_T*)ptr)[subindex]);

   case 1:
    return (double)(((real32_T*)ptr)[subindex]);

   case 2:
    return (double)(((int8_T*)ptr)[subindex]);

   case 3:
    return (double)(((uint8_T*)ptr)[subindex]);

   case 4:
    return (double)(((int16_T*)ptr)[subindex]);

   case 5:
    return (double)(((uint16_T*)ptr)[subindex]);

   case 6:
    return (double)(((int32_T*)ptr)[subindex]);

   case 7:
    return (double)(((uint32_T*)ptr)[subindex]);

   case 8:
    return (double)(((boolean_T*)ptr)[subindex]);

   case 10:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 13:
    return NIRT_GetValueByDataType(ptr,subindex,7,Complex);

   case 15:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 16:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 17:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 18:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 22:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 23:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);
  }

  // return ((double *)ptr)[subindex];
  return rtNaN;
}

long NIRT_SetValueByDataType(void* ptr,int subindex, double value, int type, int
  Complex)
{
  //Complex is only used for R14.3 and down
  switch (type)
  {
   case 0:
    ((real_T *)ptr)[subindex] = (real_T)value;
    return NI_OK;

   case 1:
    ((real32_T *)ptr)[subindex] = (real32_T)value;
    return NI_OK;

   case 2:
    ((int8_T *)ptr)[subindex] = (int8_T)value;
    return NI_OK;

   case 3:
    ((uint8_T *)ptr)[subindex] = (uint8_T)value;
    return NI_OK;

   case 4:
    ((int16_T *)ptr)[subindex] = (int16_T)value;
    return NI_OK;

   case 5:
    ((uint16_T *)ptr)[subindex] = (uint16_T)value;
    return NI_OK;

   case 6:
    ((int32_T *)ptr)[subindex] = (int32_T)value;
    return NI_OK;

   case 7:
    ((uint32_T *)ptr)[subindex] = (uint32_T)value;
    return NI_OK;

   case 8:
    ((boolean_T *)ptr)[subindex] = (boolean_T)value;
    return NI_OK;

   case 10:
    //Type is renamed. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,6,Complex);

   case 13:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,7,Complex);

   case 15:
    //Type is enum. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,6,Complex);

   case 16:
    //Type is enum. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,6,Complex);

   case 17:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,3,Complex);

   case 18:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,3,Complex);

   case 22:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,0,Complex);

   case 23:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr,subindex,value,0,Complex);
  }

  //No matching datatype conversion
  return NI_ERROR;
}

extern ctrl_sixaxis2thruster_rtModel *S;
extern _SITexportglobals SITexportglobals;
void SetExternalInputs(double* data, int* TaskSampleHit)
{
  int index = 0, count = 0;

  // PosXLeft
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosXLeft, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // PosYLeft
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosYLeft, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // PosXRight
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosXRight, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // Start
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.Start, 0, data[index++], 0,
      0);
  } else {
    index += 1;
  }

  // ArrowUp
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.ArrowUp, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ArrowDown
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.ArrowDown, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // PosYRight
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosYRight, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // L2_continuous
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.L2_continuous, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // R2_continuous
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.R2_continuous, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }
}                                      /* of SetExternalInputs */

long NumInputPorts(void)
{
  return 9;
}

double ni_extout[9];
void SetExternalOutputs(double* data, int* TaskSampleHit)
{
  int index = 0, count = 0;

  // u_VSP1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // alpha_VSP2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // alpha_VSP1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // u_VSP2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // u_BT: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // omega_VSP1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // omega_VSP2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_sixaxis2thruster_RGND,0,0,0);
  } else {
    index += 1;
  }

  // Scope1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.L2_continuous,0,0,0);
  } else {
    index += 1;
  }

  // Scope2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.R2_continuous,0,0,0);
  } else {
    index += 1;
  }

  if (data)
    memcpy(&data[0], &ni_extout[0], sizeof(ni_extout));
}

long NumOutputPorts(void)
{
  return 9;
}

int NI_InitExternalOutputs()
{
  int index = 0, count = 0;

  // u_VSP1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // alpha_VSP2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // alpha_VSP1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // u_VSP2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // u_BT: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // omega_VSP1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // omega_VSP2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_sixaxis2thruster_RGND,0,0,0);

  // Scope1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.L2_continuous,0,0,0);

  // Scope2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.R2_continuous,0,0,0);
  return NI_OK;
}

// by default, all elements (inclulding	scalars) have 2 dimensions [1,1]
static NI_Parameter NI_ParamList[] DataSection(".NIVS.paramlist") =
{
  { 0, "", 0, 0, 0, 0, 0, 0 }
};

static int NI_ParamListSize DataSection(".NIVS.paramlistsize") = 0;
static int NI_ParamDimList[] DataSection(".NIVS.paramdimlist") =
{
  0
};

static NI_Signal NI_SigList[] DataSection(".NIVS.siglist") =
{
  { 0, "ctrl_sixaxis2thruster/PosXLeft", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosXLeft)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 1, "ctrl_sixaxis2thruster/PosYLeft", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosYLeft)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1, 2,
    2, 0 },

  { 2, "ctrl_sixaxis2thruster/PosXRight", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosXRight)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1,
    2, 4, 0 },

  { 3, "ctrl_sixaxis2thruster/Start", 0, "", offsetof(B_ctrl_sixaxis2thruster_T,
    Start)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1, 2, 6, 0 },

  { 4, "ctrl_sixaxis2thruster/ArrowUp", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, ArrowUp)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1, 2,
    8, 0 },

  { 5, "ctrl_sixaxis2thruster/ArrowDown", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, ArrowDown)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1,
    2, 10, 0 },

  { 6, "ctrl_sixaxis2thruster/PosYRight", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosYRight)+0*sizeof(real_T), BLOCKIO_SIG, 0, 1,
    2, 12, 0 },

  { 7, "ctrl_sixaxis2thruster/L2_continuous", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, L2_continuous)+0*sizeof(real_T), BLOCKIO_SIG, 0,
    1, 2, 14, 0 },

  { 8, "ctrl_sixaxis2thruster/R2_continuous", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, R2_continuous)+0*sizeof(real_T), BLOCKIO_SIG, 0,
    1, 2, 16, 0 },

  { -1, "", -1, "", 0, 0, 0 }
};

static int NI_SigListSize DataSection(".NIVS.siglistsize") = 9;
static int NI_VirtualBlockSources[1][1];
static int NI_VirtualBlockOffsets[1][1];
static int NI_VirtualBlockLengths[1][1];
static int NI_SigDimList[] DataSection(".NIVS.sigdimlist") =
{
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };

static long NI_ExtListSize DataSection(".NIVS.extlistsize") = 18;
static NI_ExternalIO NI_ExtList[] DataSection(".NIVS.extlist") =
{
  { 0, "PosXLeft", 0, EXT_IN, 1, 1, 1 },

  { 1, "PosYLeft", 0, EXT_IN, 1, 1, 1 },

  { 2, "PosXRight", 0, EXT_IN, 1, 1, 1 },

  { 3, "Start", 0, EXT_IN, 1, 1, 1 },

  { 4, "ArrowUp", 0, EXT_IN, 1, 1, 1 },

  { 5, "ArrowDown", 0, EXT_IN, 1, 1, 1 },

  { 6, "PosYRight", 0, EXT_IN, 1, 1, 1 },

  { 7, "L2_continuous", 0, EXT_IN, 1, 1, 1 },

  { 8, "R2_continuous", 0, EXT_IN, 1, 1, 1 },

  { 0, "u_VSP1", 0, EXT_OUT, 1, 1, 1 },

  { 1, "alpha_VSP2", 0, EXT_OUT, 1, 1, 1 },

  { 2, "alpha_VSP1", 0, EXT_OUT, 1, 1, 1 },

  { 3, "u_VSP2", 0, EXT_OUT, 1, 1, 1 },

  { 4, "u_BT", 0, EXT_OUT, 1, 1, 1 },

  { 5, "omega_VSP1", 0, EXT_OUT, 1, 1, 1 },

  { 6, "omega_VSP2", 0, EXT_OUT, 1, 1, 1 },

  { 7, "Scope1", 0, EXT_OUT, 1, 1, 1 },

  { 8, "Scope2", 0, EXT_OUT, 1, 1, 1 },

  { -1, "", 0, 0, 0, 0, 0 }
};

/* This Task List is generated to allow access to the task specs without
 * initializing the model.
 * 0th entry is for scheduler (base rate)
 * rest for multirate model's tasks.
 */
NI_Task NI_TaskList[] DataSection(".NIVS.tasklist") =
{
  { 0, 0.01, 0 }
};

int NI_NumTasks DataSection(".NIVS.numtasks") = 1;
static char* NI_CompiledModelName DataSection(".NIVS.compiledmodelname") =
  "ctrl_sixaxis2thruster";
static char* NI_CompiledModelVersion = "1.26";
static char* NI_CompiledModelDateTime = "Thu Jan 26 17:28:59 2017";
static char* NI_builder DataSection(".NIVS.builder") =
  "NI VeriStand 2014.0.0.82 (2014) RTW Build";
static char* NI_BuilderVersion DataSection(".NIVS.builderversion") =
  "2014.0.0.82";

/* Model Information Query fucntions for MATLAB
 */
/* dll information
 * Returns 1 for RTW DLL
 *		   2 for AutoCode DLL
 */
DLL_EXPORT long NIRT_GetBuildInfo(char* detail, long* len)
{
  // There are no console properties to set for VxWorks, because the console is simply serial output data.
  // Just do printf for VxWorks and ignore all console properties.
#if ! defined (VXWORKS) && ! defined (kNIOSLinux)

  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hStdout, FOREGROUND_INTENSITY | FOREGROUND_BLUE |
    FOREGROUND_GREEN | FOREGROUND_RED);

#endif

  printf("\n*******************************************************************************\n");
  printf("%s\nModel Name: %s\nModel Version: %s\nCompiled On: %s",
         NI_builder, NI_CompiledModelName, NI_CompiledModelVersion,
         NI_CompiledModelDateTime);
  printf("\n*******************************************************************************\n");

#if ! defined (VXWORKS) && ! defined (kNIOSLinux)

  SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_GREEN |
    FOREGROUND_RED);

#endif

  if (*len>=(long)strlen(NI_builder))
    *len = strlen(NI_builder)+1;
  strncpy(detail,NI_builder,*len);
  return 1;
}

/*
 * Distinction between Index and ID:
 * Index is a long datatype (used to set parameter/probe signals).
 * ID on the other hand is a string (tag "2-3-2-12" for MatrixX/ Full path "f14/Gain/Gain" for Matlab).
 * If Bus support is added then signal path from the block name is added to the end of the port number (Model/subsystem1:1/X/A)
 * where X/A is the path from the block
 * NOTE: ID may not be the same as Paramname or signal name.
 */

/* signal information
   NOTE: signal ID == the blockname and port that feeds it extended with /sinalname.

   The port number in Simulation Environment is 1 indexed.. but on RT is 0 indexed.
 */
DLL_EXPORT long NIRT_GetSignalSpec(long* sidx, char* ID, long* ID_len, char
  * blkname, long *bnlen,
  long *portnum, char* signame, long *snlen, long *dattype, long* dims, long
  * numdim)
{
  long sigidx = *sidx;
  int i = 0;
  char *IDblk = 0;
  int IDport = 0;
  if (sigidx<0) {
    // check if ID has been specified.
    if (ID && *ID_len>0) {
      // parse ID into blkname and port
      i = strrchr(ID, ':') - ID;

      // malformed ID
      if (i<=0)
        return NI_SigListSize;

      //ID[i] = 0;
      IDblk = ID;
      IDport = atoi(ID+i+1);

      // lookup the table for matching ID
      // Bus support
      for (i=0;i<NI_SigListSize;i++) {
        char *tempID = (char *)calloc(strlen(NI_SigList[i].blockname)+strlen
          (NI_SigList[i].signalname)+ 11, sizeof(char));

        //sprintf(tempID,"%s%s%s",NI_SigList[i].blockname,"/",NI_SigList[i].signalname);
        if (strlen(NI_SigList[i].signalname)>0)
          sprintf(tempID,"%s:%d%s%s",NI_SigList[i].blockname,NI_SigList[i].
                  portno+1,"/",NI_SigList[i].signalname);
        else
          sprintf(tempID,"%s:%d",NI_SigList[i].blockname,NI_SigList[i].portno+1);
        if (!strcmp(IDblk,tempID) && IDport==(NI_SigList[i].portno+1))
          break;
        free(tempID);
      }

      if (i<NI_SigListSize)
        sigidx = *sidx = i;
      else
        return NI_SigListSize;
    } else                             // no index or ID specified.
      return NI_SigListSize;
  }

  if (sigidx>=0 && sigidx<NI_SigListSize) {
    if (ID) {
      // no need for return string to be null terminated!
      // 11 to accomodate ':','/', port number and null character
      char *tempID = (char *)calloc(strlen(NI_SigList[sigidx].blockname)+strlen
        (NI_SigList[sigidx].signalname)+ 11, sizeof(char));
      if (strlen(NI_SigList[sigidx].signalname)>0)
        sprintf(tempID,"%s:%d%s%s",NI_SigList[sigidx].blockname,
                NI_SigList[sigidx].portno+1,"/",NI_SigList[sigidx].signalname);
      else
        sprintf(tempID,"%s:%d",NI_SigList[sigidx].blockname,NI_SigList[sigidx].
                portno+1);
      if ((long)strlen(tempID)<*ID_len)
        *ID_len = strlen(tempID);
      strncpy(ID, tempID, *ID_len);
      free(tempID);
    }

    if (blkname) {
      // no need for return string to be null terminated!
      if ((long)strlen(NI_SigList[sigidx].blockname)<*bnlen)
        *bnlen = strlen(NI_SigList[sigidx].blockname);
      strncpy(blkname, NI_SigList[sigidx].blockname, *bnlen);
    }

    if (signame) {
      // no need for return string to be null terminated!
      if ((long)strlen(NI_SigList[sigidx].signalname)<*snlen)
        *snlen = strlen(NI_SigList[sigidx].signalname);
      strncpy(signame, NI_SigList[sigidx].signalname, *snlen);
    }

    if (portnum)
      *portnum = NI_SigList[sigidx].portno;
    if (dattype)
      *dattype = NI_SigList[sigidx].datatype;
    if (dims && *numdim>=NI_SigList[sigidx].numofdims) {
      *numdim = NI_SigList[sigidx].numofdims;
      for (i=0;i < *numdim; i++)
        dims[i] = NI_SigDimList[NI_SigList[sigidx].dimListOffset +i];
    } else
      *numdim = 0;                     // set numdim to 0 to indicate that no enough memory to return the info.
    return 0;
  }

  return NI_SigListSize;
}

/*
 * Get parameter indices
 */
DLL_EXPORT long NIRT_GetParameterIndices(long* indices, long* len)
{
  long i;
  for (i=0;i<NI_ParamListSize && i<*len;i++)
    indices[i] = NI_ParamList[i].idx;
  *len = i;
  return NI_OK;
}

/*
 * parameter information
 *
 * if *pidx < 0, Lookup parameter by ID if ID != NULL.
 * if ID == NULL or no matching ID found, return number of parameters.
 *
 * plen  -> size of path
 * pnlen -> size of paramname
 * numdim -> size of dims array
 */
DLL_EXPORT long NIRT_GetParameterSpec(long* pidx, char* ID, long* ID_len, char
  * paramname, long *pnlen,
  long *dattype, long* dims, long* numdim)
{
  int i= 0;
  int paramidx = *pidx;
  if (paramidx<0) {
    // check if ID has been specified.
    if (ID && *ID_len>0) {
      // lookup the table for matching ID
      for (i=0;i<NI_ParamListSize;i++) {
        if (!strcmp(ID,NI_ParamList[i].paramname))
          break;
      }

      if (i<NI_ParamListSize)
        paramidx = *pidx = i;
      else
        return NI_ParamListSize;
    } else                             // no index or ID specified.
      return NI_ParamListSize;
  }

  if (paramidx>=0 && paramidx<NI_ParamListSize) {
    if (ID) {
      if ((long)strlen(NI_ParamList[paramidx].paramname)<*ID_len)
        *ID_len = strlen(NI_ParamList[paramidx].paramname);
      strncpy(ID, NI_ParamList[paramidx].paramname, *ID_len);
    }

    if (paramname) {
      // no need for return string to be null terminated!
      if ((long)strlen(NI_ParamList[paramidx].paramname)<*pnlen)
        *pnlen = strlen(NI_ParamList[paramidx].paramname);
      strncpy(paramname, NI_ParamList[paramidx].paramname, *pnlen);
    }

    if (dattype)
      *dattype = NI_ParamList[paramidx].datatype;
    if (!numdim)
      return 0;
    if (*numdim>=NI_ParamList[paramidx].numofdims) {
      *numdim = NI_ParamList[paramidx].numofdims;
      for (i=0;i < *numdim; i++)
        dims[i] = NI_ParamDimList[NI_ParamList[paramidx].dimListOffset +i];
    } else
      *numdim = 0;                     // set numdim to 0 to indicate that no enough memory to return the info.
    return 0;
  }

  return NI_ParamListSize;
}

/*
 * DEPRECATED.
 */
DLL_EXPORT long NIRT_GetParameterExpression(long paramidx, char* expression,
  long *exp_len)
{
  return 0;
}

/*
 * DEPRECATED.
 */
DLL_EXPORT long NIRT_GetVariableName(long varidx, char* variable_name, long
  *var_len)
{
  return 0;
}

/*
 * NIRT_GetExtIOSpec
 *
 * Inputs:
 *		index: index of the task
 * Outputs:
 *		idx:  idx of the IO.
 *		name: Name of the IO block
 *		tid: task id
 *		type: EXT_IN or EXT_OUT
 *		dimX: size of 0th dimension
 *		dimY: size of 1th dimension
 * Return value: 0 if no error. (if index == -1, return number of tasks in the model)
 */
DLL_EXPORT long NIRT_GetExtIOSpec(long index, long *idx, char* name, long* tid,
  long *type, long *dims, long* numdims)
{
  if (index==-1)
    return NI_ExtListSize;
  if (idx)
    *idx = NI_ExtList[index].idx;
  if (name) {
    int sz = strlen(name);
    strncpy(name, NI_ExtList[index].name, sz-1);
    name[sz-1]= 0;
  }

  if (tid)
    *tid = NI_ExtList[index].TID;
  if (type)
    *type = NI_ExtList[index].type;
  if (numdims && dims) {
    if (*numdims>=2) {
      *numdims= 2;
      dims[0] = NI_ExtList[index].dimX;
      dims[1] = NI_ExtList[index].dimY;
    } else
      *numdims= 0;
  }

  return 0;
}

/* Helper function to probe one	signal. baseaddr must NOT be VIRTUAL_SIG */
static long NI_ProbeOneSignal(long idx, double *value, long len, long *count,
  long vOffset, long vLength)
{
  char *ptr = (char*)((NI_SigList[idx].baseaddr == BLOCKIO_SIG) ?
                      S->ModelData.blockIO : S->ModelData.inputs) + (int)
    NI_SigList[idx].addr;
  long subindex = (vLength == -1) ? 0 : vOffset;
  long sublength = (vLength == -1) ? NI_SigList[idx].width : (vLength + vOffset);
  while ((subindex < sublength) && (*count < len))
    value[(*count)++] = NIRT_GetValueByDataType(ptr, subindex++, NI_SigList[idx]
      .datatype, NI_SigList[idx].IsComplex);
  return *count;
}

/*
 * NIRT_ProbeSignals
 *
 * Inputs:
 *		sigindices: indeces of signals
 *		numsigs: number of signals
 *		len: total length of all signals
 * Outputs:
 *		value: probed signal data
 *		len: length of data (may vary from input)
 * Return value: equal to len
 */
DLL_EXPORT long NIRT_ProbeSignals(long* sigindices, long numsigs,
  double* value, long* len)
{
  int i, j, idx;
  long count = 0;
  if (!SITexportglobals.inCriticalSection)
    SetSITErrorMessage("SignalProbe should only be called between ScheduleTasks and PostOutputs",
                       1);
  if ((*len > 1) && (numsigs > 0)) {
    value[count++] = sigindices[0];
    value[count++] = 0;
  }

  for (i = 1; (i < numsigs) && (count < *len); i++) {
    idx = sigindices[i];
    if (idx < 0)
      break;
    if (idx < NI_SigListSize) {
      if (NI_SigList[idx].baseaddr == VIRTUAL_SIG) {
        for (j = 0; j < 2; j++) {
          long vidx = NI_VirtualBlockSources[NI_SigList[idx].addr][j];
          long voff = NI_VirtualBlockOffsets[NI_SigList[idx].addr][j];
          long vlen = NI_VirtualBlockLengths[NI_SigList[idx].addr][j];
          if (vidx == -1)
            break;
          NI_ProbeOneSignal(vidx, value, *len, &count, voff, vlen);
        }
      } else
        NI_ProbeOneSignal(idx, value, *len, &count, 0, -1);
    }
  }

  *len = count;
  return count;
}

int NI_InitParamDoubleBuf(void)
{
  return NI_OK;
}

int NI_InitializeParamStruct(void)
{
  return NI_OK;
}

DLL_EXPORT long NIRT_SetParameter(long index, long subindex, double value)
{
  return NI_ERROR;
}

DLL_EXPORT long NIRT_GetParameter(long index, long subindex, double *value)
{
  return NI_ERROR;
}

DLL_EXPORT long NIRT_GetVectorParameter(unsigned long index, double* paramvalues,
  unsigned long paramlength)
{
  return NI_ERROR;
}

DLL_EXPORT long NIRT_SetVectorParameter(unsigned long index, const double
  * paramvalues, unsigned long paramlength)
{
  return NI_ERROR;
}

DLL_EXPORT long NIRT_SetScalarParameterInline(unsigned long index, unsigned long
  subindex, double paramvalue)
{
  return NI_ERROR;
}

DLL_EXPORT long NIRT_GetSimState(long* numContStates, char* contStatesNames,
  double* contStates, long* numDiscStates, char* discStatesNames, double
  * discStates, long* numClockTicks, char* clockTicksNames, long* clockTicks)
{
  long count, idx;
  if (numContStates && numDiscStates && numClockTicks) {
    if (*numContStates < 0 || *numDiscStates < 0 || *numClockTicks < 0) {
      *numContStates = 0;
      *numDiscStates = 502;
      *numClockTicks = NUMST - TID01EQ;
      return NI_OK;
    }
  }

  if (discStates && discStatesNames) {
    idx = 0;
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_VSP1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_VSP1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_VSP2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_VSP2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosXRight_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosXRight_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_VSP1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_VSP1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Start_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Start_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_VSP2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_VSP2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_BT_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_BT_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.omega_VSP1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.omega_VSP1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.omega_VSP2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.omega_VSP2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosYRight_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosYRight_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.L2_continuous_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.L2_continuous_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Scope1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Scope1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.R2_continuous_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.R2_continuous_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Scope2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Scope2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK2, 0, 6, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK2");
    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_VSP1_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_VSP1_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_VSP2_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_VSP2_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosXRight_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosXRight_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_VSP1_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_VSP1_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.Start_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.Start_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_VSP2_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_VSP2_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_BT_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_BT_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.omega_VSP1_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.omega_VSP1_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.omega_VSP2_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.omega_VSP2_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosYRight_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosYRight_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.L2_continuous_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.L2_continuous_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.Scope1_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.Scope1_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.R2_continuous_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.R2_continuous_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.Scope2_DWORK2, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.Scope2_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK1, count, 17, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK1");
    }

    for (count = 0; count < 65; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK3, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK3");
    }
  }

  if (clockTicks && clockTicksNames) {
    clockTicks[0] = S->Timing.clockTick0;
    strcpy(clockTicksNames, "clockTick0");
  }

  return NI_OK;
}

DLL_EXPORT long NIRT_SetSimState(double* contStates, double* discStates, long
  * clockTicks)
{
  long count, idx;
  if (discStates) {
    idx = 0;
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_VSP1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_VSP2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXRight_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_VSP1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Start_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_VSP2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_BT_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.omega_VSP1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.omega_VSP2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYRight_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.L2_continuous_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Scope1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.R2_continuous_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Scope2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK2, 0,
       discStates[idx++], 6, 0);
    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_VSP1_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_VSP2_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXRight_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_VSP1_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Start_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_VSP2_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_BT_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.omega_VSP1_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.omega_VSP2_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYRight_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.L2_continuous_DWORK2,
        count, discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Scope1_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.R2_continuous_DWORK2,
        count, discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Scope2_DWORK2, count,
        discStates[idx++], 17, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType
        (&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK1, count,
         discStates[idx++], 17, 0);
    }

    for (count = 0; count < 65; count++) {
      NIRT_SetValueByDataType
        (&ctrl_sixaxis2thruster_DW.NIVeriStandSignalProbe_DWORK3, count,
         discStates[idx++], 18, 0);
    }
  }

  if (clockTicks) {
    S->Timing.clockTick0 = clockTicks[0];
  }

  return NI_OK;
}

#endif                                 // of NI_ROOTMODEL_ctrl_sixaxis2thruster
