/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 7:34 AM
 */


#include <xc.h>


void msdelay(unsigned int time)
{
    unsigned int i,j;
    for(i=0;i<time;i++)
    { for(j=0;j<710;j++){}
    }
}

void main(void) {
    INTCON2bits.RBPU =0;
    ADCON1 =0x0F;
    
    TRISD =0;
    while(1)
    {
        TRISD = 0x00;
        msdelay(250);
        TRISD = 0xFF;
        msdelay(250);
    
    
    }
    
    
    
    
    return;
}
