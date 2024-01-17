//DISPLAY ID DATA USING KEYPAD 
void DATA_DISPLAY(unsigned int index)
{
unsigned int i;
    LCD_CMD(0x01);
    LCD_CMD(0x80);
    DISPLAY("Name:"); 
    LCD_CMD(0x85);
   	for(i=0;s[index].NAME[i]!='\0';i++)
	{
	  LCD_DATA(s[index].NAME[i]);
 	}
	LCD_CMD(0xC0);
	DISPLAY("Role:");
	LCD_CMD(0xC5);
	for(i=0;s[index].DES[i]!='\0';i++)
	{
	  LCD_DATA(s[index].DES[i]);
 	}  
	LCD_CMD(0x94);
	DISPLAY("Mail:");
	LCD_CMD(0x99);
	for(i=0;s[index].MAIL_ID[i]!='\0';i++)
	{
	  LCD_DATA(s[index].MAIL_ID[i]);
 	}
	LCD_CMD(0xD4);
	DISPLAY("Ph_n:");
	LCD_CMD(0xD9);
	for(i=0;s[index].PHONE_NO[i]!='\0';i++)
	{
	  LCD_DATA(s[index].PHONE_NO[i]);
 	}
}
//ADD NEW EMPLOYEE WITH DETAILS
void SET_NAME_DATA(unsigned int index)
{
unsigned int i=0;
unsigned char DATA;
LCD_CMD(0x80);
DISPLAY("NAME:"); 
LCD_CMD(0x85);
 while((DATA=KEYPAD_FUNCTION())!='/')
 {
  DELAY(350);
  s[index].NAME[i]=DATA;
  i++;
  }
}
void DESIGNATION(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 LCD_CMD(0xC0);
 DISPLAY("ROLE:");
 LCD_CMD(0xC5);
 while((DATA=KEYPAD_FUNCTION())!='/')
  {
  DELAY(350);
  s[index].DES[i]=DATA;
  i++;
  }
}
void SET_MAIL_ID(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 LCD_CMD(0x94);
 DISPLAY("MAIL:");
 LCD_CMD(0x99);
 while((DATA=KEYPAD_FUNCTION())!='/')
 {
  DELAY(350);
  s[index].MAIL_ID[i]=DATA;
  i++;
 }
}

void SET_PHONE_NO(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 LCD_CMD(0xD4);
 DISPLAY("PH_N:");
 LCD_CMD(0xD9);
 while((DATA=KEYPAD_FUNCTION())!='/')
 {
  DELAY(350);
  s[index].PHONE_NO[i]=DATA;
  i++;
  }
}
void ID_NO(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 LCD_CMD(0x94);
 DISPLAY("ID NO:");
 while((DATA=KEYPAD_FUNCTION())!='/')
 {
  DELAY(350);
  s[index].ID_NO[i]=DATA;
  i++;
  }
}
// SET OF DATA TO ADD NEW EMPLOYEE
void UPDATE_DATA()
{
 DELAY(100);
 ID_NO(m_index);
 DELAY(300);
 LCD_CMD(0x01);
 SET_NAME_DATA(m_index);
 DELAY(300);
 DESIGNATION(m_index);
 DELAY(300);
 SET_MAIL_ID(m_index);
 DELAY(300);
 SET_PHONE_NO(m_index);
 DELAY(300);
 m_index++;
 LCD_CMD(0x01);
}

//ADD NEW EMPLOYEE USING UART (PERIPHERAL DEVICE)
void SET_NAME_DATA_UART(unsigned int index)
{
unsigned int i=0;
unsigned char DATA;
UART0_WRITE(0x0D);
UART0_DISPLAY("NAME : "); 
 while((DATA=UART0_READ())!='/')
 {
  UART0_WRITE(DATA);
  s[index].NAME[i]=DATA;
  i++;
  }
}
void DESIGNATION_UART(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 UART0_WRITE(0x0D);
 UART0_DISPLAY("ROLE : ");
 while((DATA=UART0_READ())!='/')
  {
  UART0_WRITE(DATA);
  s[index].DES[i]=DATA;
  i++;
  }
}
void SET_MAIL_ID_UART(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 UART0_WRITE(0x0D);
 UART0_DISPLAY("MAIL : ");
 while((DATA=UART0_READ())!='/')
 {
  UART0_WRITE(DATA);
  s[index].MAIL_ID[i]=DATA;
  i++;
 }
}

