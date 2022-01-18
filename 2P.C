#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10;
	int *ptr;
	int **ppttrr;
	clrscr();
	ptr=&i;
	ppttrr=&ptr;
	printf("\n value of i:%d adress of i %u",i,&i);
	printf("\n value of i %d adress of i %u",*ptr,ptr);
	printf("\n value of i %d adress of i %u",**ppttrr,ppttrr);
	getch();
}
