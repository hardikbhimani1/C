//1, 4, 9, 16, 25, ....., n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d\t ",i*i);
	}
	getch();
}