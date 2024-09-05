#include<stdio.h>

int main()
{
//	Triangle Angle Finder
//Write a program to find the third angle of a right triangle when two other angles are given.
	
	int angleA,angleB,angleC;
	printf("Enter angleA =");
	scanf("%d",&angleA);
	
	printf("Enter angleB=");
	scanf("%d",&angleB);
	
	angleC=180 - (angleA + angleB);
	printf("angleC=%d",angleC);
}

