void LCD_CONFIGURATION(void)
{
LCD_CMD(0x38);
LCD_CMD(0x0C);
LCD_CMD(0x01);
LCD_CMD(0x80);
}
void LCD_CMD(unsigned char A)
{
 IOCLR0=LCDDATA;
 IOSET0=(A<<16);
 IOCLR0=REGISTER_SELECT;
 IOSET0=ENABLE;
 DELAY(5);
 IOCLR0=ENABLE;
 }
 void LCD_DATA(unsigned char A)
 {
  IOCLR0=LCDDATA;
  IOSET0=(A<<16);
  IOSET0=REGISTER_SELECT;
  IOSET0=ENABLE;
  DELAY(5);
  IOCLR0=ENABLE;
 }
 void DISPLAY(unsigned char ARRAY[])
 {
 unsigned int i;
 for(i=0;ARRAY[i]!='\0';i++)
 {
   LCD_DATA(ARRAY[i]);
 }
 }
void PIN_DIRECTION(void)
{
IODIR0|=LCDDATA;
IODIR0|=REGISTER_SELECT;
IODIR0|=ENABLE;
IODIR0&=~TERMINAL_OR_KEYPAD_CONTROLL_SELECTION;
IODIR1|=C1;
IODIR1|=C2;
IODIR1|=C3;
IODIR1|=C4;
IODIR1|=C5;
IODIR1|=C6;
IODIR1|=C7;
IODIR1&=~R1;
IODIR1&=~R2;
IODIR1&=~R3;
IODIR1&=~R4;
IODIR1&=~R5;
IODIR1&=~R6;
IODIR1&=~R7;
}  
 void DELAY(unsigned int i)
 {
  unsigned int j,k;
  for(j=0;j<i;j++)
  for(k=0;k<3000;k++);
 }
