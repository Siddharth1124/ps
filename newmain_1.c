/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 6:49 AM
 */


#include <xc.h>

void main(void) {
    unsigned int num1, num2,sum;
    num1 = 0xA;
    num2 = 0xF;
    
    sum = num1 + num2;
    
    TRISD = 0;
    PORTD = sum;    
    
    
    return;
}
