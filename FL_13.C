#include<conio.h>
#include<stdio.h>
void main()
{
	char ch, i;
	clrscr();
	for(ch=64; ch<=89; ch++)
	{
		if(ch%4==0)
			printf("%c \n",ch+1);
		else
			printf("%c\t ",ch+1);
	}
	getch();
}