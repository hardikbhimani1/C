#include<stdio.h>
#include<conio.h>
void star(int n)
{
	int i,j,sp=40;
	for(i=0;i<=n;i++)
	{
	  for(j=0;j<=sp;j++)
	  printf(" ");
	  for(j=0;j<=i;j++)
	  {
	      printf(" *");
	  }
	  printf("\n");
	  sp--;
	}
}
void main()
{

	clrscr();
	star(3);
	star(5);
	star(8);
	getch();
}



