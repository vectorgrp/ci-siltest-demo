/**********************************************************************************************************************
*  START OF FILE: PT_Warn2Err_Compiler_Cfg.h
*********************************************************************************************************************/

/**********************************************************************************************************************
*  Warning to error handling. The following warnings are not accepted on product level and are set to error. START
*********************************************************************************************************************/

/* Each warning to error can be separatly disabled by defining PT_WARN2ERR_COMPILER_CFG_<number>_DISABLE before including this header */

#ifndef PT_WARN2ERR_COMPILER_CFG_4005_DISABLE
/* make the following warning an error: ' warning C4005: 'XXXXXX' : macro redefinition'  */
#pragma warning( error : 4005 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4013_DISABLE
/* make the following warning an error: 'warning C4013: 'XXXXXX' undefined; assuming extern returning int'  */
#pragma warning( error : 4013 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4018_DISABLE
#pragma warning( error : 4018 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4020_DISABLE
/* make the following warning an error: warning C4020: too many actual parameters */
#pragma warning( error : 4020 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4027_DISABLE
#pragma warning( error : 4027 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4028_DISABLE
/* make the following warning an error: warning C4028: formal parameter Y different from declaration */
#pragma warning( error : 4028 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4029_DISABLE
/* make the following warning an error: warning C4029: declared formal parameter list different from definition */
#pragma warning( error : 4029 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4030_DISABLE
/* make the following warning an error: warning C4030: first formal parameter list longer than the second list */
#pragma warning( error : 4030 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4057_DISABLE
#pragma warning( error : 4057 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4087_DISABLE
/* make the following warning an error: warning C4087: 'XXXXXXX' : declared with 'void' parameter list */
#pragma warning( error : 4087 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4090_DISABLE
/* make the following warning an error: warning C4090: 'function' : different 'const' qualifiers */
#pragma warning( error : 4090 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4098_DISABLE
/* make the following warning an error: warning C4098: 'XXXXXXX' : 'void' function returning a value */
#pragma warning( error : 4098 )
#endif

#if defined(ETH_SOURCE)
/* OI-14688:compile warning in Eth_Vtt <alm:entity?guid=OI-5E7E6F50-E6D5-460E-99BC-FC52E7E8A7A1> */
#pragma warning( disable : 4100 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4100_DISABLE
#pragma warning( error : 4100 )
#endif
#endif


#if defined (CRYPTO_30_LIBCV_SOURCE)
/* according to OI-14448:Compiler Warnings - Please remove them at the next Module Release <alm:entity?guid=OI-D2EF94A7-CC6E-40FE-AE8F-34E59DD7EF44>, warning  C4101: 'XXXXXXX' : unreferenced local variabled*/
/* disable the following warning:  warning  C4101: 'XXXXXXX' : unreferenced local variable */
#pragma warning( disable : 4101 )
#else

#ifndef PT_WARN2ERR_COMPILER_CFG_4101_DISABLE
#pragma warning( error : 4101 )
#endif
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4113_DISABLE
/* make the following warning an error: warning C4113: 'XXXXXX' differs in parameter lists from 'YYYYYY' */
#pragma warning( error : 4113 )
#endif

#if defined (OS_HAL_TIMER_LCFG_SOURCE) || defined (OS_SCHEDULER_LCFG_SOURCE) || defined (OS_SCHEDULETABLE_LCFG_SOURCE) || defined (OS_XSIGNAL_LCFG_SOURCE)
/* according to OI-4097: Several Compiler Warnings - Please remove them at the next Module Release <alm:entity?guid=OI-48766848-2AB9-4AEA-A0A4-AC2C0A8B25A9>, warning  C4132: 'XXXXXXX' : const object should be initialized*/
/* disable the following warning:  warning  C4132: 'XXXXXXX' : const object should be initialized */
#pragma warning( disable : 4132 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4132_DISABLE
/* make the following warning an error: warning  C4132: 'XXXXXXX' : const object should be initialized */
#pragma warning( error : 4132 )
#endif
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4133_DISABLE
/* make the following warning an error: warning C4133: incompatible types - from 'XXXXXX' to 'YYYYYY' */
#pragma warning( error : 4133 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4142_DISABLE
#pragma warning( error : 4142 )
#endif

