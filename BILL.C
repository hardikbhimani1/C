//Price, Quantity, Discount = 10%, GST = 18%
#include<stdio.h>
#include<conio.h>
void main()
{
	int P, Q, Tot, Tot_P;
	float GST;
	clrscr();
	printf("\n Enter Price: ");
	scanf("%d",&P);
	printf("\n Enter Quantity: ");
	scanf("%d",&Q);
	Tot= P * Q;
	Tot_P = Tot * 0.9;
	printf("\n Total Price: %d",Tot_P);
	GST = Tot_P * 1.18;
	printf("\n Your Bill : %.2f",GST);
	getch();
}