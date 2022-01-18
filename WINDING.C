#include<stdio.h>
#include<conio.h>
void recur(int n)
{
	printf("\n winding %d",n);
	if(n<3)
	{
	    recur(n+1);
	}
	printf("\n\t unwinding %d",n);
}
void main()
{
	clrscr();
	recur(1);
	getch();
}


