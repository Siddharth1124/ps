/*
 * File:   newmain1.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 9:12 AM
 */


#include <xc.h>

void msdelay(unsigned int time)
{
    unsigned int i,j;
    for(i=0;i<time;i++)
    {for(j=0;j<710;j++){}}

}



void main(void) {
    
    TRISCbits.TRISC0 = 0;
    TRISCbits.TRISC1 = 0;
    TRISCbits.TRISC2 = 0;
    
    PR2 =0x4E;
    T0CON = 0x07;
    CCP1CON = 0x0C;
    
    PORTCbits.RC0 = 1;
    PORTCbits.RC1 = 0;
    
    
    
    
    return;
}
