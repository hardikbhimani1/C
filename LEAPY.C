// Leap Year and Not Leap Year
#include<stdio.h>
#include<conio.h>
void main()
{
	int A;
	clrscr();
	printf("\n Enter value :");
	scanf("%d",&A);
	if(A%4)
	{
		printf("\n %d year is not leap year",A);
	}
	else
	{
		printf("\n %d year is leap year",A);
	}
	getch();
}