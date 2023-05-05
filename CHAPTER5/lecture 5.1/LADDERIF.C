#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("enter a : ");
	scanf("%d",&a);

	if(a<0)
	{
		printf("%d is nagetive.",a);
	}
	else if(a>0)
	{
		printf("%d is positive.",a);
	}
	else
	{
		printf("%d is neutral",a);
	}

	getch();
}