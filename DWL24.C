#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=65;
	clrscr();
	i=65;
	do
	{
		j=65;
		do
		{
			if(i%2)
			{
				printf("%c ",k);
				k++;
				j++;
			}
			else
			{
				printf("%c ",k+32);
				k++;
				j++;
			}

		} while(j<=i);
		printf("\n");
		i++;

	}while(i<=69);
	getch();
}