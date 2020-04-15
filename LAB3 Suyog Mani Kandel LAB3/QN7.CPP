#include<stdio.h>
#include<conio.h>
void main()
{
	int i,N,a;
	clrscr();
	printf("Enter no. of terms");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		a=i*i*i;
		printf("%d\t",a);
	}
	getch();
}