#include<stdio.h>

main()
{
	int n;
	
	printf("Enter string size : ");
	scanf("%d", &n);
	
	char a[n];
	int i;
	
	printf("Enter password : ");
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%c", &a[i]);
	}
	
	if(n>=6)
	{
			for(i=0 ; i<n ; i++)
			{

			if(((a[i]>=33 && a[i]<=47) || (a[i]>=58 && a[i]<=64)) && (a[i]>=48 && a[i]<=57) 
			&& (a[i]>=65 && a[i]<=90) && (a[i]>=97 && a[i]<=122))
			{
				printf("\n\nThe password is strong....");
			}
			else
			{
				printf("\n\nThe password is weak...");
			}	
		}
	}
	else
	{
		printf("Password must be 6 characters long.");
	}
}
