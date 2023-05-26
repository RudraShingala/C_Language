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
		if(a[i]>=65 && a[i]<=90)
		{
			printf("%c", a[i]+32);
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			printf("%c", a[i]-32);
		}
	}
}
