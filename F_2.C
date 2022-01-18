#include<stdio.h>
#include<conio.h>
void main()
{
	void dosum();
	clrscr();
	dosum();
	dosum();
	getch();
}
void dosum()
{
	int a,b;
	printf("\nEnter a,b:");
	scanf("%d%d",&a,&b);

	printf("\n a+b:%d",a+b);
}