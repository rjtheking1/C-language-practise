#include<stdio.h>

void main()
{
//	Q.1 Temperature Converter
//	Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
//	formula

	float celcius,fahrenheit;
	printf("enter the temperature=");
	scanf("%f",&celcius);
	
	fahrenheit = (celcius*9)/5+32;
	printf("fahrenheit = %.3f",fahrenheit);
	
}