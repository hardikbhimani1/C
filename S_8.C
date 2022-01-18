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
		if(str[i]>=97 && str[i]<122)
		{
		  str1[i]=str[i]-32;

		}
		else if(str[i]==32)
		{
		  str1[i]=str[i];

		}
		if(str[i]>=65 && str[i]<90)
		{
		  str1[i]=str[i]+32;

		}


	}

	printf("%s",str1);

	getch();
}