#include<stdio.h>
#include<conio.h>
void main()
{
	int i, m, n;
	clrscr();
	printf("Enter value of m : ");
	scanf("%d",&m);
	printf("Enter value of n : ");
	scanf("%d",&n);
	for(i=m+1; i<n; i++)             //for(i=m; i<n; i++)
	{                                //{
		printf("i : %d\t",i);    	 //		if(i!=m)
	}                                //     printf("i : %d\t",i);
	getch();                         //}
}