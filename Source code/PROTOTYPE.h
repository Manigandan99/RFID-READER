#define LCDDATA (0xFF<<16)
#define REGISTER_SELECT (1<<25);
#define ENABLE (1<<26);
#define MODE (1<<6);
#define TERMINAL_OR_KEYPAD_CONTROLL_SELECTION (1<<7);
#define	C1 (1<<16);
#define C2 (1<<17);
#define	C3 (1<<18);
#define	C4 (1<<19);
#define	C5 (1<<20);
#define	C6 (1<<21);
#define	C7 (1<<22);
#define	R1 (1<<23);
#define R2 (1<<24);
#define	R3 (1<<25);
#define	R4 (1<<26);
#define	R5 (1<<27);
#define	R6 (1<<28);
#define	R7 (1<<29);	
unsigned int m_index=0;  
struct node
{
 char NAME[20];
 char DES[20];
 char MAIL_ID[20];
 int PHONE_NO[12];
 char ID_NO[12];
}s[100];

//LCD CONFIGURATION
void LCD_CONFIGURATION(void);
void LCD_CMD(unsigned char A);
void LCD_DATA(unsigned char A);
void DISPLAY(unsigned char ARRAY[]);
void DELAY(unsigned int i);
void PIN_DIRECTION(void);

//SET EMPLOYEE DATA'S USING KEYPAD 
void SET_NAME_DATA(unsigned int index);
void SET_PHONE_NO(unsigned int index);
void SET_MAIL_ID(unsigned int index);
void DESIGNATION(unsigned int index);
void DATA_DISPLAY(unsigned int index);
			   
//SET EMPLOYEE DATA'S USING UART
void SET_NAME_DATA_UART(unsigned int index);
void SET_PHONE_NO_UART(unsigned int index);
void SET_MAIL_ID_UART(unsigned int index);
void DESIGNATION_UART(unsigned int index);
void DATA_DISPLAY_UART(unsigned int index);

//keypad
unsigned char KEYPAD_FUNCTION(void);

//ADD NEW EMPLOYEE
void UPDATE_DATA(void);
void UPDATE_DATA_UART(void);

//UART0 configuration
void UART0_FUN(void);
void UART0_WRITE(unsigned char C);
unsigned char UART0_READ(void);
void UART0_DISPLAY(unsigned char DATA[]);
//UART1 
void UART1_WRITE(unsigned char C);
unsigned char UART1_READ(void);
//ID VERIFY
void ID_NO_UART(unsigned int index);
void ID_NO(unsigned int index);
int VERIFY_ID(void);
//TERMINATION
void TERMINATION(void);
//READ RFID	DATA 
void READ_RFID(void);




