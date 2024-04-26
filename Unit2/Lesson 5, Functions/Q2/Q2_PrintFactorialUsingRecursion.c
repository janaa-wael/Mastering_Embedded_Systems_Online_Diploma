#include "stdio.h"
#include "stdlib.h"

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
}