#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n;
	clrscr();
	printf("Enter Value n :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("i : %d\t",i);
	}
	getch();
}