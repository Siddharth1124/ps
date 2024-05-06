/*
 * File:   newmain1.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 7:19 AM
 */


#include <xc.h>


    void main()
{
unsigned char num1, num2;
unsigned int result = 0;
unsigned char i;

// Get input from user
num1 = 0x12; // Example input value
num2 = 0x34; // Example input value

// Perform multiplication using successive addition
for(i = 0; i < num2; i++)
{

    result += num1;
}

// Display result
TRISD = 0;
PORTD = (unsigned char) result;
//PORTC = (unsigned char) (result &gt;&gt; 8);

    return;
}
