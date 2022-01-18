#include<stdio.h>
#include<conio.h>
void main()
{
	void si();
	clrscr();
	si();
	getch();
}
void si()
{
	float p,t,r;
	printf("enter p\n");
	scanf("%f",&p);
	printf("enter r\n");
	scanf("%f",&r);
	printf("enter t\n");
	scanf("%f",&t);
	printf("s i :%f",(p*r*t)/100);
}
