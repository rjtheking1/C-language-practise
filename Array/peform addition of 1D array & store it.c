#include<stdio.h>

void main()
{
//	peform addition of 1D array & store it into another.
	int i,n,sum=0;
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<=n-1; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<=n-1; i++)
	{
		sum = sum + a[i];
    }  	
	
	printf("Sum is  %d ",sum);
}
