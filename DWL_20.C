#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	clrscr();
	i=1;
	do
	{
		j=5;
		do
		{
			printf("%d ",j);
			j--;
		} while(j>=i);
		printf("\n");
		i++;
	} while(i<=5);
	getch();
}