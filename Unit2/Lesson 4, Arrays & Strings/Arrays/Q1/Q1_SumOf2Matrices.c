#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[2][2];
	int b[2][2];
	printf("Enter elements of array A\n");
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("Element (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of array B\n");
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("Element (%d,%d) : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("Elements of resultant array:\n");
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2; j++)
		{
			printf("Elements(%d,%d) : %d",i,j,a[i][j]+b[i][j]);
			printf("\n");
		}
	}
}