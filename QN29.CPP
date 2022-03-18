#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    int choice,r;
    float A,C;
    clrscr();
    while(1)
    {
	 printf("1. Area of circle\n");
	 printf("2. Circumference of circle\n");
	 printf("3. Exit\n");
	 printf("Enter your choice");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	    case 1: printf("Enter radius");
		    scanf("%d",&r);
		    A=3.14*r*r;
		    printf("Area is %0.1f",A);
		    break;
	    case 2: printf("Enter radius");
		    scanf("%d",&r);
		    C=2*3.14*r;
		    printf("circumference is %0.1f",C);
		    break;
	    case 3: exit(1);
	    default: printf("wrong choice");
	 }
    }
    getch();
}
