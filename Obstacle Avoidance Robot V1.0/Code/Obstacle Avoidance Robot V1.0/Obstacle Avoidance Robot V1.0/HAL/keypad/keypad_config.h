/*
 * keypad_config.h
 *
 * Created: 5/16/2023 4:59:20 AM
 *  Author: Nada
 */ 


#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

//*******************MACROS DECLERATION***************
// keypad configuration rows number
#define keypad_rows_num      4
// keypad configuration columns number
#define keypad_columns_num   4
// KEYPAD configuration Port
#define keypad_port      PC
// KEYPAD CONFIGURATIONS PINS to be used in Dio initialization
#define  row_1        pinc0
#define  row_2        pinc1
#define  row_3        pinc2
#define  row_4        pinc3
#define  column_1     pinc4
#define  column_2     pinc5
#define  column_3     pinc6
#define  column_4     pinc7

//******************DATA TYPES DECLERATION************
// KEYPAD CONFIGURATIONS PINS
typedef enum
{
	row1= 0,
	row2 =1,
	row3 =2,
	row4 =3,
	column1 =4,
	column2 =5,
	column3 =6,
	column4 =7	
}keypad_pin;
// KEYPAD CONFIGURATIONS KEYS (first number represents the row number second number represents the column number)
// User can configure the name of each hbutton
typedef enum
{
   key_11=0,
   key_12,
   key_13,
   key_14,
   key_21,
   key_22,
   key_23,
   key_24,
   key_31,
   key_32,
   key_33,
   key_34,
   key_41,
   key_42,
   key_43,
   key_44
}keypad_key;
//**********************************************************

#endif /* KEYPAD_CONFIG_H_ */