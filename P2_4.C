#include<stdio.h>
#include<conio.h>
void main()
{
    int I, Tax, C_I;
    clrscr();
    printf("\nEnter Income : ");
    scanf("%d",&I);
    if(I<=2500)
    {
	Tax=I*1.0;
	printf("Clear Income : %d Rs.",Tax);
    }
    else if(I>2500 && I<=5000)
    {
	Tax=I*1.1;
	printf("Your clear Income : %d Rs.",Tax);
    }
    else if(I>5000 && I<=10000)
    {
	Tax=I*1.2;
	printf("Your clear Income: %d Rs.",Tax);
    }
    else
    {
	Tax=I*1.3;
	printf("Your clear Income: %d Rs.",Tax);
    }
    getch();
}