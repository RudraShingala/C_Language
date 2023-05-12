#include<stdio.h>
#include<conio.h>

main()
{
	int i,a=1,n;
	clrscr();

	printf("Enter a number : ");
	scanf("%d", &n);

	for(i=1 ; i<=n ; i++)
	{
		a=a*i;
	}
	printf("The factorial of number is %d", a);

	getch();
}