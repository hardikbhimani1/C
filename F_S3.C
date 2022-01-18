#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str1[50],str2[50];
	clrscr();
	printf("Enter string:");
	gets(str1);
	strrev(str1);
	strcpy(str2,str1);
	if(strcmp(str2,strrev(str1))==0)
	{
		printf("pallindrom :%s",str1);
	}
	else
	{
		printf("not pallindrom");
	}
	getch();
}


