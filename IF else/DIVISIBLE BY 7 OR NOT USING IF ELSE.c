#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT USING IF ELSE.
	
	int x,reminder;
	printf("Enter The Value OF Number :");
	scanf("%d",&x);
	
	reminder=x%7;
	
	if(reminder==0)
	{
		printf("The Given Number Is Divisible By 7");
	}
	else
	{
		printf("The Given Number Is Not Divisible By 7");
	}
	
}
