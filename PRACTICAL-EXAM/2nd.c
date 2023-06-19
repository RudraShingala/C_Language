#include<stdio.h>

main()
{
	int n, i, square=0, a[i];
	
	printf("Enter array size : ");
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		square = a[i] * a[i];
		printf("\nSquare of elements is : %d", square);
	}
}
