#include<stdio.h>
#include<conio.h>
void main()
{
	void cricle(float);
	float r;
	clrscr();
	printf("\n Enter R");
	scanf("%f",&r);
	cricle(r);
	getch();
}
void cricle(float r)
{
	printf("cricle area :%f",3.14*(r*r));
}
