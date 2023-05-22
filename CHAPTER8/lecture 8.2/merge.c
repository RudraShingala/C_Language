#include<stdio.h>

main()
{
	int n1, n2, i;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n1);
	
	int n, a[n], b[n], c[n];
	
	for(i=0 ; i<n1 ; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nEnter the size of an array : ");
	scanf("%d", &n2);
	
	for(i=0 ; i<n2 ; i++)
	{
		printf("b[%d] : ", i);
		scanf("%d", &b[i]);
	}
	printf("\n\n-------------------\n\n");
	printf("Merged array is :-");
	for(i=0 ; i<n1 ; i++)
	{
		printf("%d ", a[i]);
	}	
	for(i=0 ; i<n2 ; i++)
	{
		printf("%d ", b[i]);
	}
}
