#include<stdio.h>
#include<conio.h>
main()
{
	float x, a, b, c, d;
	clrscr();

	printf("1} formula: ");
	a=9, b=4, c=2, d=12;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a*b/c+d;
	printf("\n a*b/c+d : %f",x);

	getch();
	clrscr();

	printf("\n\n2} formula: ");
	a=6, b=9, c=45, d=5;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a*b+c/d;
	printf("\n a*b+c/d : %f",x);

	getch();
	clrscr();
	printf("\n\n3} formula: ");
	a=123, b=1, c=2, d=63;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a/b*c-d;
	printf("\n a/b*c-d : %f",x);

	getch();
	clrscr();
	printf("\n\n4} formula: ");
	a=8, b=30, c=7, d=6;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a+b*c/d;
	printf("\n a+b*c/d : %f",x);

	getch();
	clrscr();
	printf("\n\n5} formula: ");
	a=11, b=11, c=8, d=1;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a*b-c/d;
	printf("\n a*b-c/d : %f",x);

	getch();
	clrscr();
	printf("\n\n6} formula: ");
	a=6, b=2, c=6, d=12;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a*b/c*d;
	printf("\n a*b/c*d : %f",x);

	getch();
	clrscr();
	printf("\n\n7} formula: ");
	a=8, b=6, c=75, d=3;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a*b+c*d;
	printf("\n a*b+c*d : %f",x);

	getch();
	clrscr();
	printf("\n\n8} formula: ");
	a=70, b=55, c=63, d=40;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a-b+c-d;
	printf("\n a-b+c-d : %f",x);

	getch();
	clrscr();
	printf("\n\n9} formula: ");
	a=10, b=1, c=27, d=12;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a*b+c*d;
	printf("\n a*b+c*d : %f",x);
	getch();

	clrscr();
	printf("\n\n10} formula: ");
	a=21, b=72, c=31, d=1;
	printf("\n a=%f \t b=%f \t c=%f \t d=%f", a, b, c, d);
	x= a+b+c+d;
	printf("\n a+b+c+d : %f",x);
	getch();
	return 0;
}
