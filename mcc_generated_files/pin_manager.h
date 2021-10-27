/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F27Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_LED0 aliases
#define IO_LED0_TRIS                 TRISAbits.TRISA0
#define IO_LED0_LAT                  LATAbits.LATA0
#define IO_LED0_PORT                 PORTAbits.RA0
#define IO_LED0_WPU                  WPUAbits.WPUA0
#define IO_LED0_OD                   ODCONAbits.ODCA0
#define IO_LED0_ANS                  ANSELAbits.ANSELA0
#define IO_LED0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_LED0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_LED0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_LED0_GetValue()           PORTAbits.RA0
#define IO_LED0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_LED0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_LED0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_LED0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_LED0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_LED0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_LED0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define IO_LED0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set IO_LED1 aliases
#define IO_LED1_TRIS                 TRISAbits.TRISA1
#define IO_LED1_LAT                  LATAbits.LATA1
#define IO_LED1_PORT                 PORTAbits.RA1
#define IO_LED1_WPU                  WPUAbits.WPUA1
#define IO_LED1_OD                   ODCONAbits.ODCA1
#define IO_LED1_ANS                  ANSELAbits.ANSELA1
#define IO_LED1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_LED1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_LED1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_LED1_GetValue()           PORTAbits.RA1
#define IO_LED1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_LED1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_LED1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_LED1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_LED1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_LED1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_LED1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define IO_LED1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set IO_LED2 aliases
#define IO_LED2_TRIS                 TRISAbits.TRISA2
#define IO_LED2_LAT                  LATAbits.LATA2
#define IO_LED2_PORT                 PORTAbits.RA2
#define IO_LED2_WPU                  WPUAbits.WPUA2
#define IO_LED2_OD                   ODCONAbits.ODCA2
#define IO_LED2_ANS                  ANSELAbits.ANSELA2
#define IO_LED2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_LED2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_LED2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_LED2_GetValue()           PORTAbits.RA2
#define IO_LED2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_LED2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_LED2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_LED2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_LED2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_LED2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_LED2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define IO_LED2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/