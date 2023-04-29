#include<stdio.h>
#include<conio.h>

main()
{
	int a=10,b=50,c;
	clrscr();

	c=a;
	a=b;
	b=c;

	printf("the value of a is : %d",a);
	printf("\nthe value of b is : %d",b);

	getch();
}