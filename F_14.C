#include<stdio.h>
#include<conio.h>
float i()
{
	float p,r,y;
	printf("Enter your amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter year");
	scanf("%f",&y);
	return (p*r*y)/100;
}
void main()
{
	clrscr();
	printf("\n simple i:%f",i());
	getch();
}