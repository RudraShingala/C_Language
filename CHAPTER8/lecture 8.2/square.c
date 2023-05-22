#include<stdio.h>

main()
{
	int n, i, j;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	int mul, a[n];
	
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n------------------\n\n");
	printf("square is : ");
	
	for(i=0 ; i<n ; i++)
	{
		mul = a[i]*a[i];
		printf("%d ", mul);
	}
}
