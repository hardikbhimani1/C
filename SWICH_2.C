#include<stdio.h>
#include<conio.h>
void main()
{
	int x,a,b,c;
	clrscr();
	printf("For add 1\nFor sub 2\nFor mul 3\nFor div 4\nEnter your choose:");
	scanf("%d",&x);
	if(x<5 && x!=0)
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);

	switch(x)
	{
		case 1:
		printf("\nYour choose add");
		c=a+b;
		printf("your ans is %d",c);
		break;
		case 2:
		printf("\nYour choose sub");
		c=a-b;
		printf("your ans is %d",c);
		break;
		case 3:
		printf("\nYour choose mul");
		c=a*b;
		printf("your ans is %d",c);
		break;
		case 4:
		printf("\nyour choose div");
		c=a/b;
		printf("\nyour ans is %d",c);
		break;
		default :
		printf("\nwrong choose");
		break;


	}
	getch();
}