#if defined(VSWUPDM_SOURCE)
/* there is no OI, because the problem in lastest version has been resolved */
#pragma warning( disable : 4189 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4189_DISABLE
#pragma warning( error : 4189 )
#endif
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4204_DISABLE
/* make the following warning an error: warning C4204: nonstandard extension used : non-constant aggregate initializer */
#pragma warning( error : 4204 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4221_DISABLE
/* make the following warning an error: 'warning C4221: nonstandard extension used : 'XXXXX' : cannot be initialized using address of automatic variable 'YYYYY' */
#pragma warning( error : 4221 )
#endif

#if defined (VRPCPROXY_SOURCE)
/* OI-14698:compile warning vRpcProxy <alm:entity?guid=OI-D3743875-FC98-4D4D-9C50-813AE223D387> */
#pragma warning( disable : 4242 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4242_DISABLE
/* make the following warning an error: warning C4242: '=' : conversion from 'XXXXX' to 'YYYYYY', possible loss of data */
#pragma warning( error : 4242 )
#endif
#endif

#if defined (VRPCPROXY_SOURCE)
/* OI-14698:compile warning vRpcProxy <alm:entity?guid=OI-D3743875-FC98-4D4D-9C50-813AE223D387> */
#pragma warning( disable : 4244 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4244_DISABLE
#pragma warning( error : 4244 )
#endif
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4245_DISABLE
/* make the following warning an error: warning C4245 : 'XXXXX' : conversion from 'int' to 'uint16', signed / unsigned mismatch */
#pragma warning( error : 4245 )
#endif


#ifndef PT_WARN2ERR_COMPILER_CFG_4255_DISABLE
/* make the following warning an error: warning C4255: 'XXXXX' : no function prototype given: converting '()' to '(void)' */
#pragma warning( error : 4255 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4295_DISABLE
/* make the following warning an error: warning C4295: 'XXXXXX' : array is too small to include a terminating null character */
#pragma warning( error : 4295 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4305_DISABLE
/* make the following warning an error: warning C4305: 'initializing' : truncation from 'XXXXX' to 'const YYYYYY' */
#pragma warning( error : 4305 ) 
#endif


