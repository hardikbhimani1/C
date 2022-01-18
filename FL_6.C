#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("Even Value : \n");
	for(i=1; i<=50; i++)
	{
		if(i%2)
		{
			printf("I : %d\t",++i);
		}
	}
	getch();
}