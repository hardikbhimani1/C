#include<stdio.h>
#include<conio.h>
void printData()
{
	printf("\n printData called");
}
void main()
{
	clrscr();
	printf("\n Before main");
	printData ();
	printf("\n After main");
	getch();
}


