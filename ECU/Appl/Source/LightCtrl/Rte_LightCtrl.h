/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2015 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_LightCtrl.h
 *        Config:  D:/vfs/VIP/release/1.0/Projects_Source/VIP/DEMOs/LightControl_ASR4.R13/LightControl.dpa
 *     SW-C Type:  LightCtrl
 *  Generated at:  Mon Aug 17 15:22:08 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.8.0
 *                 RTE Core Version 1.8.0
 *       License:  Unlimited license CBD0000000
 *
 *   Description:  Application header file for SW-C <LightCtrl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_LIGHTCTRL_H
# define _RTE_LIGHTCTRL_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_LightCtrl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_LightCtrl
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_LightCtrl, RTE_CONST, RTE_CONST) Rte_Inst_LightCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_LightCtrl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Input_LightSwitch (0U)
# define Rte_InitValue_Output_HeadLight (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LightCtrl_Input_LightSwitch(P2VAR(uint8, AUTOMATIC, RTE_LIGHTCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LightCtrl_Output_HeadLight(Boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_LightCtrl_LightIntensity_LightIntensity(P2VAR(uint16, AUTOMATIC, RTE_LIGHTCTRL_APPL_VAR) io_signal); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_Input_LightSwitch Rte_Read_LightCtrl_Input_LightSwitch


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Output_HeadLight Rte_Write_LightCtrl_Output_HeadLight


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_LightIntensity_LightIntensity Rte_Call_LightCtrl_LightIntensity_LightIntensity




# define LightCtrl_START_SEC_CODE
# include "LightCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: LightCtrl
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Input_LightSwitch(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Output_HeadLight(Boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_LightIntensity_LightIntensity(uint16 *io_signal)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_LightCtrl LightCtrl
FUNC(void, LightCtrl_CODE) LightCtrl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define LightCtrl_STOP_SEC_CODE
# include "LightCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_LIGHTCTRL_H */
