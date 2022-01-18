#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp=40;
	clrscr();
	for(i=65; i<=69; i++)
	{
		for(j=1; j<=sp; j++)
			printf(" ");
		for(j=65; j<=i; j++)
		{
			printf("%c ",j);
		}
		printf("\n");
		sp--;
	}
	getch();
}