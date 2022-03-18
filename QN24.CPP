#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=n*i;
		printf("%d\t",a);
	}
	getch();
}


