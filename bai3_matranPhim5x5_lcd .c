#include <16f877a.h>
#fuses HS,NOLVP,NOWDT,NOPROTECT
#device *=16 ADC=10
#use delay(clock=12M)

#define ROW1 PIN_D0
#define ROW2 PIN_D1
#define ROW3 PIN_D2
#define ROW4 PIN_D3
#define ROW5 PIN_D4
#define COL1 PIN_B0
#define COL2 PIN_B1
#define COL3 PIN_B2
#define COL4 PIN_B3
#define COL5 PIN_B4

#define LCD_ENABLE_PIN  PIN_C0
#define LCD_RS_PIN      PIN_C1
#define LCD_RW_PIN      PIN_C2
#define LCD_DATA4       PIN_C4
#define LCD_DATA5       PIN_C5
#define LCD_DATA6       PIN_C6
#define LCD_DATA7       PIN_C7

#include <lcd.c>
#include "key_5x5.c" 

void main()
  { 
   unsigned int8 key,count=0;
   key_5x5_init();     
   lcd_init();           
   while(true) 
      {
        key=get_key_5x5();
        if(key)
         {             
            count++; // dem so ky tu trong man hinh LCD
            // dieu chinh vi tri con tro
            if(count==17) // neu tran hang 1 thi chuyen sang hang 2            
               lcd_gotoxy(1,2); // Cot 1, hang 2               
            else if ((count==32) || (key=='#')) // tran ca 2 hang hoac bam dau # thi xoa het va quay lai tu 1.1
            {  
               lcd_gotoxy(1,2);
               printf(lcd_putc,"                "); // xoa man hinh lcd hang 2
               lcd_gotoxy(1,1); // Cot 1, hang 1                              
               printf(lcd_putc,"                "); // xoa man hinh lcd hang 1
               count=1; // quay lai vi tri ban dau de hine thi ky tu tiep theo
               lcd_gotoxy(1,1); // Cot 1, hang 1               
            }
            if (key!='#') printf(lcd_putc,"%c",key);   
         }        
      }      
}

