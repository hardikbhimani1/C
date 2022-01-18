#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str1[50],str2[50],str3[50];
	clrscr();
	printf("Enter string :");
	gets(str1);
	printf("Enter string :");
	gets(str2);
	strcat(str1,str2);
       printf("\n %s",str1);

	printf("\n strcmp :%d",strcmp(str1,str2));
	printf("\n strcmi :%d",strcmpi(str1,str2));
	strcpy(str3,str2);
	printf("\n strcpy: :%s",str3);

	getch();
}