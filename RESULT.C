//per=?, tot=?
#include<stdio.h>
#include<conio.h>
void main()
{
	int tot,maths=90, chemistry=69, physics=77;
	float per;
	clrscr();
	tot=maths + chemistry + physics;
	printf("total marks = %d",tot);
	per = tot / 3;
	printf("\n Persentage = %f",per);
	getch();

}
