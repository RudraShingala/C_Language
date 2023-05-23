#include<stdio.h>

main()
{
	int r, c;
	
	printf("Enter the size of rows : ");
	scanf("%d", &r);
	
	printf("Enter the size of columns : ");
	scanf("%d", &c);
	
	int a[r][c], i, j, sum=0;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\n--------------------\n\n");
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("The sum of diagonal elements is : %d", sum);
}
