#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,odd=0,even=0;
	clrscr();
	printf("Enter no. of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		 }
		 else
		 {
			odd=odd+i;
		  }
	}
	printf("even sum is %d\n odd sum is %d",even,odd);
	getch();
}
