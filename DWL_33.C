#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5, j, sp=40;
	clrscr();
	while(i>=1)
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			printf(" %d",j);
			j++;
		}
		printf("\n");
		sp++;
		i--;
	}
	getch();
}