#if defined (OS_XSIGNAL_LCFG_SOURCE) || defined (OS_TRACE_LCFG_SOURCE) || defined (OS_TIMINGPROTECTION_LCFG_SOURCE) || defined (OS_TASK_LCFG_SOURCE) || defined (OS_STACK_LCFG_SOURCE) || defined (OS_SPINLOCK_LCFG_SOURCE) || defined (OS_SERVICEFUNCTION_LCFG_SOURCE) || defined (OS_SCHEDULETABLE_LCFG_SOURCE) || defined (OS_SCHEDULER_LCFG_SOURCE) || defined (OS_RESOURCE_LCFG_SOURCE) || defined (OS_PERIPHERAL_LCFG_SOURCE) || defined (OS_MEMORYPROTECTION_LCFG_SOURCE) || defined (OS_MEMORYROTECTION_LCFG_SOURCE) || defined (OS_ISR_LCFG_SOURCE) || defined (OS_IOC_LCFG_SOURCE) || defined (OS_HOOK_LCFG_SOURCE) || defined (OS_HAL_TIMER_LCFG_SOURCE) || defined (OS_HAL_MEMORYPROTECTION_LCFG_SOURCE) || defined (OS_HAL_KERNEL_LCFG_SOURCE) || defined (OS_HAL_INTERRUPT_LCFG_SOURCE) || defined (OS_HAL_ENTRY_LCFG_SOURCE) || defined (OS_HAL_CORE_LCFG_SOURCE) || defined (OS_HAL_CONTEXT_LCFG_SOURCE) || defined (OS_ERROR_LCFG_SOURCE) || defined (OS_COUNTER_LCFG_SOURCE) || defined (OS_CORE_LCFG_SOURCE) || defined (OS_BARRIER_LCFG_SOURCE) || defined (OS_APPLICATION_LCFG_SOURCE) || defined (OS_ALARM_LCFG_SOURCE) || defined (OS_ACCESSCHECK_LCFG_SOURCE) || defined (OS_XSIGNAL_SOURCE) || defined (OS_TRAP_SOURCE) || defined (OS_TRACE_SOURCE) || defined (OS_TIMINGPROTECTION_SOURCE) || defined (OS_TIMER_SOURCE) || defined (OS_THREAD_SOURCE) || defined (OS_TASK_SOURCE) || defined (OS_STACK_SOURCE) || defined (OS_SPINLOCK_SOURCE) || defined (OS_SERVICEFUNCTION_SOURCE) || defined (OS_SCHEDULETABLE_SOURCE) || defined (OS_SCHEDULER_SOURCE) || defined (OS_RESOURCE_SOURCE) || defined (OS_PRIORITYQUEUE_SOURCE) || defined (OS_PERIPHERAL_SOURCE) || defined (OS_MEMORYPROTECTION_SOURCE) || defined (OS_LOCK_SOURCE) || defined (OS_JOB_SOURCE) || defined (OS_ISR_SOURCE) || defined (OS_IOC_SOURCE) || defined (OS_INTERRUPT_SOURCE) || defined (OS_HOOK_SOURCE) || defined (OS_HAL_PROCESSOR_SOURCE) || defined (OS_HAL_ENTRY_SOURCE) || defined (OS_HAL_CORE_SOURCE) || defined (OS_FIFOREF_SOURCE) || defined (OS_FIFO32_SOURCE) || defined (OS_FIFO16_SOURCE) || defined (OS_FIFO08_SOURCE) || defined (OS_FIFO_SOURCE) || defined (OS_EVENT_SOURCE) || defined (OS_ERROR_SOURCE) || defined (OS_DEQUE_SOURCE) || defined (OS_COUNTER_SOURCE) || defined (OS_CORE_SOURCE) || defined (OS_BITARRAY_SOURCE) || defined (OS_BIT_SOURCE) || defined (OS_BARRIER_SOURCE) || defined (OS_APPLICATION_SOURCE) || defined (OS_ALARM_SOURCE) || defined (OS_ACCESSCHECK_SOURCE)
/* ESCAN00104363:Compiler warning: Overflow in constant expression. <alm:entity?guid=ESCAN-68D18F50-DC6B-4FA9-8D54-6862695ACD0E> */
#pragma warning( disable : 4307 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4307_DISABLE
/* make the following warning an error: warning C4307 : '+' : integral constant overflow */
#pragma warning( error : 4307 ) 
#endif
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4310_DISABLE
#pragma warning( error : 4310 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4700_DISABLE
/* make the following warning an error: warning C4700: uninitialized local variable 'XXXXXXX' used */
#pragma warning( error : 4700 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4701_DISABLE
/* make the following warning an error: warning C4701 : potentially uninitialized local variable 'XXXXXXX' used */
#pragma warning( error : 4701 )
#endif

#if defined (OS_ISR_SOURCE) || defined (OS_TASK_SOURCE) || defined (OS_THREAD_SOURCE) || defined (OS_XSIGNAL_SOURCE)
/* according to OI-4097: Several Compiler Warnings - Please remove them at the next Module Release <alm:entity?guid=OI-48766848-2AB9-4AEA-A0A4-AC2C0A8B25A9>, warning C4702: unreachable code in this files can not be avoided */
/* disable the following warning:  'warning C4702: unreachable code' */
#pragma warning( disable : 4702 )
#else
#ifndef PT_WARN2ERR_COMPILER_CFG_4702_DISABLE
/* make the following warning an error: 'warning C4702: unreachable code' */
#pragma warning( error : 4702 )
#endif
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4703_DISABLE
/* make the following warning an error: warning C4703 : potentially uninitialized local pointer variable 'XXXXXXX' used */
#pragma warning( error : 4703 )
#endif

#ifndef PT_WARN2ERR_COMPILER_CFG_4706_DISABLE
/* make the following warning an error: warning C4706: assignment within conditional expression */
#pragma warning( error : 4706 )
#endif

/**********************************************************************************************************************
*  Warning to error handling. The following warnings are not accepted on product level and are set to error. END
*********************************************************************************************************************/

/**********************************************************************************************************************
*  END OF FILE: PT_Warn2Err_Compiler_Cfg.h
*********************************************************************************************************************/
