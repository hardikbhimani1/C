#include<stdio.h>
#include<conio.h>
void main ()
{
	char str[10], str1[10]="";
	int i,j;
	clrscr();
	printf("Enter string:");
	gets(str);
	for(i=0; str[i]!='\0'; i++)

	{
		str1[i]=str[i]-32;
	}

	printf("%s",str1);

	getch();
}