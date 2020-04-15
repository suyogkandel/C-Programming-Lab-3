#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,f=1;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("factorial is %d",f);
	getch();
}
