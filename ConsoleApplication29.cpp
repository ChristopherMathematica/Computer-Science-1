#define button 2;
# include <p32xxxx.h>
# include <xc.h>
#include <sys/attribs.h>
# include "config_bits.h" 
#include "pch.h"
#include <iostream>
int main()
{
	delay(100);
	int pNum, toDisplay;
		pNum = button.Input();
	toDisplay = GeneratePrimeNumber(pNum);
	DisplayNumber(toDisplay);
}


void LEDtoTurnOn(int ledNo)
{
	int digit;
	switch (ledNo) {
	case 1:  TRISAbits.TRISA10 = 1;//AN3
			 LATAbits.LATA10 = 1;
	case 2: TRISAbits.TRISA9 = 1;//AN2
			LATAbits.LATA9 = 1;
	case 3: TRISBbits.TRISB13 = 1;
		    LATBbits.LATB13 = 1;//AN1
			ANSELBbits.ANSB13 = 1;
	case 4: TRISBbits.TRISB12 = 1;
			LATBbits.LATB12 = 1; //AN0
			ANSELBbits.ANSB12 = 1;
	default: exit(0);
	}
}

void DisplayNumber(int number) {
	if (number == oneDigit) {
		LEDtoTurnOn(1);
		SSDforNum(digit(number, 1));
	}
	if (number == twoDigit) {
		LEDtoTurnOn(1);
		SSDforNum(digit(number, 1));
		LEDtoTurnOn(2);
		SSDforNum(digit(number, 2));
	}
	if (number == threeDigit) {
			LEDtoTurnOn(1);
			SSDforNum(digit(number, 1));
			LEDtoTurnOn(2);
			SSDforNum(digit(number, 2));
			LEDtoTurnOn(3);
			SSDforNum(digit(number, 3));
	}
	if (number == fourDigit) {
		LEDtoTurnOn(1);
		SSDforNum(digit(number, 1));
		LEDtoTurnOn(2);
		SSDforNum(digit(number, 2));
		LEDtoTurnOn(3);
		SSDforNum(digit(number, 3));
		LEDtoTurnOn(4);
		SSDforNum(digit(number, 4));
	}
}

void tricolorled(int a,int num)
{
	switch (a)
	{
	case 0:
		LATDbits.LATD2 = 0;
		LATDbits.LATD12 = 0;
		LATDbits.LATD3 = 0;

		break;
	case 1:
		LATDbits.LATD2 = 0;
		LATDbits.LATD12 = 0;
		LATDbits.LATD3 = 1;
		break;
	case 2:
		LATDbits.LATD2 = 0;
		LATDbits.LATD12 = 1;
		LATDbits.LATD3 = 0;
		break;
	case 3:
		LATDbits.LATD2 = 0;
		LATDbits.LATD12 = 1;
		LATDbits.LATD3 = 1;
		break;
	case 4:
		LATDbits.LATD2 = 1;
		LATDbits.LATD12 = 0;
		LATDbits.LATD3 = 0;
		break;
	case 5:
		LATDbits.LATD2 = 1;
		LATDbits.LATD12 = 0;
		LATDbits.LATD3 = 1;
		break;
	case 6:
		LATDbits.LATD2 = 1;
		LATDbits.LATD12 = 1;
		LATDbits.LATD3 = 0;
		break;
	case 7:
		LATDbits.LATD2 = 1;
		LATDbits.LATD12 = 1;
		LATDbits.LATD3 = 1;
		break;
	}
}

static bool isPrime(int j)
{
	// Corner case 
	if (j <= 1)
		return false;

	// Check from 2 to n-1 
	for (int i = 2; i < j; i++)
		if (j % i == 0)
			return false;

	return true;
}

int GenerateRandomNumber() {
	int r = rand() % 255;
	return r;
}

int GeneratePrimeNumber(int num) {
	while (isPrime(num))
	num = GenerateRandomNumber();

	return num;
}

void delay(int a)
{
	int i, j;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 10000; j++);
	}
}