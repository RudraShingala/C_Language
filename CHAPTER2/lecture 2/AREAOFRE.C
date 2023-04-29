#include<stdio.h>
#include<conio.h>

main()
{
	int area,length,width;
	clrscr();

	printf("Enter the length of the rectangle : ");
	scanf("%d",&length);

	printf("Enter the width of the rectangle : ");
	scanf("%d",&width);

	area = length * width;

	printf("The arean of the rectangle is : %d",area);

	getch();
}