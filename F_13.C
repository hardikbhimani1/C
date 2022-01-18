#include<stdio.h>
#include<conio.h>
float cri()
{
	float r;
	printf("Enter r:");
	scanf("%f",&r);
	return 3.14*(r*r);
}
void main()
{
	clrscr();
	printf("\n simple i:%f",cri());
	getch();
}