/*
 * KS0108_AVR.h
 *
 * Created: 5/9/2016 11:55:30 AM
 *  Author: user
 */ 


#ifndef KS0108-AVR_H_
#define KS0108-AVR_H_
void GLCD_Delay(void);
unsigned char GLCD_ReadStatus(unsigned char controller);
void GLCD_WriteCommand(unsigned char commandToWrite, unsigned char controller);
unsigned char GLCD_ReadData(void);
#endif /* KS0108-AVR_H_ */