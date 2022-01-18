#include<stdio.h>
#include<conio.h>
void main()
{
	char str;
	clrscr();
	printf("\n Enter string :");
	scanf("%[^\n]",str);

	printf("\n%s",str);
	getch();
}