#ifndef __KEY_4X4_
#define __KEY_4X4_

static unsigned char KEY_5X5[5][5]={'a','b','c','d','e',
                                    'g','h','i','k','l',
                                    'm','n','o','p','q',
                                    'r','s','t','u','v',
                                    'x','y',' ','#','<'};
void key_5x5_init(void)
{   
   
   output_drive(ROW1);
   output_drive(ROW2);
   output_drive(ROW3);
   output_drive(ROW4);
   output_drive(ROW5);
   output_float(COL1);
   output_float(COL2);
   output_float(COL3);
   output_float(COL4);
   output_float(COL5);
}
int1 ButtonIsPush(void)
{
   output_low(ROW1);
   output_low(ROW2);
   output_low(ROW3);
   output_low(ROW4);
   output_low(ROW5);
   if((input(COL1)==0)|(input(COL2)==0)|(input(COL3)==0)|(input(COL4)==0)|(input(COL5)==0))
   return 1;
   else 
   return 0;
}
void check_row(unsigned char i)
{
   output_high(ROW1);
   output_high(ROW2);
   output_high(ROW3);
   output_high(ROW4);
   output_high(ROW5);
   if(i==0)
   {
      output_low(ROW1);
   }
   else if(i==1)
   {
      output_low(ROW2);
   }
   else if(i==2)
   {
      output_low(ROW3);
   }
   else if(i==3)
   {
      output_low(ROW4);
   }
   else 
   {
      output_low(ROW5);
   }
}
unsigned char get_key_5x5()
{
   unsigned char i;
   if(ButtonIsPush())
   {
      //delay_ms(5);
      if(ButtonIsPush())
      {         
         for(i=0;i<5;i++)
         {            
            check_row(i);
            if(!input(COL1)) {while(!input(COL1));return KEY_5x5[i][0];}
            if(!input(COL2)) {while(!input(COL2));return KEY_5x5[i][1];}
            if(!input(COL3)) {while(!input(COL3));return KEY_5x5[i][2];}
            if(!input(COL4)) {while(!input(COL4));return KEY_5x5[i][3];}
            if(!input(COL5)) {while(!input(COL5));return KEY_5x5[i][4];}
         }      
      }
   }
   return 0;
}
#endif
