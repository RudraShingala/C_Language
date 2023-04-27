#include<stdio.h>
#include<conio.h>

main()
{
	float x,y,z,ans;
	clrscr();

	printf("Enter the value of X : ");
	scanf("%f",&x);

	printf("Enter the value of Y : ");
	scanf("%f",&y);

	printf("Enter the value of Z : ");
	scanf("%f",&z);

	ans = (x + y + z)*(x + y + z)*(x + y + z);
	printf("\n(x + y + z)^2 : %f",ans);

	getch();
}