#include<stdio.h>
#inlucde<conio.h>
void main()
{
    int S, HRA, DA, Gross;
    clrscr();
    printf("\nEnter Salary : ");
    scanf("%d",&S);
    if(S<=5000)
    {
        HRA=S*0.08;
        DA=S*0.2;
        Gross=HRA + DA + S;
        printf("Gross Salary : %d Rs.",Gross);
    }
    else if(S>5000 && S<=10000)
    {
        HRA=S*0.12;
        DA=S*0.30;
        Gross=HRA + DA + S;
        printf("Gross Salary : %d Rs.",Gross);
    }
    else if(S>10000 && S<=15000)
    {
        HRA=S*0.15;
        DA=S*0.4;
        Gross=HRA + DA + S;
        printf("Gross Salary : %d Rs.",Gross);
    }
    else
    {
        HRA=S*0.2;
        DA=S*0.5;
        Gross=HRA + DA + S;
        printf("Gross Salary : %d Rs.",Gross);
    }
    getch();
    
}