#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5], b[5], c[10], i;
	clrscr();
	for(i=0; i<=4; i++)
	{
		printf("Enter a [ %d ] : ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("Enter b [ %d ] : ", i);
		scanf("%d", &b[i]);
	}
	for(i=0; i<=4; i++)
	{
		c[i]=a[i];
		printf("\nc [ %d ] : %d", i, c[i]);
	}
	for(i=0; i<5; i++)
	{
		c[i]=b[i];
		printf("\nc [ %d ] : %d", i+5, c[i]);
	}
	getch();
}