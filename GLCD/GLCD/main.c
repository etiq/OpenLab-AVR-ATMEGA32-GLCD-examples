/*
 * GLCD.c
 *
 * Created: 3/22/2016 4:03:17 PM
 * Author : Etiq Technologies
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "font5x8.h"
#include "graphic.h"
#include "KS0108.h"
/*main function*/

int main(void)
{
  GLCD_Initalize();
  GLCD_ClearScreen();
  while(1)
  {
	  GLCD_GoTo(1,1);
	  GLCD_WriteString("ETIQ TECHNOLOGIES");   //print the string on GLCD
	  _delay_ms(1000);
	  GLCD_ClearScreen();
	  GLCD_Circle(64, 32, 28);                //draws circle
	  _delay_ms(1000);
	  GLCD_ClearScreen();
	  GLCD_Rectangle(30, 12, 70,40);         //draws a rectangle
	  _delay_ms(1000);
	  GLCD_ClearScreen();
  }
  }

