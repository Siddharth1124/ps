/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 6:54 AM
 */


#include <xc.h>

#define N 5
void main(void) {
    int arr[N] = {0x01,0x02,0xF,0x3,0xA};
    
     int sum;
    
    for(int i=0;i<N;i++)
    {
        sum+=arr[i];
    }
    
    TRISB = 0;
    PORTB = sum;
    LATB = sum;
    
    return;
}
