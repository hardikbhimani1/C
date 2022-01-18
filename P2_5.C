#include <stdio.h>
#include<conio.h>
void main()
{
    int M, P, C, Tot, Per;
	clrscr();
    printf("\nEnter Maths marks : ");
    scanf("%d",&M);
    printf("\nEnter Physics marks : ");
    scanf("%d",&P);
    printf("\nEnter Chemistry marks : ");
    scanf("%d",&C);
    Tot=M+P+C;
    printf("\nTotal Marks : %d",Tot);
    Per=Tot/3;
    printf("\nPersantage : %d %",Per);
    if(Per>=75)
    {
        printf("\nGrade A : %d %",Per);
    }
    else if(Per>=60 && Per<75)
    {
        printf("\nGrade B : %d %",Per);
    }
    else if(Per>=45 && Per<60)
    {
        printf("\nGrade C : %d %",Per);
    }
    else if(Per>=35 && Per<45)
    {
        printf("\nGrade D : %d %",Per);
    }
    else
    {
        printf("\nYour Persantage : %d %",Per);
        printf("\nYou are Fail \n  Better Luck Next Time");
    }
    getch();
    
}