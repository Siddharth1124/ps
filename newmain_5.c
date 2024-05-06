/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 7:22 AM
 */


#include <xc.h>

void main(void) {
    
    int arr[] = {2,6,1,4,7};
    
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp =arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        
        }
    }
    
    TRISA =0;
    TRISB =0;
    TRISC =0;
    TRISD =0;
    TRISE =0;
    
    PORTA = arr[0];
    PORTB = arr[1];
    PORTC = arr[2];
    PORTD = arr[3];
    PORTE = arr[4];
    return;
}
