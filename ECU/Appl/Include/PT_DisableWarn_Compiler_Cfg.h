/**********************************************************************************************************************
*  START OF FILE: PT_DisableWarn_Compiler_Cfg.h
*********************************************************************************************************************/

/**********************************************************************************************************************
*  Deactivate warnings which are accepted and documented in Products.BSW.MICROSAR4.ApplicationNotes:AN-ISC-8-1184_Compiler_Warnings START
*********************************************************************************************************************/

/* disable the following warning: warning C4214: nonstandard extension used : bit field types other than int */
#pragma warning( disable : 4214 )

/* disable the following warning: warning C4127: conditional expression is constant */
#pragma warning( disable : 4127 )

/* disable the following warning: warning C4296: '>' : expression is always false */
#pragma warning( disable : 4296 )

/* disable the following warning: warning C4820: deactivates padding byte warnings */
#pragma warning( disable : 4820 )

/* disable the following warning: warning C4619: deactivates warnings about unnecessary warning deactivations */
#pragma warning( disable : 4619 )

/* disable the following warning: warning C4206: deactivates warning about nonstandard extension used : translation unit is empty */
#pragma warning( disable : 4206 )

/* disable the following warning: warning C4210: deactivates warning about nonstandard extension used : function given file scope */
#pragma warning( disable : 4210 )


/* If TGF warnings shall not be disabled set PT_DISABLEWARN_COMPILER_CFG_NODISABLETGF before including this header */

#ifndef PT_DISABLEWARN_COMPILER_CFG_NODISABLETGF
#if defined (TGFECUMCTRL_H) || defined (TSITGF_GENERIC_CALLBACK_H) || defined (_CRT_SECURE_NO_DEPRECATE) || defined (_TSIIL_ASRCOM_H_) || defined (TESTGENERATORFRAMEWORK_SW_MAJOR_VERSION) || defined (_BRSTCC_H_) || defined (TSIDCM_SOURCE) || defined (_CRT_SECURE_NO_DEPRECATE) || defined (TSIDCM_C)
/* Hint: TSIDCM_C needs to be defined with additional file including TsiDcm.c */

/* include CANoeApi.h for TGF */
#include "CANoeApi.h"

/* Warning to Error not required for TGF or BRS*/

/* disable warning created by TGF or BRS to reduce the warnings only relevant for the product test */

/* disable the following warning:   warning C4005: 'XXXXXX' : macro redefinition */
#pragma warning( disable : 4005 )
#define PT_WARN2ERR_COMPILER_CFG_4005_DISABLE

/* disable the following warning:  warning C4100: 'XXXXX' : unreferenced formal parameter */
#pragma warning( disable : 4100 )
#define PT_WARN2ERR_COMPILER_CFG_4100_DISABLE

/* disable the following warning:  warning C4310: cast truncates constant value */
#pragma warning( disable : 4310 )
#define PT_WARN2ERR_COMPILER_CFG_4310_DISABLE

/* disable the following warning:  warning C4244: '=' : conversion from 'YYY' to 'xxx', possible loss of data */
#pragma warning( disable : 4244 )
#define PT_WARN2ERR_COMPILER_CFG_4244_DISABLE

#endif
#endif

/**********************************************************************************************************************
*  Deactivate warnings which are accepted and documented in Products.BSW.MICROSAR4.ApplicationNotes:AN-ISC-8-1184_Compiler_Warnings END
*********************************************************************************************************************/

/**********************************************************************************************************************
*  END OF FILE: PT_DisableWarn_Compiler_Cfg.h
*********************************************************************************************************************/

