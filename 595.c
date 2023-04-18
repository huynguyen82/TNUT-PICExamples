#include <18f452.h>
#include <math.h>
#use delay(clock=12M)

#define clock pin_c0
#define data pin_c1
#define latch pin_c2
#define clear pin_c3

const unsigned int8 soled=4;
const unsigned int8 vitri[]={0,1,2,3};
const unsigned int8 maled[]={63,6,91,79,102,109,125,7,127,111};

void truyen_1bit(int1 bit){
   if(bit) { // truyen 1
      output_high(data); // data=1
      output_low(clock); // clock=0
      delay_us(100); // delay 100us
      output_high(clock);      // clock=1
   } else{ // truyen 0
      output_low(data); // data=0
      output_low(clock); // clock=0
      delay_us(100); // delay=100us
      output_high(clock);      //clock=1
   }
}
void chot(){
   output_low(latch);//latch=0
   delay_us(100);
   output_high(latch); //latch=1
}
void truyen_1byte(unsigned int8 x){
   int1 bit;
   for (unsigned int8 i=1;i<=8;i++)
   {
      bit=x/(unsigned int8)pow(2,(8-i));      
      x=x%(unsigned int8)pow(2,(8-i));
      truyen_1bit(bit); // truyen bit tach duoc ra 595
   }
}
void hienthi(){
   for(int8 i=0;i<soled;i++)truyen_1byte(maled[vitri[i]]);   
   output_low(latch);
   delay_us(100);
   output_high(latch);
}
void main()
{  
   output_c(0x0F); // data=clock=latch=clear=1
   // vui vui
   
   truyen_1byte(maled[8]);
   truyen_1byte(maled[2]);
   truyen_1byte(maled[5]);
   chot();   
   while(1);
}

