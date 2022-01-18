#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	ch=97;
	while(ch<=122)
	{
		printf("\t %c",ch);
		ch++;
	}
	getch();
}