#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,s=0;
    clrscr();
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	if(n<0)
		continue;
	s=s+n;
    }
    printf("sum is %d",s);
    getch();
}
