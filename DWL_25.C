#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=65;
	clrscr();
	i=65;
	while(i<=69)
	{
		j=65;
		while(j<=i)
		{
			if(j%2)
			{
			       printf("%c ",k+32);
			       k++;
			       j++;
			}
			else
			{
				printf("%c ",k);
				k++;
				j++;
			}

		}
		printf("\n");
		i++;
	}
	getch();
}