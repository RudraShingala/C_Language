#include<stdio.h>
#include<conio.h>

main()
{
	int n, sum, first, last;
	clrscr();

	printf("Enter a number : ");
	scanf("%d", &n);
	last=n%10;

	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	sum=first+last;

	if(n>10)
		printf("The sum of first and last digit of number is : %d", sum);
	else
		printf("Enter at least two digit number.");

	getch();
}