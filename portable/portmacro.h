#ifndef PORTMACRO_H
#define PORTMACRO_H

/* Type definitions. */
#define portBASE_TYPE     char
#define portCHAR          char
#define portDOUBLE        double
#define portFLOAT         float
#define portLONG          long
#define portSHORT         short
#define portSTACK_TYPE    uint8_t

typedef uint8_t         StackType_t;
typedef signed char     BaseType_t;
typedef unsigned char   UBaseType_t;

#if ( configUSE_16_BIT_TICKS == 1 )
    typedef uint16_t    TickType_t;
#else
    typedef uint32_t    TickType_t;
#endif

/* Hardware specifics. */
#define portBYTE_ALIGNMENT             1
#define portCRITICAL_NESTING_IN_TCB    1
#define portSTACK_GROWTH               1
#define portTICK_TYPE_IS_ATOMIC        0
#define portMAX_DELAY                  ( ( TickType_t ) -1 )
#define portTICK_PERIOD_MS             ( ( TickType_t ) 1000 / configTICK_RATE_HZ )

/* C90 does not define SIZE_MAX. */
#ifndef SIZE_MAX
    #define SIZE_MAX    ( ( size_t ) ( -1 ) )
#endif

/* Interrupt management. */
#define portDISABLE_INTERRUPTS()    di()
#define portENABLE_INTERRUPTS()     ei()

/* Tick count. */
void vPortTickCountHandler( void );
#define portSTART_TICK_COUNT()                                                 \
    do                                                                         \
    {                                                                          \
        /* You can change to any timers, or any periodic interrupt sources. */ \
        TMR2_SetInterruptHandler( &vPortTickCountHandler );                    \
        TMR2_StartTimer();                                                     \
    } while( 0 )

/* Critical section management. */
extern void vTaskEnterCritical( void );
extern void vTaskExitCritical( void );
#define portENTER_CRITICAL()    vTaskEnterCritical()
#define portEXIT_CRITICAL()     vTaskExitCritical()

/* Context switch. You cannot call portYIELD from any ISRs. */
extern void vPortYield( void );
#define portYIELD()    vPortYield()

/* Adjusting the compiler. */
extern void vPortAdjustCompiler( void );
#define portREMOVE_STATIC_QUALIFIER    1

/* Task creation macros. */
#define portTASK_FUNCTION_PROTO( vFunction, pvParameters )    void vFunction( void * pvParameters )
#define portTASK_FUNCTION( vFunction, pvParameters )          void vFunction( void * pvParameters )

#endif /* PORTMACRO_H */
