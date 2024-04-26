#include "stdio.h"
#include "stdlib.h"

<<<<<<< HEAD
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}

int main()
{
	int num;
	printf("\nEnter a positive integer: ");
	scanf(" %d",&num);
	printf("\nThe factorial of %d = %d",num,fact(num));
=======
int main()
{
	int n=4;
	float x,product = 1;
	
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter number %d : ",i+1);
		scanf(" %f",&x);
		if(x==0)
			continue;
		product *= x;
	}
	
	printf("\nThe product of the 4 integers ented = %.3f",product);
	
	
>>>>>>> 07b513b (Homework 4: Loops & Arrays in C)
}