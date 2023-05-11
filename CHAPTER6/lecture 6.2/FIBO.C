#include<stdio.h>
#include<conio.h>

main()
{
	int i,j=0,k=1,l,n;
	clrscr();

	printf("Enter a number : ");
	scanf("%d",&n);

	printf("fibonacci series :- %d %d ",j,k);

	for(i=2;i<=n;i++)
	{
		l=j+k;
		printf("%d ",i);
		j=k;
		l=i;
	}

	getch();
}