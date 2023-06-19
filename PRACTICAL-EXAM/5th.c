#include<stdio.h>

main()
{
	int n1, n2, n3;
	
	printf("Enter first number : ");
	scanf("%d", &n1);
	
	printf("Enter second number : ");
	scanf("%d", &n2);
	
	printf("Enter third number : ");
	scanf("%d", &n3);
	
	(n1<n2)
		? (n1<n3)
			? printf("%d is minimum.", n1)
			: printf("%d is minimum.", n3)
		: (n2<n3)
			? printf("%d is minimum.", n2)
			: printf("%d is minimum.", n3);
}
