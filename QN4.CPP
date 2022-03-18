#include<stdio.h>
#include<conio.h>
void main()
{
	int i,N;
	clrscr();
	printf("Enter a number");
	scanf("%d",&N);
	for(i=2;i<=N;i=i+2)
	{
		printf("%d\t",i);

	}
	getch();
}