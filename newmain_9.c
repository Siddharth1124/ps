/*
 * File:   newmain.c
 * Author: dumbr
 *
 * Created on 6 May, 2024, 8:01 AM
 */


#include <xc.h>

#define LCD_DATA  PORTD
#define ctr       PORTE
#define rs        PORTEbits.RE0
#define rw        PORTEbits.RE1
#define en        PORTEbits.RE2

void msdelay (unsigned int time);
void lcd_command(unsigned char cmd);
void lcd_data(unsigned char data);
void lcd_init();
void write(  char* str);

void main(void) {
    char var1[] = "WELLCOME";
    char var2[] = "HELLO";
    ADCON1 = 0x0F;
    TRISD = 0;
    TRISE = 0;
    lcd_init();
    
    msdelay(15);
    write(var1);
    msdelay(15);
    lcd_command(0xC0);
    write(var2);
    
    while(1);      
   
    return;
}

void msdelay(unsigned int time)
{
    unsigned int i,j;
    for(i=0;i<time;i++)
    {   for(j =0;j< 710;j++){}
    }
}

void lcd_init()
{
    lcd_command(0x38);
    msdelay(15);
    lcd_command(0x01);
    msdelay(15);
    lcd_command(0x0C);
    msdelay(15);
    lcd_command(0x80);
    msdelay(15);
}

void lcd_command(unsigned char cmd)
{
    LCD_DATA = cmd;
    rs = 0;
    rw = 0;
    en = 1;
    msdelay(15);
    en =0;

}

void lcd_data(unsigned char data)
{
    LCD_DATA =data;
    rs = 1;
    rw =0;
    en = 1;
    msdelay(15);
    en =0;    
}

void write(char *str)
{
    int i=0;
    while(str[i] !='\0')
    {
        lcd_data(str[i]);
        i++;
    }

}