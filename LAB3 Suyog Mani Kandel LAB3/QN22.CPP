#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,d,m,rev=0;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	m=n;
	do
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	 }while(n>0);
	 if(rev==m)
	 {
		printf("palindrome");
	 }
	 else
	 {
		printf("Not palindrome");
	  }
	getch();
}
