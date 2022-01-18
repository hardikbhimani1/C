#include<stdio.h>
#include<conio.h>
float cri(float r)
{

	return 3.14*(r*r);
}
void main()
{
	float r;
	clrscr();
	printf("Enter r:");
	scanf("%f",&r);


	printf("\n simple i:%f",cri(r));
	getch();
}