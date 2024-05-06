/*
 * File:   Assignment1.c
 * Author: student
 *
 * Created on 9 February, 2024, 10:23 AM
 */


#include <xc.h>

void main(void) {
    static int num1, num2,sum;
    num1 =2;
    num2 =5;
    sum= num1 + num2;
    TRISB = 0;
    PORTB= sum;
    return;
}
