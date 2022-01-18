#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("\n enter n :");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("monday");
		break;
		case 2:
		printf("tuesday");
		break;
		case 3:
		printf("wednesday");
		break;
		case 4:
		printf("thusday");
		break;
		case 5:
		printf("friday");
		break;
		case 6:
		printf("saturday");
		break;
		case 7:
		printf("sunday");
		break;
		default :
		printf("Wrong choise");
		break;
	}
	getch();
}