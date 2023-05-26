#include<stdio.h>

main()
{
	int n;
	printf("Enter string : ");
	scanf("%d", &n);
	
	char a[n];
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a character : ");
		fflush(stdin);
		scanf("%c", &a[i]);
	}
	printf("\n\n--------------------------------\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%c", a[i]+32);
	}
}
