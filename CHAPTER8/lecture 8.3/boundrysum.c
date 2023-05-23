#include<stdio.h>

main()
{	
	int a[5][5], i, j, sum=0;
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\n--------------------\n\n");
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d ", a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("The sum of diagonal elements is : %d", sum);
}
