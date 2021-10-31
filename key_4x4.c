#ifndef __KEY_4X4_
#define __KEY_4X4_

static unsigned char KEY_4X4[4][4]={'7','8','9','/',
                                    '4','5','6','*',
                                    '1','2','3','-',
                                    '#','0','=','+'};
void key_4x4_init(void)
{   
   
   output_drive(ROW1);
   output_drive(ROW2);
   output_drive(ROW3);
   output_drive(ROW4);
   output_float(COL1);
   output_float(COL2);
   output_float(COL3);
   output_float(COL4);
}
int1 ButtonIsPush(void)
{
   output_low(ROW1);
   output_low(ROW2);
   output_low(ROW3);
   output_low(ROW4);
   if((input(COL1)==0)|(input(COL2)==0)|(input(COL3)==0)|(input(COL4)==0))
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
   else
   {
      output_low(ROW4);
   }
}
unsigned char get_key_4x4()
{
   unsigned char i;
   if(ButtonIsPush())
   {
      delay_ms(5);
      if(ButtonIsPush())
      {         
         for(i=0;i<4;i++)
         {            
            check_row(i);
            if(!input(COL1)) return KEY_4X4[i][0];
            if(!input(COL2)) return KEY_4X4[i][1];
            if(!input(COL3)) return KEY_4X4[i][2];
            if(!input(COL4)) return KEY_4X4[i][3];
         }      
      }
   }
   return 0;
}
#endif
