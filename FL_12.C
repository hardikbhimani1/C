#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	ch=65;
	while(ch<=90)
	{
		printf("%c \t",ch);
		printf("%c \t",ch+33);
		ch=ch+2;
	}
	getch();
}