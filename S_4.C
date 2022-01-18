#include<stdio.h>
#include<conio.h>
void main()
{
	char str[5];
	int i;
	clrscr();
	printf("\n Enter string :");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("\n%d",i);
	getch();
}