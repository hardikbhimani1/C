// Swapping
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	clrscr();
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter Swapping");
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	getch();
}

