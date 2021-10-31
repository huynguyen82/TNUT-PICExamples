#include <16f877a.h>
#fuses HS,NOLVP,NOWDT,NOPROTECT
#device *=16 ADC=10
#use delay(clock=12M)

#define ROW1 PIN_B0
#define ROW2 PIN_B1
#define ROW3 PIN_B2
#define ROW4 PIN_B3
#define COL1 PIN_B4
#define COL2 PIN_B5
#define COL3 PIN_B6
#define COL4 PIN_B7

#define LCD_ENABLE_PIN  PIN_C0
#define LCD_RS_PIN      PIN_C1
#define LCD_RW_PIN      PIN_C2
#define LCD_DATA4       PIN_C4
#define LCD_DATA5       PIN_C5
#define LCD_DATA6       PIN_C6
#define LCD_DATA7       PIN_C7

#include <lcd.c>
#include "key_4x4.c"

void main()
  { 
   unsigned int8 key;
   key_4x4_init();     
   lcd_init();           
   while(true) 
      {
        key=get_key_4x4();
        if(key)
         {
            lcd_gotoxy(0,0);
            printf(lcd_putc,"\c Key pressed:%c",key);             
         }
        delay_ms(10);
      }      
}

