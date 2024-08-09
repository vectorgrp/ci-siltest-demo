/*
 * File: LightCtrl_SWC.c
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

#include "LightCtrl_SWC.h"
#include "LightCtrl_SWC_private.h"

/* Named constants for Chart: '<S1>/Chart' */
#define LightCtrl_SWC_IN_AutoMode      ((uint8_T)1U)
#define LightCtrl_SWC_IN_EnterAutoMode ((uint8_T)1U)
#define LightCtrl_SWC_IN_LightOff      ((uint8_T)2U)
#define LightCtrl_SWC_IN_LightOn       ((uint8_T)3U)
#define LightCtrl_SWC_IN_LightToOff    ((uint8_T)4U)
#define LightCtrl_SWC_IN_LightToOn     ((uint8_T)5U)
#define LightCtrl_SWC_IN_OffMode       ((uint8_T)2U)
#define LightCtrl_SWC_IN_OnMode        ((uint8_T)3U)
#define LightCtrl_SW_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Block states (auto storage) */
DW_LightCtrl_SWC_T LightCtrl_SWC_DW;

/* Model step function */
void LightCtrl(void)
{
  uint8_T Input_LightSwitch_local_storage;
  uint16_T rtb_LightIntensity_LightIntensi;

  /* Inport: '<Root>/Input_LightSwitch' incorporates:
   *  Inport: '<Root>/Input_LightSwitch'
   */
  Rte_Read_Input_LightSwitch(&Input_LightSwitch_local_storage);

  /* FunctionCaller: '<Root>/LightIntensity_LightIntensity' */
  Rte_Call_LightIntensity_LightIntensity(&rtb_LightIntensity_LightIntensi);


  /* Outputs for Atomic SubSystem: '<Root>/BC' */
  /* Chart: '<S1>/Chart' incorporates:
   *  Constant: '<S1>/CycleTime'
   *  Constant: '<S1>/HysteresisTimeToOff'
   *  Constant: '<S1>/HysteresisTimeToOn'
   *  Constant: '<S1>/LightIntensityToOff'
   *  Constant: '<S1>/LightIntensityToOn'
   */
  /* Gateway: BC/Chart */
  /* During: BC/Chart */
  /**/
  // rtb_LightIntensity_LightIntensi = 0;

  if (LightCtrl_SWC_DW.is_active_c1_LightCtrl_SWC == 0U) {
    /* Entry: BC/Chart */
    LightCtrl_SWC_DW.is_active_c1_LightCtrl_SWC = 1U;

    /* Entry Internal: BC/Chart */
    /* Transition: '<S2>:37' */
    LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OffMode;
  } else {
    switch (LightCtrl_SWC_DW.is_c1_LightCtrl_SWC) {
     case LightCtrl_SWC_IN_AutoMode:
      /* During 'AutoMode': '<S2>:34' */
      if (Input_LightSwitch_local_storage == 1) {
        /* Transition: '<S2>:39' */
        /* Exit Internal 'AutoMode': '<S2>:34' */
        LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SW_IN_NO_ACTIVE_CHILD;
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OnMode;
      } else if (Input_LightSwitch_local_storage == 0) {
        /* Transition: '<S2>:41' */
        /* Exit Internal 'AutoMode': '<S2>:34' */
        LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SW_IN_NO_ACTIVE_CHILD;
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OffMode;
      } else {
        switch (LightCtrl_SWC_DW.is_AutoMode) {
         case LightCtrl_SWC_IN_EnterAutoMode:
          /* During 'EnterAutoMode': '<S2>:30' */
          if (rtb_LightIntensity_LightIntensi >
              LightCtrl_SWC_P.LightIntensityToOff_Value) {
            /* Transition: '<S2>:32' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOff;
          } else {
            /* Transition: '<S2>:33' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOn;
          }
          break;

         case LightCtrl_SWC_IN_LightOff:
          /* During 'LightOff': '<S2>:2' */
          if (rtb_LightIntensity_LightIntensi <
              LightCtrl_SWC_P.LightIntensityToOn_Value) {
            /* Transition: '<S2>:19' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightToOn;
          } else {
            /* Outport: '<Root>/Output_HeadLight' */
            /* Transition: '<S2>:29' */
            Rte_Write_Output_HeadLight(false);
            LightCtrl_SWC_DW.HysteresisTimer = 0.0;
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOff;
          }
          break;

         case LightCtrl_SWC_IN_LightOn:
          /* During 'LightOn': '<S2>:1' */
          if (rtb_LightIntensity_LightIntensi >
              LightCtrl_SWC_P.LightIntensityToOff_Value) {
            /* Transition: '<S2>:20' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightToOff;
          } else {
            /* Outport: '<Root>/Output_HeadLight' */
            /* Transition: '<S2>:28' */
            Rte_Write_Output_HeadLight(true);
            LightCtrl_SWC_DW.HysteresisTimer = 0.0;
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOn;
          }
          break;

         case LightCtrl_SWC_IN_LightToOff:
          /* During 'LightToOff': '<S2>:3' */
          if (rtb_LightIntensity_LightIntensi <=
              LightCtrl_SWC_P.LightIntensityToOff_Value) {
            /* Transition: '<S2>:23' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOn;
          } else if (LightCtrl_SWC_DW.HysteresisTimer >=
                     LightCtrl_SWC_P.HysteresisTimeToOff_Value) {
            /* Transition: '<S2>:6' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOff;
          } else {
            /* Transition: '<S2>:25' */
            LightCtrl_SWC_DW.HysteresisTimer += LightCtrl_SWC_P.CycleTime_Value;
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightToOff;
          }
          break;

         default:
          /* During 'LightToOn': '<S2>:4' */
          if (rtb_LightIntensity_LightIntensi >=
              LightCtrl_SWC_P.LightIntensityToOn_Value) {
            /* Transition: '<S2>:22' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOff;
          } else if (LightCtrl_SWC_DW.HysteresisTimer >=
                     LightCtrl_SWC_P.HysteresisTimeToOn_Value) {
            /* Transition: '<S2>:18' */
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightOn;
          } else {
            /* Transition: '<S2>:24' */
            LightCtrl_SWC_DW.HysteresisTimer += LightCtrl_SWC_P.CycleTime_Value;
            LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_LightToOn;
          }
          break;
        }
      }
      break;

     case LightCtrl_SWC_IN_OffMode:
      /* During 'OffMode': '<S2>:35' */
      if (Input_LightSwitch_local_storage == 2) {
        /* Transition: '<S2>:38' */
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_AutoMode;

        /* Entry Internal 'AutoMode': '<S2>:34' */
        /* Transition: '<S2>:31' */
        LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_EnterAutoMode;
      } else if (Input_LightSwitch_local_storage == 1) {
        /* Transition: '<S2>:45' */
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OnMode;
      } else {
        /* Outport: '<Root>/Output_HeadLight' */
        /* Transition: '<S2>:43' */
        Rte_Write_Output_HeadLight(false);
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OffMode;
      }
      break;

     default:
      /* During 'OnMode': '<S2>:36' */
      if (Input_LightSwitch_local_storage == 0) {
        /* Transition: '<S2>:40' */
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OffMode;
      } else if (Input_LightSwitch_local_storage == 2) {
        /* Transition: '<S2>:42' */
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_AutoMode;

        /* Entry Internal 'AutoMode': '<S2>:34' */
        /* Transition: '<S2>:31' */
        LightCtrl_SWC_DW.is_AutoMode = LightCtrl_SWC_IN_EnterAutoMode;
      } else {
        /* Outport: '<Root>/Output_HeadLight' */
        /* Transition: '<S2>:44' */
        Rte_Write_Output_HeadLight(true);
        LightCtrl_SWC_DW.is_c1_LightCtrl_SWC = LightCtrl_SWC_IN_OnMode;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */
  /* End of Outputs for SubSystem: '<Root>/BC' */
}

/* Model initialize function */
void LightCtrl_Init(void)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/BC' */
  /* InitializeConditions for Outport: '<Root>/Output_HeadLight' incorporates:
   *  InitializeConditions for Chart: '<S1>/Chart'
   */
  Rte_Write_Output_HeadLight(false);

  /* End of InitializeConditions for SubSystem: '<Root>/BC' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
