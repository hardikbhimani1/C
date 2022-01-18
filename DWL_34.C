#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp=40;
	clrscr();
	i=1;
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
			printf("%d ",i);
			j++;
		}while(j<=i);
		printf("\n");
		sp--;
		i++;
	}while(i<=5);
	getch();
}