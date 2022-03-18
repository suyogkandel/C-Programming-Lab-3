#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=0;
	clrscr();
	for(i=100;i>=2;i=i-2)
	{
		printf("%d\t",i);
		s=s+i;
	}
	printf("sum is %d",s);
	getch();
}
