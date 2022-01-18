#include<stdio.h>
#include<conio.h>
void main()
{
       int a[5][5],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
		printf("Enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);

	  }
	}

	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	  {
		printf("%d\t",a[j][i]);

	  }
	printf("\n");

	}
	getch();

}