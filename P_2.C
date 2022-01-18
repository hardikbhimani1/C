#include<stdio.h>
#include<conio.h>
void main()
{
	int m=23,n=24,c,*x;
	clrscr();
	printf("\n value of x before swipe:%d",m);
	printf("\n value of y before swipe:%d",n);
	x=&m;
	c=*x;
	m=n;
	n=c;
	printf("\n value of m after swipe:%d",m);
	printf("\n value of n after swipe:%d",n);

	getch();
}