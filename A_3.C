#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
	   printf("Enter a[%d]:",i);
	   scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	   printf("Enter b[%d]:",i);
	   scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
	  printf("\n%d \t%d",a[i],b[i]);
	}
	getch();
}
