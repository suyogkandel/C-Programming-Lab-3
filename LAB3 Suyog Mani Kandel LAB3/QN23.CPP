#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,m,d,sum=0;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	m=n;
	do
	{
		d=n%10;
		sum=sum+d*d*d;
		n=n/10;
	 }while(n>0);
	 if(sum==m)
	 {
		printf("Armstrong");
	 }
	 else
	 {
		printf("Not Armstrong");
	 }
	 getch();
}