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
			if(j%2)
			{
			       printf("%c ",k+32);
			       k++;
			}
			else
			{
				printf("%c ",k);
				k++;
			}

		}
		printf("\n");
	}
	getch();
}