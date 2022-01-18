#include<stdio.h>
#include<conio.h>
void main()
{
	void trengle(float,float);
	float a,h;
	clrscr();
	printf("\n Enter a");
	scanf("%f",&a);
	printf("\n Enter h");
	scanf("%f",&h);
	trengle(a,h);
	getch();
}
void trengle(float a,float h)
{
	printf("trengle area :%f",0.5*(a*h));
}
