/*
 * File:   LED.c
 * Author: student
 *
 * Created on 13 April, 2024, 2:44 PM
 */


#include <xc.h>
//Configuration bit settings 
#pragma config OSC = HS   //Oscillator Selection 
#pragma config WDT = OFF   //Disable Watchdog timer 
#pragma config LVP = OFF   //Disable Low Voltage Programming 
#pragma config PBADEN = OFF  //Disable PORTB Analog inputs 
 
//Function Prototypes 
void msdelay (unsigned int time);//Function for delay 
 
//Start of Program Code 
void main()       
{ 
     INTCON2bits.RBPU=0;     
ADCON1 = 0x0F;   //To disable the all analog inputs  
 TRISD = 0x00;   //To configure PORTD as output  
  
 while (1)    //While loop for repeated operation 
 {  
  PORTD = 0xFF;  //Turn ON the all LED?s 
     
  msdelay(250);  // Delay  
 
  PORTD = 0x00;  //Turn OFF the all LED?s 
    
  msdelay(250);  // Delay 
    
 } 
}       //End of the Program 
 
//Function Definition for delay degeneration 
 
void msdelay (unsigned int time) 
{ 
unsigned int i, j; 
 for (i = 0; i < time; i++) 
  for (j = 0; j < 710; j++); //Calibrated for a 1 ms delay in MPLAB 
} 