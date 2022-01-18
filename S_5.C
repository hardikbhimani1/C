#include<stdio.h>
#include<conio.h>
void main ()
{
	char str[10], str1[10];
	int i, j,k=0;
	clrscr();
	printf("Enter string:");
	gets(str);
	for(i=0; str[i]!='\0'; i++);
	for(j=i-1;j>=0;j--,k++)
	{
		str1[k]=str[j];
	}
	str1[k]='\0';
	printf("\n Reverse : %s",str1);
	getch();
}