#include<stdio.h>
#include<conio.h>

main()
{
	float a1,a2,a3;
	clrscr();

	printf("Enter the first anfle of the triangle : ");
	scanf("%f",&a1);

	printf("Enter the second anfle of the triangle : ");
	scanf("%f",&a2);

	a3 = 180 - (a1+a2);
	printf("\nThe third angle of the triangle : %f",&a3);

	getch();
}