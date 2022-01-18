#include<stdio.h>
#include<conio.h>
void main()
{
	int x,a,b,c,y;
	clrscr();
	g1:
	printf("\nFor add 1\nFor sub 2\nFor mul 3\nFor div 4\nEnter your choice :");
	scanf("%d",&x);
	if(x<5 && x!=0)
	{
		printf("\nEnter value of A:");
		scanf("%d",&a);
		printf("Enter value of B:");
		scanf("%d",&b);
		printf("\n");
	}
	switch(x)
	{
		case 1:
		printf("You choose add\n");
		c=a+b;
		printf("Your add is : %d",c);
		break;

		case 2:
		printf("You choose sub\n");
		c=a-b;
		printf("Your add is : %d",c);
		break;

		case 3:
		printf("You choose sub\n");
		c=a*b;
		printf("Your add is : %d",c);
		break;

		case 4:
		printf("You choose sub\n");
		c=a/b;
		printf("Your add is : %d",c);
		break;

		default :
		printf("Wrong choise");
		break;
	}
	printf("\n\nNext choice");
	g3:
	printf("\nFor yes 1\nFor exit 2\nEnter your choice:");
	scanf("%d",&y);
	if(y==1)
	{
		goto g1;
	}
	else if(y==2)
	{
		goto g2;
	}
	else if(y>2 && y==0)
	{
		printf("\n\ncompulsory choose 1 or 2");
		goto g3;
	}
	g2:
	getch();
}