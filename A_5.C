#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],i,k=4;
	clrscr();
	for(i=0;i<5;i++)
	{
	   printf("Enter a[%d]:",i);
	   scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	   b[i]=a[k--];
	   printf("\nb[%d]:%d",i,b[i]);
	}
	for(i=0;i>5;i++)
	{
	  printf("\n%d",b[i]);
	}
	getch();
}