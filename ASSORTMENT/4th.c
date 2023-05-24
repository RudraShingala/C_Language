#include<stdio.h>

main()
{
	int r, c;
	
	printf("Enter row size : ");
	scanf("%d", &r);
	
	printf("Enter column size : ");
	scanf("%d", &c);
	
	printf("\n\n");
	
	int a[r][c], i, j, n1, n2, sum1, sum2;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter a[%d][%d] : ",i ,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\nEnter row number : ");
	scanf("%d", &n1);
	printf("Row elements are : ");
	for(i=n1 ; i<=n1 ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d, ", a[n1][j]);
			sum1 = sum1 + a[n1][j];	
		}
	}
	printf("\nsum of row %d is : %d", n1, sum1);
	
	printf("\n\n\nEnter col number : ");
	scanf("%d", &n2);
	printf("col elements are : ");
	for(i=0 ; i<r ; i++)
	{
		for(j=n2 ; j<=n2 ; j++)
		{
			printf("%d, ", a[i][n2]);
			sum2 = sum2 + a[i][n2];	
		}
	}
	printf("\nsum of row %d is : %d", n2, sum1);
}
