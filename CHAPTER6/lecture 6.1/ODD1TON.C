#include<stdio.h>
#include<conio.h>

main()
{
	int i=1;
	clrscr();

	printf("Enter a number : ");
	scanf("%d",&i);

	while(i>=1)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i--;
	}

	getch();
}