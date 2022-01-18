#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch=65; ch<=90; ch=ch+2)
	{
		printf("%c \t",ch);
		printf("%c \t",ch+33);
	}
	getch();
}