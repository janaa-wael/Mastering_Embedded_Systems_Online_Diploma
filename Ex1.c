#include "stdio.h"
#include "stdlib.h"

int main()
{
<<<<<<< HEAD
	int x,y;
	printf("Enter number 1 : ");
	scanf(" %d",&x);
	fflush(stdin);
	printf("Enter number 2 : ");
	scanf(" %d",&y);

	for(int i = x ; i <= y ; i++)
	{
	    int flag = 0;
		for(int j = 2 ; j < i; j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("\n%d is a prime number",i);
	}

}
=======
	int n;
	float x,sum = 0;
	printf("Enter the number of elements you'll enter : ");
	scanf(" %d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		printf("\nEnter number %d : ",i+1);
		scanf(" %f",&x);
		if(x<0)
		{
			n = i;
			break;
		}
		sum += x;
	}
	printf("The average of the numbers entered : %.3f",sum/n);
	
}
>>>>>>> 07b513b (Homework 4: Loops & Arrays in C)
