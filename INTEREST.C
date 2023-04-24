#include<stdio.h>
#include<conio.h>

main()
{
	int p,r,t,interest;
	clrscr();

	printf("Enter the principal amount : ");
	scanf("%d",&p);

	printf("Enter the rate : ");
	scanf("%d",&r);

	printf("Enter the time : ");
	scanf("%d",&t);

	interest = (p * r * t)/100;

	printf("The simple interest : %d",interest);

	getch();
}