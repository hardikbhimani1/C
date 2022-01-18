#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=65;
	clrscr();
	for(i=65; i<=69; i++)
	{
		for(j=65; j<=i; j++)
		{
			if(i%2)
			{
				printf("%c ",k);
				k++;
			}
			else
			{
				printf("%c ",k+32);
				k++;
			}

		}
		printf("\n");
	}
	getch();
}