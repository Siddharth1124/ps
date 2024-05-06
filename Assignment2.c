/*
 * File:   Practical1.c
 * Author: student
 *
 * Created on 9 February, 2024, 10:50 AM
 */


#include <xc.h>
#define N 10
void main(void) {
    int nums[N] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF, 0x11,
0x22};
    int sum = 0;
    for (int i =0 ; i<N ; i++)
    {
        sum = sum + nums[i];
    }
    TRISB = 0;
    PORTB = sum;
    return;
}
