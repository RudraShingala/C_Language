#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("ENter a number : ");
	scanf("%d",&n);

	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=10);

	getch();
}