#include<stdio.h>
#include<conio.h>
float trengle(float a,float h)
{

	return 0.5*(a*h);
}
void main()
{
	float a,h;
	clrscr();
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter h:");
	scanf("%f",&h);


	printf("\n simple i:%f",trengle(a,h));
	getch();
}