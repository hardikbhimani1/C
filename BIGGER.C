//which value is bigest
#include<stdio.h>
#include<conio.h>
void main()
{
	int x, y, z;
	clrscr();
	printf("Enter x: ");
	scanf("%d",&x);
	printf("\nEnter y: ");
	scanf("%d",&y);
	printf("\nEnter z:");
	scanf("%d",&z);
	if(x>y && x>z)
	{
		printf("\n big value is: %d",x);

	}
	else if(y>z && y>x)
	{
		printf("\n Big value is: %d",y);
	}
	else
	{
		printf("\n %d is bigger",z);
	}
	getch();
}