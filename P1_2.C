// Dollar to Rupee
#include<stdio.h>
#include<conio.h>
void main()
{
	 float D,  R, Inr;
	 clrscr();
	 printf("Enter Dollar Price : ");
	 scanf("%f",&D);
	 printf("Enter Rupees Price : ");
	 scanf("%f",&R);
	 Inr = D * R;
	 printf("Inr is : %.2f",Inr);
	 getch();
}
