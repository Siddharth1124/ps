/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 7:39 AM
 */


#include <xc.h>

void __interrupt() timer0_isr()
{
    TMR0H = 0x85;
    TMR0L = 0x4E;
    PORTBbits.RB3 = ~PORTBbits.RB3;
    INTCONbits.TMR0IF =0; 

}


void main(void) {
    ADCON1 = 0x0f;
    TRISBbits.TRISB3 = 0;
    PORTBbits.RB3 = 0;
    T0CON = 0x02;
    INTCONbits.INT0IF = 0;
    INTCONbits.INT0IE = 1;
    T0CONbits.TMR0ON = 1;
    INTCONbits.GIE = 1;
    
    while(1);
    
    
    
            
    
    
    
    return;
}
