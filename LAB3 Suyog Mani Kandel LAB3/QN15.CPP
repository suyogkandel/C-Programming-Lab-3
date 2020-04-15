#include<stdio.h>
#include<conio.h>
void main()
{
	int i,y,x,ans=1;
	clrscr();
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("Answer is %d",ans);
	getch();
}
