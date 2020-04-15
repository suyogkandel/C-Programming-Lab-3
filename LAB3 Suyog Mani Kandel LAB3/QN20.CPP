#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,d,s=0;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	do
	{
		d=n%10;
		s=s+d;
		n=n/10;
	 }while(n>0);
	 printf("Sum of digits is %d",s);
	 getch();
}