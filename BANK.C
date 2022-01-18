#include<stdio.h>

int main()
{
	int B=1000, D, W, C_B, D_W;
	printf("Your current Balance : %d",B);
	printf("\nPress 1 for withdraw Money \nPress 2 for Deposit Money :");
	scanf("%d",&D_W);
	if(D_W==1)
	{
		printf("\nEnter your Amount :");
		scanf("%d",&W);
		C_B=B-W;
		printf("\nYour Current Balance is : %d",C_B);
		if(B==0)
		{
			printf("\nNo Money in your account");
		}
	}
	else if(D_W==2)
	{
		printf("\nEnter your Amount :");
		scanf("%d",&D);
		C_B=B+D;
		printf("\nYour current Balance is %d",C_B);
	}
	return 0;
}