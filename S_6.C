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
	for(j=0;j<=i;j++,k++)
	{
		str1[k]=str[j];
		if(str1[k]!='\0')
		{
		  str1[k]=str[k]-32;
		}


	}
	str1[k]='\0';
	printf("%s",str1);

	getch();
}