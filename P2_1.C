//Electric bill
#include<stdio.h>
#include<conio.h>
void main()
{
	float U, a, b, c, e, f;
	clrscr();
	printf("Enter Unit : ");
	scanf("%f",&U);
	if(U<=100)
	{
	       a=U*0.6;
	       b=a+50;
	       printf("\nYour Electricity Bill : %.2f Rs.",b);
	}
	else if(U>=101 && U<=300)
	{
			a=U-100;
			b=(a*0.80)+(60+50);
			printf("\n Your Electrycity Bill : %.2f",b);
	}
	else if(U>300)
	{
		a=U-100;
		b=a-200;
		c=(0.90*b)+270;
		printf("\nYour Electricity Bill : %.2f",c);
		if(c>300)
		{
			e=c*1.15;
			printf("\nYour Electicity Bill : %.2f Rs.",e);
		}
	}
	getch();
}