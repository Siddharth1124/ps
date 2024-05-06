/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 7:01 AM
 */


#include <xc.h>

void main(void) {
    int arr1[] = {0x11,0x12,0x13,0x14,0x15};
    int arr2[] = {0x21,0x22,0x23,0x24,0x25};
    
    for(int i=0;i<5;i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    
    }
    
    TRISA =0;
    TRISB =0;
    TRISC =0;
    TRISD =0;
    TRISE= 0;       
  
    PORTA = arr1[0];
    PORTB = arr1[1];
    PORTC = arr1[2];
    PORTD = arr1[3];
    PORTE = arr1[4];
    
    
    
    
    return;
}
