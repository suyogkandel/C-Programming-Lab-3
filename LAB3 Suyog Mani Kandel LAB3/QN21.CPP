#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,d,rev=0;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	do
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	 }while(n>0);
	 printf("Reverse is %d",rev);
	getch();
}
