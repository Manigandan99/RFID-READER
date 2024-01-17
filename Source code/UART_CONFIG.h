//UART0 Configuration
void UART0_FUN()
{
  PINSEL0 = 0x00050005;          //P0.0 as TX0 and P0.1 as RX0
  //UART0
  U0LCR = 0x00000083;           // Enable Access to Divisor Latch
  U0DLM = 0x00;
  U0DLL = 0x00000062;         //Baud Rate of 9600
  U0LCR = 0x00000003;
  //UART1
  U1LCR =0x00000083;
  U1DLM=0x00;
  U1DLL=0x00000062;
  U1LCR=0x00000003;        //Disable Access to Divisor Latches
}
 //UART0
void UART0_WRITE(unsigned char C)
{
 U0THR=C;
 while((U0LSR & 0x40)==0);
}

unsigned char UART0_READ()
{
 while((U0LSR & 0x01)==0);
 return U0RBR;
}
//UART1
void UART1_WRITE(unsigned char C)
{
 U1THR=C;
 while((U1LSR & 0x40)==0);
}

unsigned char UART1_READ()
{
 while((U1LSR & 0x01)==0);
 return U1RBR;
}

void UART0_DISPLAY(unsigned char DATA[])
{
 unsigned int i;
 for(i=0;DATA[i]!='\0';i++)
 {
  UART0_WRITE(DATA[i]);
 }
}


//Verify data
int VERIFY_ID()
{
unsigned int i=0;
unsigned char DATA[12],DATA1;
if((IOPIN0&(1<<7))==0)
{
while((DATA1=KEYPAD_FUNCTION())!='/')
  {
  DELAY(350);
  DATA[i]=DATA1;
  i++;
  }
}
else
{
while((DATA1=UART0_READ())!='/')
  {
  UART0_WRITE(DATA1);
  DELAY(350);
  DATA[i]=DATA1;
  i++;
  }
}
for(i=0;i<=m_index;i++)
 {
	 if((strcmp(s[i].ID_NO,DATA))==0)
	 {
	   DATA[0]='\0';
	   return i;
	 }
 }
 DATA[0]='\0';
 return -1;
}
