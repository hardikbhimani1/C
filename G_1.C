#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b;
	clrscr();
	a1:
	if(a<=5)
	{
		b=1;
		b1:
		if(b<=a)
		{
			printf("*");
			b++;
			goto b1;
		}
		printf("\n");
		a++;
		goto a1;
	}
	getch();
}

















