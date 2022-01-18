#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("Odd Or Even Value : \n");
	for(i=1; i<=50; i++)
	{
		if(i%2)
		{
			printf("I : %d is Odd\t",i);
		}
		else
		{
			printf("I : %d is Even\t",i);
		}
	}
	getch();
}