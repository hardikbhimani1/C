#include<conio.h>
#include<stdio.h>
void main()
{
	int p[5],q[5],r[5],t[5],g[5],ta[5],i;
	clrscr();
	for(i=0; i<3; i++)
	{
		printf("Enter product [%d] : ", i);
		scanf("%d", &p[i]);
		printf("Enter  que[%d] : ", i);
		scanf("%d", &q[i]);
		printf("enter  rate [%d] : ", i);
		scanf("%d", &r[i]);
		t[i]=q[i]*r[i];
		printf("\ttotal:%d",t[i]);
		g[i]=t[i]*0.05;
		printf("\twith gst1:%d",g[i]);
		ta[i]=t[i]+g[i];
		printf("\ttotal bill:%d",ta[i]);
		printf("\n\n");
	}
	getch();
}
