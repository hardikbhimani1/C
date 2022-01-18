#include<stdio.h>
#include<conio.h>
void main()
{
	int Phy[5], che[5], mth[5], T_m[5], Per[5], g[5],i;
	clrscr();
	for(i=0; i<2; i++)
	{
		printf("student:%d\n",i+1);
		printf("Enter Phy [ %d ] : ", i);
		scanf("%d", &Phy[i]);
		printf("Enter che [ %d ] : ", i);
		scanf("%d", &che[i]);
		printf("Enter mth [ %d ] : ", i);
		scanf("%d", &mth[i]);
	}
	printf("\n");
	printf("\nstudent\tphy\tche\tmth\tTotal\tpr\tgrade\n");
	for(i=0;i<2;i++)
	{
		T_m[i]=Phy[i]+che[i]+mth[i];
		Per[i]=T_m[i]/3;
		if(Per[i]>=75)
		{
			printf("\n%d\t\n%d\t%d\t%d\t%d\t%d\tA",i+1,Phy[i],che[i],mth[i] ,T_m[i],Per[i]);
		}
		else if(Per[i]>=60 && Per[i]<75)
		{
			printf("\n%d\t%d\t%d\t%d\t%d\t%d\tB",i+1,Phy[i],che[i],mth[i] ,T_m[i],Per[i]);
		}
		else if(Per[i]>=45 && Per[i]<60)
		{
			printf("\n%d\t%d\t%d\t%d\t%d\t%d\tC",i+1,Phy[i],che[i],mth[i] ,T_m[i],Per[i]);
		}
		else if(Per[i]>=35 && Per[i]<45)
		{
			printf("\n%d\t%d\t%d\t%d\t%d\t%d\tD",i+1,Phy[i],che[i],mth[i] ,T_m[i],Per[i]);
		}
		else
		{
			printf("\n%d\t%d\t%d\t%d\t%d\t%d\tFAIL",i+1,Phy[i],che[i],mth[i] ,T_m[i],Per[i]);
		}
	}
	getch();
}