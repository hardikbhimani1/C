#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=1, sp=40;
	clrscr();
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=sp; j++)
			printf(" ");
		for(j=1; j<=i; j++)
		{
			if(k%2)
			{
				printf("%d ",1);
			}
			else
			{
				printf("%d ",0);
			}
			k++;
		}
		printf("\n");
		sp++;
	}
	getch();
}