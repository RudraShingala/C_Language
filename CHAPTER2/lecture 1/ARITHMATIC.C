#include<stdio.h>
#include<conio.h>

main()
{
	int a=12,b=6,sum=a+b,sub=a-b,mul=a*b,div=a/b,mod=a%b;
	clrscr();

	printf("Sum of a and b is : %d",sum);
	printf("\nSubstraction of a and b is : %d",sub);
	printf("\nmultiplication of a and b is : %d",mul);
	printf("\ndivision of a and b is : %d",div);
	printf("\nmodules of a and b is : %d",mod);

	getch();
}