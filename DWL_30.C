#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, j, k=1;
	clrscr();
	do
	{
		j=1;
		do
		{
			printf("%d\t",k++);
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
	getch();
}