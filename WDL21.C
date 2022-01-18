#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	clrscr();
	i=1;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf("%d ",i);
			j--;

		}
		printf("\n");
		i++;
	}
	getch();
}