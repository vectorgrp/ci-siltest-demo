/*
 * File: LightCtrl_SWC.h
 *
 * Code generated for Simulink model 'LightCtrl_SWC'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Mon Mar 09 16:17:33 2015
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LightCtrl_SWC_h_
#define RTW_HEADER_LightCtrl_SWC_h_
#ifndef LightCtrl_SWC_COMMON_INCLUDES_
# define LightCtrl_SWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LightCtrl.h"
#endif                                 /* LightCtrl_SWC_COMMON_INCLUDES_ */

#include "LightCtrl_SWC_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((void*) 0)
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct tag_DW_LightCtrl_SWC_T {
  real_T HysteresisTimer;              /* '<S1>/Chart' */
  uint8_T is_active_c1_LightCtrl_SWC;  /* '<S1>/Chart' */
  uint8_T is_c1_LightCtrl_SWC;         /* '<S1>/Chart' */
  uint8_T is_AutoMode;                 /* '<S1>/Chart' */
} DW_LightCtrl_SWC_T;

/* Parameters (auto storage) */
struct P_LightCtrl_SWC_T_ {
  real_T LightIntensityToOff_Value;    /* Expression: 70
                                        * Referenced by: '<S1>/LightIntensityToOff'
                                        */
  real_T LightIntensityToOn_Value;     /* Expression: 60
                                        * Referenced by: '<S1>/LightIntensityToOn'
                                        */
  real_T HysteresisTimeToOff_Value;    /* Expression: 3
                                        * Referenced by: '<S1>/HysteresisTimeToOff'
                                        */
  real_T HysteresisTimeToOn_Value;     /* Expression: 2
                                        * Referenced by: '<S1>/HysteresisTimeToOn'
                                        */
  real_T CycleTime_Value;              /* Expression: 0.01
                                        * Referenced by: '<S1>/CycleTime'
                                        */
};

/* Block parameters (auto storage) */
extern P_LightCtrl_SWC_T LightCtrl_SWC_P;

/* Block states (auto storage) */
extern DW_LightCtrl_SWC_T LightCtrl_SWC_DW;

/* Model step and init functions */
extern void LightCtrl(void);
extern void LightCtrl_Init(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LightCtrl_SWC'
 * '<S1>'   : 'LightCtrl_SWC/BC'
 * '<S2>'   : 'LightCtrl_SWC/BC/Chart'
 */
#endif                                 /* RTW_HEADER_LightCtrl_SWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
