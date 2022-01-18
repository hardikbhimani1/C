//Convert feet to inches //  1 feet = 12 inches.
#include<stdio.h>
#include<conio.h>
void main()
{
	int F, I=12, FTI;
	clrscr();
	printf("Enter the value of Feet : ");
	scanf("%d",&F);
	printf("\nInches = %d", I);
	FTI = F * I;
	printf("\nFTI = %d",FTI);
	getch();
}