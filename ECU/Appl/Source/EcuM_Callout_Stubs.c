/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: EcuM
 *           Program: 
 *          Customer: 
 *       Expiry Date: Not restricted
 *    License Scope : The usage is restricted to PAI3524
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Callout_Stubs.c
 *   Generation Time: 2022-04-29 13:17:43
 *           Project: LightControl - Version 1.0
 *          Delivery: PAI3524
 *      Tool Version: DaVinci Configurator Classic (beta) 5.25.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Version>                           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*********************************************************************************************************************
    INCLUDES
 *********************************************************************************************************************/
#define ECUM_CALLOUT_STUBS_SOURCE
#include "EcuM.h"

#define ECUM_PRIVATE_CFG_INCLUDE
#include "EcuM_PrivateCfg.h"
#undef ECUM_PRIVATE_CFG_INCLUDE /* PRQA S 0841 */ /* MD_EcuM_0841 */



/**********************************************************************************************************************
 *  All configured EcuM Wakeup Sources (as bitmasks) for usage in Callouts
 *********************************************************************************************************************/
/*
 * ECUM_WKSOURCE_NONE           (EcuM_WakeupSourceType)(0x00000000u) 
 * ECUM_WKSOURCE_ALL_SOURCES    (EcuM_WakeupSourceType)(~((EcuM_WakeupSourceType)0x00UL)) 
 * ECUM_WKSOURCE_POWER          (EcuM_WakeupSourceType)(1u) 
 * ECUM_WKSOURCE_RESET          (EcuM_WakeupSourceType)(2u) 
 * ECUM_WKSOURCE_INTERNAL_RESET (EcuM_WakeupSourceType)(4u) 
 * ECUM_WKSOURCE_INTERNAL_WDG   (EcuM_WakeupSourceType)(8u) 
 * ECUM_WKSOURCE_EXTERNAL_WDG   (EcuM_WakeupSourceType)(16u) 
 * ECUM_WKSOURCE_CAN00_f26020e5 (EcuM_WakeupSourceType)(32u) 
 */

/**********************************************************************************************************************
 *  Additional configured User includes
 *********************************************************************************************************************/
#include "BswM.h" 
#include "Can.h" 
#include "CanIf.h" 
#include "CanNm.h" 
#include "CanSM_EcuM.h" 
#include "Com.h" 
#include "ComM.h" 
#include "PduR.h" 
#include "Adc.h" 
#include "Rte.h" 
#include "Fls.h" 
#include "Mcu.h" 
#include "Nm.h" 
#include "Det.h" 
#include "Dem.h" 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>                          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*TODO: wge: Rte_Main.h is not added by EcuM to the include-list, why so? */
#include "Rte_Main.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  CALLOUT FUNCTIONS
 *********************************************************************************************************************/
#define ECUM_START_SEC_CODE
#include "EcuM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */




/**********************************************************************************************************************
 *  GENERIC CALLOUTS
 *********************************************************************************************************************/

FUNC(void, ECUM_CODE) EcuM_ErrorHook(Std_ReturnType reason) /* COV_ECUM_CALLOUT */ /* PRQA S 3206 */ /* MD_EcuM_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_ErrorHook>                         DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)reason;     /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_ErrorHook() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_ErrorHook() */




/**********************************************************************************************************************
 *  CALLOUTS FROM THE SHUTDOWN PHASE
 *********************************************************************************************************************/



