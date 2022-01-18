//Write a  PROGRAM to display the following output Maths = 90, Physics =77, Chemistry = 69, Total, Per.
#include<stdio.h>
#include<conio.h>
void main()
{
	int M, P, C, Tot;
	float Per;
	clrscr();
	printf("Enter Maths Marks:");
	scanf("%d",&M);
	printf("\nEnter Physics Marks:");
	scanf("%d",&P);
	printf("\nEnter Chemistry Marks:");
	scanf("%d",&C);
	Tot = M + P + C;
	printf("\nTotal Marks : %d",Tot);
	Per = Tot / 3;
	printf("\nPersentage : %f", Per);
	getch()
}