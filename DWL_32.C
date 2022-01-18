#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, j, sp=40;
	clrscr();
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			printf(" %d",j);
			j++;
		}while(j<=i);
		printf("\n");
		sp--;
		i++;
	}while(i<=5);
	getch();
}