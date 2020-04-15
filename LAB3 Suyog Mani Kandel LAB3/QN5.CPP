#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=1,N;
	clrscr();
	printf("Enter no. of terms");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("%d\t",a);
		a=a+4;
	 }
	 getch();
}