FUNC(void, ECUM_CODE) EcuM_OnGoOffOne(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_OnGoOffOne>                        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_OnGoOffOne() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_OnGoOffOne() */

FUNC(void, ECUM_CODE) EcuM_ShutdownOS(Std_ReturnType ErrCode)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_ShutdownOS>                        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_ShutdownOS() */
#if ( ECUM_NUMBER_OF_CORES > 1 )
  ShutdownAllCores(ErrCode);
#else
  ShutdownOS(ErrCode);
#endif
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_ShutdownOS() */

FUNC(void, ECUM_CODE) EcuM_OnGoOffTwo(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_OnGoOffTwo>                        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_OnGoOffTwo() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_OnGoOffTwo() */

FUNC(void, ECUM_CODE) EcuM_AL_SwitchOff(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_SwitchOff>                      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_AL_SwitchOff() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_AL_SwitchOff() */

FUNC(void, ECUM_CODE) EcuM_AL_Reset(EcuM_ResetType Reset) /* PRQA S 3206 */ /* MD_EcuM_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_Reset>                          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)Reset;  /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_AL_Reset() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_AL_Reset() */



/**********************************************************************************************************************
 *  CALLOUTS FROM THE STARTUP PHASE
 *********************************************************************************************************************/


/**********************************************************************************************************************
* EcuM_AL_DriverInitZero
**********************************************************************************************************************/
FUNC(void, ECUM_CODE) EcuM_AL_DriverInitZero(void) 
{
  BswM_InitMemory();
  Can_InitMemory();
  CanIf_InitMemory();
  CanNm_InitMemory();
  CanSM_InitMemory();
  Com_InitMemory();
  ComM_InitMemory();
  PduR_InitMemory();
  Adc_InitMemory();
  Rte_InitMemory();
  Fls_InitMemory();
  Mcu_InitMemory();
  Nm_InitMemory();
  Det_InitMemory();
  Dem_InitMemory();
  Det_Init( Det_Config_Ptr );
  Dem_PreInit( Dem_Config_Ptr );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_DriverInitZero>                 DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_AL_DriverInitZero() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
* EcuM_AL_DriverInitOne
**********************************************************************************************************************/
FUNC(void, ECUM_CODE) EcuM_AL_DriverInitOne(void) 
{

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_DriverInitOne>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)ConfigPtr; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_AL_DriverInitOne() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#if (ECUM_SLEEPMODELIST == STD_ON)
/**********************************************************************************************************************
* EcuM_AL_DriverRestartList
**********************************************************************************************************************/
FUNC(void, ECUM_CODE) EcuM_AL_DriverRestartList(void) 
{

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_DriverRestartList>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Add implementation of EcuM_AL_DriverRestartList  */

return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#endif




FUNC(void, ECUM_CODE) EcuM_StartOS(AppModeType appMode)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_StartOS>                           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_StartOS() */
#if ( ECUM_NUMBER_OF_CORES > 1 )
  uint8 coreId;
  StatusType status;
  if(GetCoreID()==ECUM_CORE_ID_MASTER)
  {
    for(coreId=0; coreId < ECUM_NUMBER_OF_CORES; coreId++)
    {
      if(coreId!=ECUM_CORE_ID_MASTER)
      {
        StartCore(coreId, &status);
  	  }
    }
  }
#endif

  /* if multi-core, only call this if we are the master core */
  if (GetCoreID() == OS_CORE_ID_MASTER)
  {
    Os_InitMemory();
    Os_Init();
  }


  /* Start OS must be called for each core */
  StartOS(appMode);

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_StartOS() */

FUNC(void, ECUM_CODE) EcuM_AL_SetProgrammableInterrupts(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_SetProgrammableInterrupts>      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_AL_SetProgrammableInterrupts() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_AL_SetProgrammableInterrupts() */

#if((ECUM_CONFIGURATION_VARIANT == ECUM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE) || (ECUM_POSTBUILD_VARIANT_SUPPORT == STD_ON))
FUNC(EcuM_GlobalConfigRefType, ECUM_CODE) EcuM_DeterminePbConfiguration(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_DeterminePbConfiguration>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_DeterminePbConfiguration() */
  
  return &EcuM_GlobalConfigRoot;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_DeterminePbConfiguration() */
#endif

#if (ECUM_ALARM_CLOCK_PRESENT == STD_ON)
FUNC(void, ECUM_CODE) EcuM_GptStartClock(Gpt_ChannelType GptChannel, Gpt_ModeType Mode, Gpt_ValueType Value)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GptStartClock>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_GptStartClock() */

  Gpt_EnableNotification(GptChannel);
  Gpt_StartTimer(GptChannel, Value);
  Gpt_SetMode(Mode);

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_GptStartClock() */
#endif




/**********************************************************************************************************************
 *  CALLOUTS FROM THE SLEEP PHASE
 *********************************************************************************************************************/



#if(ECUM_SLAVE_CORE_HANDLING == STD_ON)
FUNC(void, ECUM_CODE) EcuM_WaitForSlaveCores(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_WaitForSlaveCores>                 DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_WaitForSlaveCores() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_WaitForSlaveCores() */
#endif

#if(ECUM_SLEEPMODELIST == STD_ON)

FUNC(void, ECUM_CODE) EcuM_GenerateRamHash(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GenerateRamHash>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_GenerateRamHash() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_GenerateRamHash() */

FUNC(uint8, ECUM_CODE) EcuM_CheckRamHash(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_CheckRamHash>                      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_CheckRamHash() */
  
  return (1u);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_CheckRamHash() */

FUNC(void, ECUM_CODE) EcuM_McuSetMode(Mcu_ModeType McuMode)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_McuSetMode>                        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_McuSetMode() */
  Mcu_SetMode(McuMode);
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_McuSetMode() */

#if(ECUM_POLLINGOFSLEEPMODELIST == STD_ON)
FUNC(void, ECUM_CODE) EcuM_SleepActivity(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_SleepActivity>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_SleepActivity() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_SleepActivity() */
#endif

FUNC(void, ECUM_CODE) EcuM_EnableWakeupSources(EcuM_WakeupSourceType wakeupSource) /* PRQA S 3206 */ /* MD_EcuM_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_EnableWakeupSources>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)wakeupSource; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_EnableWakeupSources() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_EnableWakeupSources() */

FUNC(void, ECUM_CODE) EcuM_DisableWakeupSources(EcuM_WakeupSourceType wakeupSource) /* PRQA S 3206 */ /* MD_EcuM_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_DisableWakeupSources>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)wakeupSource; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_DisableWakeupSources() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_DisableWakeupSources() */
#endif

FUNC(void, ECUM_CODE) EcuM_CheckWakeup(EcuM_WakeupSourceType wakeupSource) /* COV_ECUM_CALLOUT */
{
#if (ECUM_CHECKWAKEUPTIMEOFWAKEUPSOURCELIST == STD_ON)
  /* Do not remove the following function call. It is necessary for the CheckWakeup timeout mechanism */
  EcuM_StartCheckWakeup(wakeupSource);
#endif

#if (ECUM_ALARM_CLOCK_PRESENT == STD_ON)
  if((ECUM_ALARM_WKSOURCE & wakeupSource) != 0u)
  {
    EcuM_AlarmCheckWakeup();
  }
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_CheckWakeup>                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)wakeupSource; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_CheckWakeup() */

#if (CANIF_WAKEUP_SUPPORT == STD_ON)
  if (0 != (ECUM_WKSOURCE_CAN00_f26020e5 & wakeupSource))
  {
    CanIf_CheckWakeup(ECUM_WKSOURCE_CAN00_f26020e5);
  }
#endif

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_CheckWakeup() */

#if ((ECUM_ALARM_CLOCK_PRESENT == STD_ON) && (ECUM_SLEEPMODELIST == STD_ON))
FUNC(void, ECUM_CODE) EcuM_GptSetNormal(Gpt_ChannelType GptChannel, Gpt_ModeType Mode)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GptSetNormal>                      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_GptSetNormal() */

  Gpt_EnableNotification(GptChannel);
  Gpt_SetMode(Mode);

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_GptSetNormal() */

FUNC(void, ECUM_CODE) EcuM_GptSetSleep(Gpt_ChannelType GptChannel, Gpt_ModeType Mode)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GptSetSleep>                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /* Add implementation of EcuM_GptSetSleep() */

  Gpt_EnableWakeup(GptChannel);
  Gpt_SetMode(Mode);

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_GptSetSleep() */
#endif



/**********************************************************************************************************************
 *  CALLOUTS FROM THE UP PHASE
 *********************************************************************************************************************/

#if(ECUM_VALIDATIONTIMEOFWAKEUPSOURCELIST == STD_ON)

FUNC(void, ECUM_CODE) EcuM_StartWakeupSources(EcuM_WakeupSourceType wakeupSource) /* PRQA S 3206 */ /* MD_EcuM_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_StartWakeupSources>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)wakeupSource; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_StartWakeupSources() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_StartWakeupSources() */

FUNC(void, ECUM_CODE) EcuM_StopWakeupSources(EcuM_WakeupSourceType wakeupSource) /* PRQA S 3206 */ /* MD_EcuM_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_StopWakeupSources>                 DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)wakeupSource; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_StopWakeupSources() */
  
  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_StopWakeupSources() */

FUNC(void, ECUM_CODE) EcuM_CheckValidation(EcuM_WakeupSourceType wakeupSource)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_CheckValidation>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)wakeupSource; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_CheckValidation() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_CheckValidation() */

#endif



#if (ECUM_BSW_ERROR_HOOK == STD_ON)
/**********************************************************************************************************************
 *  Errorhook for BSW errors during initialization
 *********************************************************************************************************************/
FUNC(void, ECUM_CODE) EcuM_BswErrorHook(uint16 BswModuleId, uint8 ErrorId) /* PRQA S 3206 */ /* MD_EcuM_3206 */ /* COV_ECUM_CALLOUT */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_BswErrorHook>                      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)BswModuleId;  /* PRQA S 3112 */ /* MD_EcuM_3112 */
  (void)ErrorId;      /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_BswErrorHook() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
} /* End of EcuM_BswErrorHook() */
#endif

#define ECUM_STOP_SEC_CODE
#include "EcuM_MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#if 0
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_AL_DriverRestart>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #if (ECUM_USE_DUMMY_STATEMENT == STD_ON)
  /* dummy assignment to prevent compiler warnings on most of the compilers. */
  (void)ConfigPtr; /* PRQA S 3112 */ /* MD_EcuM_3112 */
#endif
  /* Add implementation of EcuM_AL_DriverRestart() */

  return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#endif


/**********************************************************************************************************************
 *  END OF FILE: ECUM_CALLOUT_STUBS.C
 *********************************************************************************************************************/


