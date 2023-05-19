#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	printf("Enter array elements :-\n");
	int a[n],i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("Length of an array : %d",n);
}
