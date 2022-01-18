#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n=64;
	clrscr();
	i=1;
	do
	{
		printf("%d\t",i);
		i=i*2;
	} while(i<=n);
	getch();
}