#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[50];
	clrscr();
	printf("Enter string :");
	gets(str);

	printf("\n length :%d",strlen(str));
	printf("\n Reverse :%s",strrev(str));
	printf("\n upper :%s",strupr(str));
	printf("\n loewr :%s",strlwr(str));
	printf("\n %s",str);
	getch();
}