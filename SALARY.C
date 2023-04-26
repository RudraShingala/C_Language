#include<stdio.h>
#include<conio.h>

main()
{
	float b_s,g_s,hra,da,ta;
	clrscr();

	printf("Enter the Base Salary : ");
	scanf("%f",&b_s);

	printf("Enter the percentage of HRA : ");
	scanf("%f",&hra);

	printf("Enter the percentage of DA : ");
	scanf("%f",&da);

	printf("Enter the percentage of TA : ");
	scanf("%f",&ta);

	hra = (b_s*hra)/100;
	da = (b_s*da)/100;
	ta = (b_s*ta)/100;

	g_s = b_s + hra + ta + da;
	printf("\nThe gross salary is : %f",g_s);

	getch();
}