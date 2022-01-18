#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	clrscr();
	i=65;
	do
	{
		j=69;
		do
		{
			printf("%c ",j);
			j--;
		} while(j>=i);
		printf("\n");
		i++;
	} while(i<=69);
	getch();
}