#include<stdio.h>
#include<conio.h>
void main()
{
	void tringle();
	clrscr();
	tringle();
	getch();
}
void tringle()
{
	float a,h;;
	printf("enter p\n");
	scanf("%f",&a);
	printf("enter r\n");
	scanf("%f",&h);

	printf("s i :%f",0.5*(a*h));
}
