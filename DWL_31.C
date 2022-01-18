#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, j, k=1;
	clrscr();
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(k%2)
			{
				printf("%d ",1);
				j++;
			}
			else
			{
				printf("%d ",0);
				j++;
			}
			k++;
		}
		printf("\n");
		i++;
	}
	getch();
}