unsigned char KEYPAD_FUNCTION(void)
{
 while(1)
 {
 IOCLR1=C1;
 IOSET1=C2;
 IOSET1=C3;
 IOSET1=C4;
 IOSET1=C5;
 IOSET1=C6;
 IOSET1=C7;
 IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
  {
  DISPLAY("a");
  return 'a';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("b");
  return 'b';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY("c");
  return 'c';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("d");
  return 'd';
  }
  if((IOPIN1&(1<<27))==0)
 {
  DISPLAY("e");
  return 'e';
  }
  if((IOPIN1&(1<<28))==0)
  {
  DISPLAY("f");
  return 'f';
  }
  if((IOPIN1&(1<<29))==0)
  {
  DISPLAY("g");
  return 'g';
  }
 IOCLR1=C2;
 IOSET1=C1;
 IOSET1=C3;
 IOSET1=C4;
 IOSET1=C5;
 IOSET1=C6;
 IOSET1=C7;
 IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
 {
  DISPLAY("h");
  return 'h';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("i");
  return 'i';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY("j");
  return 'j';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("k");
  return 'k';
  }
  if((IOPIN1&(1<<27))==0)
 {
  DISPLAY("l");
  return 'l';
  }
  if((IOPIN1&(1<<28))==0)
  {
  DISPLAY("m");
  return 'm';
  }
  if((IOPIN1&(1<<29))==0)
  {
  DISPLAY("n");
  return 'n';
  }
  IOCLR1=C3;
  IOSET1=C1;
  IOSET1=C2;
  IOSET1=C4;
  IOSET1=C5;
  IOSET1=C6;
  IOSET1=C7;
  IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
 {
  DISPLAY("o");
  return 'o';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("p");
  return 'p';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY("q");
  return 'q';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("r");
  return 'r';
  }
  if((IOPIN1&(1<<27))==0)
 {
  DISPLAY("s");
  return 's';
  }
  if((IOPIN1&(1<<28))==0)
  {
  DISPLAY("t");
  return 't';
  }
  if((IOPIN1&(1<<29))==0)
  {
  DISPLAY("u");
  return 'u';
  }
 IOCLR1=C4;
 IOSET1=C1;
 IOSET1=C3;
 IOSET1=C2;
 IOSET1=C5;
 IOSET1=C6;
 IOSET1=C7;
 IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
 {
  DISPLAY("v");
  return 'v';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("w");
  return 'w';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY("x");
  return 'x';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("y");
  return 'y';
  }
  if((IOPIN1&(1<<27))==0)
 {
  DISPLAY("z");
  return 'z';
  }
  if((IOPIN1&(1<<28))==0)
  {
  DISPLAY("0");
  return '0';
  }
  if((IOPIN1&(1<<29))==0)
  {
  DISPLAY("1");
  return '1';
  }
  
 IOCLR1=C5;
 IOSET1=C1;
 IOSET1=C3;
 IOSET1=C4;
 IOSET1=C2;
 IOSET1=C6;
 IOSET1=C7;
 IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
 {
  DISPLAY("2");
  return '2';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("3");
  return '3';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY("4");
  return '4';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("5");
  return '5';
  }
  if((IOPIN1&(1<<27))==0)
 {
  DISPLAY("6");
  return '6';
  }
  if((IOPIN1&(1<<28))==0)
  {
  DISPLAY("7");
  return '7';	  
  }
  if((IOPIN1&(1<<29))==0)
  {
  DISPLAY("8");
  return '8';
  }
 IOCLR1=C6;
 IOSET1=C1;
 IOSET1=C3;
 IOSET1=C4;
 IOSET1=C5;
 IOSET1=C2;
 IOSET1=C7;
 IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
 {
  DISPLAY("9");
  return '9';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("_");
  return '_';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY(".");
  return '.';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("@");
  return '@';
  }
  if((IOPIN1&(1<<27))==0)
 {
 DISPLAY("#");
  return '#';
  }
  if((IOPIN1&(1<<28))==0)
  {
  LCD_CMD(0x01);
  DISPLAY("TERMINATE EMPLOYEE");
  return '$';
  }
  if((IOPIN1&(1<<29))==0)
  {
  LCD_CMD(0x01);
  DISPLAY("ADD NEW EMPLOYEE");
  return '%';
  }			 
 IOCLR1=C7;
 IOSET1=C1;
 IOSET1=C3;
 IOSET1=C4;
 IOSET1=C5;
 IOSET1=C6;
 IOSET1=C2;
 IOSET1=R1;
 IOSET1=R2;
 IOSET1=R3;
 IOSET1=R4;
 IOSET1=R5;
 IOSET1=R6;
 IOSET1=R7;
  if((IOPIN1&(1<<23))==0)
 {
  DISPLAY ("^");
  return '^';
  }
  if((IOPIN1&(1<<24))==0)
  {
  DISPLAY("&");
  return '&';
  }
  if((IOPIN1&(1<<25))==0)
 {
  DISPLAY("*");
  return '*';
  }
  if((IOPIN1&(1<<26))==0)
  {
  DISPLAY("(");
  return '(';
  }
  if((IOPIN1&(1<<27))==0)
 {
  DISPLAY(")");
  return ')';
  }
  if((IOPIN1&(1<<28))==0)
  {
  LCD_CMD(0x01);
  DISPLAY("DISPLAY ID DETAILS");
  return '!';
  }
  if((IOPIN1&(1<<29))==0)
  {
  DISPLAY(" ");
  return '/';
  }
  }
  }
