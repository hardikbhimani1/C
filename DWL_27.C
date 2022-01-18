#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5, j;
	clrscr();
	while(i>=1)
	{
		j=5;
		while(j>=i)
		{
			printf("%d ",j);
			j--;
		}
		printf("\n");
		i--;
	}
	getch();
}