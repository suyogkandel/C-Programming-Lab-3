#include<stdio.h>
#include<conio.h>
void main()
{
	int i,N,a=2;
	clrscr();
	printf("Enter no. of terms");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("%d\t",a);
		a=a+2;
	 }
	 getch();
}
