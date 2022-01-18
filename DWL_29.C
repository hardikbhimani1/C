#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65, j;
	clrscr();
	while(i<=69)
	{
		j=i;
		while(j>=65)
		{
			printf("%c ",j);
			j--;
		}
		printf("\n");
		i++;
	}
	getch();
}