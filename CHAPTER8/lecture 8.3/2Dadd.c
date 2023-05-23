#include<stdio.h>

main()
{
	int r, c;
	
	printf("Enter the size of rows : ");
	scanf("%d", &r);
	
	printf("Enter the size of columns : ");
	scanf("%d", &c);
	
	int a[r][c], b[r][c], C[r][c], i, j;
	
	printf("\nEnter array A's elements :-\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nEnter array B's elements :-\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter b[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			C[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nArray C is :-\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d ", C[i][j]);		
		}
		printf("\n");
	}
	printf("%d", C[i][j]);
}
