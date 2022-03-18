#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0,b=1,c;
	clrscr();
	printf("Enter no. of terms");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=c;
		printf("%d\t",c);
	}
	getch();
}


