#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	ch=65;
	do
	{
		printf("%c = %d\t",ch,ch);
		ch++;
	}while (ch<=90);
	getch();
}