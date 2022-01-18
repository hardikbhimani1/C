#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5, j;
	clrscr();
	do
	{
		j=i;
		do
		{
			printf("%d ",j);
			j++;
		}while(j<=5);
		printf("\n");
		i--;
	}while(i>=1);
	getch();
}