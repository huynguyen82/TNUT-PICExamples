#include <16f877a.h>
#include <def_16f877a.h>
#fuses HS,NOLVP,NOWDT,NOPROTECT
#device *=16 ADC=10
#use delay(clock=12M)
//////////////////  dia chi cong ra port
#define LED1 D0
#define LED2 D1
#define LED3 D2
#define LED4 D3
#define LED5 D4
#define LED6 D5
#define LED7 D6
#define LED8 D7
#define SW1 B0
#define SW2 B1
#define SW3 B2
#define SW4 B3
#define SW5 B4
#define SW6 B5
#define SW7 B6
#define SW8 B7

void init()
{     
   TRISB=0xff;
   TRISD=0x00;
   PORTD=0x00;

}

//////////////////////
void LD1()
{
   if(SW1==0)
   {
      while(SW1==0){};
      delay_ms(10);
      LED1=~LED1;
   }
}
////////////////////
void LD2()
{
   if(SW2==0)
   {
      while(SW2==0){};
      delay_ms(10);
      LED2=~LED2;
   }
}
////////////////////
void LD3()
 {
  if(SW3==0)
    {while(SW3==0){};
     delay_ms(10);
     LED3=~LED3;}
     }
////////////////////
void LD4()
{
   if(SW4==0)
   {
      while(SW4==0){};
      delay_ms(10);
      LED4=~LED4;
   }
}
////////////////////
void LD5()
{
   if(SW5==0)
   {
      while(SW5==0){};
      delay_ms(10);
      LED5=~LED5;
   }
}
////////////////////
void LD6()
{
   if(SW6==0)
   {
      while(SW6==0){};
      delay_ms(10);
      LED6=~LED6;
   }
}
////////////////////
void LD7()
{
   if(SW7==0)
   {
      while(SW7==0){};
      delay_ms(10);
      LED7=~LED7;
   }
}
////////////////////
void LD8()
{
   if(SW8==0)
   {
      while(SW8==0){};
      delay_ms(10);
      LED8=~LED8;
   }
}
////////////////////
void main(){
   init();
   while(1)
   {
      LD1();
      LD2();
      LD3();
      LD4();
      LD5();
      LD6();
      LD7();
      LD8();
   }
}
      
