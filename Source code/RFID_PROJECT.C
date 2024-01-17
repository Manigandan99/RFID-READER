#include <LPC21XX.H>
#include <string.h>
#include "PROTOTYPE.h"
#include "LCD_FUN.h"
#include "KEYPAD_FUN.h"
#include "RFID_FUN.h" 
#include "UART_CONFIG.h"

int main(void)
{
unsigned char UART_DATA;
int DEMO;
PIN_DIRECTION();  
LCD_CONFIGURATION();
UART0_FUN();									  
	   DISPLAY("--MANIGANDAN TECH--");
	   UART0_DISPLAY("-------------------MANIGANDAN TECH------------------");
 while(1)
 {
   if((IOPIN0&(1<<6))==0)
   {
	   UART0_WRITE(0x0D);
	if((IOPIN0&(1<<7))==0)//TERMINAL CONTROL
	{
	   LCD_CMD(0xC0);
	   DISPLAY("MAKE A SELECTION");
		//Employee Details
	   if(KEYPAD_FUNCTION()=='%')
	   {
	     LCD_CMD(0xC0);
	     DISPLAY("ENTER ID NUMBER");
	     UPDATE_DATA();
	   }
	   //Terminating Employee
	   else if(KEYPAD_FUNCTION()=='$')
	   {
	   	LCD_CMD(0xC0);
		DISPLAY("ENTER EMPLOYEE ID");
		LCD_CMD(0x94);
		TERMINATION();
	    }
	   //DISPLAY ID DETAILS
	   else if(KEYPAD_FUNCTION()=='!')
	   {
	    DELAY(300);
		LCD_CMD(0xC0);
		DISPLAY("ENTER ID:");
		if((DEMO=VERIFY_ID())>=0)
		{
		DATA_DISPLAY(DEMO);
		DELAY(1500);
		}
		else
		{
		LCD_CMD(0x01);
		LCD_CMD(0xC0);
        DISPLAY("INVALID ID NUMBER");
		DELAY(1000);
		LCD_CMD(0x01);
		}
	   }
	}
	else // keypad controll
	{
    	UART0_DISPLAY("% >>ADD NEW EMPLOYEE DETAILS AND GIVE A PERMISSION TO SERVER ROOM ACCESS");
		UART0_WRITE(0x0D);
		UART0_DISPLAY("$ >>EMPLOYEE TERMINATION");
		UART0_WRITE(0x0D);
		UART0_DISPLAY("! >>DISPLAY ID DETAILS");
		UART0_WRITE(0x0D);
     	UART_DATA=UART0_READ();
     	UART0_WRITE(UART_DATA);
	   if(UART_DATA=='%')
	   {
	     UPDATE_DATA_UART();
	   }
	   //Terminating Employee
	   else if(UART_DATA=='$')
	   {
	    UART0_WRITE(0x0D);
		UART0_DISPLAY("---------------------TERMINATING-----------------------");
		UART0_WRITE(0x0D);
		UART0_DISPLAY("EMPLOYEE ID  >>>");
		TERMINATION();
	    }
	   //DISPLAY ID DETAILS
	   else if(UART_DATA=='!')
	   {
		UART0_DISPLAY("------------------DISPLAY ID DETAILS-------------------");
		UART0_WRITE(0x0D);
		UART0_DISPLAY("ENTER ID  >>>");
		if((DEMO=VERIFY_ID())>=0)
		{
		DATA_DISPLAY_UART(DEMO);
		}
		else
		{
 		UART0_WRITE(0x0D);
        UART0_DISPLAY("INVALID ID NUMBER");
		UART0_WRITE(0x0D);
		}

	   }
	 }
   } 
	  else
	   {
         READ_RFID();
	   }  
	   LCD_CMD(0x01);
	   DISPLAY("--MANIGANDAN TECH--");
 }  

}
