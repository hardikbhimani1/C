#include<stdio.h>
#include<conio.h>
void dosum(int x,int y)
{
	printf("\n a+b:%d",x+y);
}
void main()
{


	int a,b;
	clrscr();
	printf("\nEnter a and b\n");
	scanf("%d%d",&a,&b);
	dosum(a,b);
	getch();
}
