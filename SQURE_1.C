#include<stdio.h>
#include<conio.h>
int sq(int n)
{
	if(n==10)
	{
		printf("\n%d*%d\t:",n,n);

		return n*n;
	}
	else
	printf("\n%d*%d\t:",n,n);
	printf("\t%d",n*n);
		return  sq(n+1);
}
void main()
{

	clrscr();
	printf("\t%d",sq(1));
	getch();
}


