#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=0;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i*i<=n;i++)
	{
		if(i*i==n)
		{
			s=1;
		 }
	}
	if(s==1)
	{
		printf("perfect square");
	}
	else
	{
		printf("Not perfect square");
	}
	getch();
}
