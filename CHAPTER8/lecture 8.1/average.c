#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	int a[n], i, avg, sum=0;
	printf("Enter array elements :- \n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		sum = sum + a[i];
	}
	avg = sum/n;
	printf("average is : %d", avg);
}
