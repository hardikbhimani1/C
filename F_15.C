#include<stdio.h>
#include<conio.h>
float trengle()
{
	float a,h;
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter h:");
	scanf("%f",&h);

	return 0.5*(a*h);
}
void main()
{
	clrscr();
	printf("\n trengle area:%f",trengle());
	getch();
}