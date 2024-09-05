#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP TO CHECK GIVEN NUMBER IS EVEN OR ODD USING IF ELSE
	int x,reminder;
	printf("Enter The Value OF Number :");
	scanf("%d",&x);
	
	reminder=x%2;
	if(reminder==1)
	{
		printf("The Given Number Is Odd");
	}
	else
	{
		printf("The Given Number Is Even");
	}
}
