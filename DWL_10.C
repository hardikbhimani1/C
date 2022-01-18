#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	ch=97;
	do
	{

		printf(" %c=",ch);
		printf("%d\t",ch);
		ch++;
	}while(ch<=122);
	getch();
}