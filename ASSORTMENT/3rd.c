#include<stdio.h>

main()
{
	int r, c;
	
	printf("Enter row size : ");
	scanf("%d", &r);
	
	printf("Enter column size : ");
	scanf("%d", &c);
	
	int a[r][c], b[r][c], i, j;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter a[%d][%d] : ",i ,j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			b[j][i] = a[i][j];		
		}
	}
	printf("transpose is :-\n\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d ", b[i][j]);	
		}
		printf("\n");
	}
}
