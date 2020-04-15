#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n;
	float s=0;
	clrscr();
	printf("Enter no. of terms");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		s=s+pow(-1,i)/(2.0*i);
	}
	s=s+1;
	printf("sum is %0.1f",s);
	getch();
}
