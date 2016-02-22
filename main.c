/* 
 * File:   main.c
 * Author: Tom
 *
 * Created on 17. unora 2016, 18:37
 */

#define _XTAL_FREQ 2000000
#include <xc.h>
#include <stdint.h>
#include <stdio.h>
#include "mcc_generated_files/eusart.h"



void main(void) {
    ANSELA = 0; 
    ANSELC = 0;
    TRISC1 = 0; //0=output, 1=input    
    
    while(1)
    {
        LATC1 = 0;
        __delay_ms(50);
        LATC1 = 1;
        __delay_ms(50);
        
        EUSART_Write((uint8_t)1);
        
    }
}
