/*
Write an Embedded C program for sorting the numbers in ascending and descending
order.
 */




#include <xc.h>
int main(){
    
   // flag=0;
    int arr[]={4,3,2,1,5};
    TRISB=0;
    PORTB=0x03;
    int choice=2;
    switch(choice)
    {
       case 1:
       {
     for (int i = 1; i < 5; i++) {
     int key = arr[i];
     int j = i - 1;
      while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
      }
      arr[j + 1] = key;
    }
    break;
       }
 
        case 2:
        {
        for (int i = 1; i < 5; i++) {
      int key = arr[i];
      int j = i - 1;
      while (j >= 0 && arr[j] < key) {
        arr[j + 1] = arr[j];
        j = j - 1;
      }
      arr[j + 1] = key;
    }
    break;
  }
               
    }
    // TRISB=0;
  for (int i = 0; i < 5; i++) {
    PORTB = arr[i];
  }
    return;
}
