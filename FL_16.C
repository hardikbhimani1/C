//1, 2, 4, 8, 16, ....., n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n=64;
	clrscr();
	for(i=1; i<=n; i=i*2)
	{
		printf("%d\t",i);
	}
	getch();
}
