/*
 * File: Rte_LightCtrl.h
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

#ifndef RTW_HEADER_Rte_LightCtrl_h_
#define RTW_HEADER_Rte_LightCtrl_h_

/*
 *
 * This file contains dummy implementations of the AUTOSAR functions
 * used by this model for testing the code generated from Simulink.
 * Simulink invokes the generated code through its S-Function API.
 * Note that this file is replaced with the real implementation
 * when deploying the generated code outside of Simulink.
 *
 */
#include <string.h>
#include "Rte_Type.h"
#include "Compiler.h"
#define Rte_Write_Output_HeadLight     Rte_Write_LightCtrl_Output_HeadLight

void Rte_Write_Output_HeadLight(boolean_T u);

#define Rte_Read_Input_LightSwitch     Rte_Read_LightCtrl_Input_LightSwitch

void Rte_Read_Input_LightSwitch(uint8_T* u);

#define Rte_Write_Output_HeadLight     Rte_Write_LightCtrl_Output_HeadLight

void Rte_Write_Output_HeadLight(boolean_T u);

#define Rte_Call_LightIntensity_LightIntensity Rte_Call_LightCtrl_LightIntensity_LightIntensity

void Rte_Call_LightIntensity_LightIntensity(uint16_T *io_signal);

#endif                                 /* RTW_HEADER_Rte_LightCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
