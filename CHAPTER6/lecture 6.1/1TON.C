#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter a number : ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}

	getch();
}