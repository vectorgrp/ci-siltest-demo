/*
 * File: Compiler.h
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

#ifndef RTW_HEADER_Compiler_h_
#define RTW_HEADER_Compiler_h_

/*
 *
 * This file contains dummy implementations of the AUTOSAR functions
 * used by this model for testing the code generated from Simulink.
 * Simulink invokes the generated code through its S-Function API.
 * Note that this file is replaced with the real implementation
 * when deploying the generated code outside of Simulink.
 *
 */

/*
 *
 * This header file specifies macros for the abstraction of compiler specific
 * keywords used for addressing data and code within declarations and
 * definitions.  This is used to overcome problems caused by the limited 16 bit
 * addressing range.
 *
 * For SIL/PIL macros behave as identity operators.
 *
 */

/* Compiler Abstractions for PC */
#define FUNC(type, memclass)           type
#define P2VAR(ptrtype, memclass, ptrclass) ptrtype *
#define P2CONST(ptrtype, memclass, ptrclass) const ptrtype *
#define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype * const
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype * const
#define CONST(consttype, memclass)     const consttype
#define VAR( type, memclass )          type
#endif                                 /* RTW_HEADER_Compiler_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
