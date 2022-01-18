#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch=65; ch<=90; ch++)
	{
		printf("%c = %d\t",ch,ch);
	}
	getch();
}