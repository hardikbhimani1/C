//Celsius to fahrenheit - (0 C * 9/5) + 32 = 32 F
#include<stdio.h>
#include<conio.h>
void main()
{
	float C, F;
	clrscr();
	printf("When 0 Celsius");
	F=(0 * 9/5) + 32;
	printf("\n(0 C * 9/5) + 32 = %.2f F", F);
	getch();

	clrscr();
	printf("When 1 Celsius");
	F=(1 * 9/5) + 32;
	printf("\n(1 C * 9/5) + 32 = %.2f F", F);
	getch();

	clrscr();
	printf("When 2 Celsius");
	F=(2 * 9/5) + 32;
	printf("\n(2 C * 9/5) + 32 = %.2f F", F);
	getch();
}