void SET_PHONE_NO_UART(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 UART0_WRITE(0x0D);
 UART0_DISPLAY("PH_N : ");
 while((DATA=UART0_READ())!='/')
 {
  UART0_WRITE(DATA);
  s[index].PHONE_NO[i]=DATA;
  i++;
  }
}
//SET OF DATA TO ADD NEW EMPLOYEE USING UART
void UPDATE_DATA_UART()
{

 ID_NO_UART(m_index);
 SET_NAME_DATA_UART(m_index);
 DESIGNATION_UART(m_index);
 SET_MAIL_ID_UART(m_index);
 SET_PHONE_NO_UART(m_index);
 m_index++;
}
//DISPLAY ID DATA USING UART 
void DATA_DISPLAY_UART(unsigned int index)
{
unsigned int i;
    UART0_WRITE(0x0D);
    UART0_DISPLAY("Name : "); 
   	for(i=0;s[index].NAME[i]!='\0';i++)
	{
	  UART0_WRITE(s[index].NAME[i]);
 	}
	UART0_WRITE(0x0D);
	UART0_DISPLAY("Role : ");
	for(i=0;s[index].DES[i]!='\0';i++)
	{
	  UART0_WRITE(s[index].DES[i]);
 	}  
	UART0_WRITE(0x0D);
	UART0_DISPLAY("Mail : ");
	for(i=0;s[index].MAIL_ID[i]!='\0';i++)
	{
	  UART0_WRITE(s[index].MAIL_ID[i]);
 	}
	UART0_WRITE(0x0D);
	UART0_DISPLAY("Ph_n : ");
	for(i=0;s[index].PHONE_NO[i]!='\0';i++)
	{
	  UART0_WRITE(s[index].PHONE_NO[i]);
 	}
}

void ID_NO_UART(unsigned int index)
{
 unsigned int i=0;
 unsigned char DATA;
 UART0_WRITE(0x0D);
 UART0_DISPLAY("ID_NO : ");
 while((DATA=UART0_READ())!='/')
 {
  UART0_WRITE(DATA);
  s[index].ID_NO[i]=DATA;
  i++;
  }
}
//TERMINATION 
void TERMINATION()
{
   unsigned int i=0,j;
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
	    for(j=i;j<m_index;j++)
	    {
		  s[i]=s[i+1];
	    }
		break;
	 }
  }
  	--m_index;
}

// RFID READ DATA 
void READ_RFID(void)
{
  unsigned int i,DEMO_DATA=0;
  unsigned char DATA[20];
  UART1_WRITE(0x0D);
  for(i=0;i<10;i++)
  {
   	 DATA[i]=UART1_READ();
     UART1_WRITE(DATA[i]);
  }
  DATA[10]='\0';
  for(i=0;i<=m_index;i++)
  {
	 if((strcmp(s[i].ID_NO,DATA))==0)
	 {
	  	   DEMO_DATA=1;
	 }
  }
  if(DEMO_DATA==1)
  {
  UART0_WRITE(0x0D);
  LCD_CMD(0x01);
  DISPLAY("AUTHORISED PERSON");
  UART0_DISPLAY("AUTHORISED PERSON");
  DELAY(1000);
  }
  else
  {
  UART0_WRITE(0x0D);
  LCD_CMD(0x01);
  DISPLAY("INVALID ID");
  UART0_DISPLAY("INVALID ID");
  DELAY(1000);
  }
}
  
