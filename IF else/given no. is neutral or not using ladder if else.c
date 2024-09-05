#include<stdio.h>
#include<conio.h>

void main()
{
//	given no. is neutral or not using ladder if else.
	
	int x;
	printf("Enter Any Number : ");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("Number Is Positive");
	}
	else if(x<0)
	{
		printf("Number Is Negative");
	}
	else
	{
		printf("Number Is Neutral");
	}
}
