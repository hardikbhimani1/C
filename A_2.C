#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,b[5],j;
	clrscr();
	for(i=0;i<5;i++)
	{
	   printf("Enter a[%d]:",i);
	   scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
	   printf("Enter b[%d]:",j);
	   scanf("%d",&b[j]);
	}
	for(i=0;i<5;i++)
	{
	  printf("\n a[%d]:%d",i,a[i]);
	}
	for(j=0;j<5;j++)
	{
	  printf("\n b[%d]:%d",j,b[j]);
	}
	getch();
}
