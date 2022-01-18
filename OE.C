// odd or even
#include<stdio.h>
#include<conio.h>
void main()
{
	int A;
	clrscr();
	printf("\n Enter value :");
	scanf("%d",&A);
	if(A%2)
	{
		printf("\n A is odd");
	}
	else
	{
		printf("\n A is Even");
	}
	getch();
}