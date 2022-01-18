#include<conio.h>
#include<stdio.h>
void main()
{
	int P[5], Q[5], R[5], T_P[5], G[5], T_A[5], Y_B[5], i;
	clrscr();
	for(i=0; i<3; i++)
	{
		printf("Enter P [ %d ] : ", i);
		scanf("%d", &P[i]);
		printf("Enter Q [ %d ] : ", i);
		scanf("%d", &Q[i]);
		printf("Enter R [ %d ] : ", i);
		scanf("%d", &R[i]);
	}
	printf("\n");
	printf("\nP_No\tquntity\trate\tTotal\tGST\tTotal Amount\n");
	for(i=0; i<3; i++)
	{
		T_P[i]=Q[i]*R[i];
		G[i]=T_P[i]*0.05;
		T_A[i]=T_P[i]+G[i];
		printf("\n%d\t%d\t%d\t%d\t %d\t%d",P[i],Q[i],R[i] ,T_P[i],G[i],T_A[i]);
	}
	getch();
}