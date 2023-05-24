#include<stdio.h>

main()
{
	int N;
	
	printf("Enter array size : ");
	scanf("%d", &N);
	
	int a[N], i;
	
	for(i=0 ; i<N ; i++)
	{
		printf("Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("negative elements are : ");
	for(i=0 ; i<N ; i++)
	{
		if(a[i]<0)
		{
			printf("%d ", a[i]);
		}
	}
}
