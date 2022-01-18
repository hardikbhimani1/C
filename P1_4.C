//Convert Inches to Centi Meter //  1 Inches = 2.54 CM.
#include<stdio.h>
#include<conio.h>
void main()
{
	float I, CM=2.54, ITCM;
	clrscr();
	printf("Enter the value of Inches : ");
	scanf("%f",&I);
	printf("\nInches = %.2f", CM);
	ITCM = I * CM;
	printf("\nITCM = %.2f",ITCM);
	getch();
}