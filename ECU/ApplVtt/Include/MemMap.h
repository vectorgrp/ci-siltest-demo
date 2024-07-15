
/* Add additional memory mapping defines for each of you configured CDDs here. */

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

/* FAST CONST sections */

/* Postbuild CFG CONST sections */

/* Root table for postbuild data */

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

/* VAR NOINIT sections */

/* VAR ZERO INIT sections */

/* VAR FAST INIT sections */

/* VAR FAST NOINIT sections */

/* VAR FAST ZERO INIT sections */

/**********************************************************************************************************************
 *  Cdd_AsrCdd END
 *********************************************************************************************************************/
/* Section depends on OS Applications */
#if defined (DEM_START_SEC_0_VAR_ZERO_INIT_UNSPECIFIED)
#undef DEM_START_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_0_VAR_ZERO_INIT_UNSPECIFIED)
#undef DEM_STOP_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


#if defined (BSWM_LCFG_SOURCE) && defined (BSWM_START_SEC_CODE)
/* workaround for ESCAN00101695: Compiler error: "BswM_Lcfg.c:1543: macro `FrTrcv_30_Tja1080_Init' used without args " <alm:entity?guid=ESCAN-9A5DFCC2-E2FD-48E4-A07F-FA9C96E194EB> */
#if defined (FrTrcv_30_Tja1080_Init)
#undef FrTrcv_30_Tja1080_Init
#define FrTrcv_30_Tja1080_Init() FrTrcv_30_Tja1080_Init_Vtt()
#endif
#endif


#include "_MemMap.h"
