#include "FreeRTOS.h"
#include "task.h"
#include "partest.h"

void vParTestInitialise( void )
{
    /* Nothing to do here because the MCC generated files already initialized. */
}

void vParTestSetLED( UBaseType_t uxLED,
                     BaseType_t xValue )
{
    switch( uxLED )
    {
        case 0:
            IO_LED0_LAT = ( unsigned char ) xValue;
            break;

        case 1:
            IO_LED1_LAT = ( unsigned char ) xValue;
            break;

        case 2:
            IO_LED2_LAT = ( unsigned char ) xValue;
            break;

        default:
            break;
    }
}


void vParTestToggleLED( UBaseType_t uxLED )
{
    switch( uxLED )
    {
        case 0:
            IO_LED0_Toggle();
            break;

        case 1:
            IO_LED1_Toggle();
            break;

        case 2:
            IO_LED2_Toggle();
            break;

        default:
            break;
    }
}
