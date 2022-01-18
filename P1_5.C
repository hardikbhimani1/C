
//Celsius To Fahrenheit - (0 C * 9/5) + 32 = 32 F
#include<stdio.h>
#include<conio.h>
void main()
{
	int C, F=32, CF;
	clrscr();
	printf("Enter the value of Celsius : ");
	scanf("%d",&C);
	printf("\nFahrenheit = %d", F);
	CF = (C * 9/5) + 32;
	printf("\n( %d * 9/5) + 32 = %d", C, CF);
	getch();
}