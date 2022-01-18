#include<stdio.h>
#include<conio.h>
float i(float p,float r,float y)
{

	return(p*r*y)/100;
}
void main()
{
	float p,r,y;
	clrscr();
	printf("Enter your amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter year:");
	scanf("%f",&y);

	printf("\n simple i:%f",i(p,r,y));
	getch();
}