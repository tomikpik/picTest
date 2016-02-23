/* 
 * File:   main.c
 * Author: Tom
 *
 * Created on 17. unora 2016, 18:37
 */

#define _XTAL_FREQ 16000000
#include <xc.h>
#include <stdint.h>
#include <stdio.h>
#include "mcc_generated_files/eusart.h"
#include "mcc_generated_files/pin_manager.h"



void main(void) {
    
    SYSTEM_Initialize();  
        
    while(1)
    {
        int i = 200;
        while(i>0){
            IO_LED_Toggle();
            __delay_ms(3);
            i--;
        }
        i = 200;
        while(i>0){
            IO_LED_Toggle();
            __delay_ms(20);
            i--;
        }
        i = 100;
        while(i>0){
            IO_LED_Toggle();
            __delay_ms(50);
            i--;
        }
        //EUSART_Write((uint8_t)1);
    }
}

