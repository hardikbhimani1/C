#include<stdio.h>
#include<conio.h>
void main()
{
	void cricle(float,float,float);
	float r,p,t;
	clrscr();
	printf("\n Enter R");
	scanf("%f",&r);
	printf("\n Enter p");
	scanf("%f",&p);
	printf("\n Enter t");
	scanf("%f",&t);
	cricle(p,r,t);
	getch();
}
void cricle(float r,float p,float t)
{
	printf("cricle area :%f",(p*r*t)/100);
}
