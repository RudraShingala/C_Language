#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	int a[n], b[n], c[n], i;
	
	printf("\nEnter array A's elements :-\n");
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nEnter array B's elements :-\n");
	for(i=0 ; i<n ; i++)
	{
		printf("Enter b[%d] : ", i);
		scanf("%d", &b[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\nArray C is :-\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d ", c[i]);
	}
}
