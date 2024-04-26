#include "stdio.h"
#include "stdlib.h"

int main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	for(int i = 0; i < 2 ; i++)
	{
		for(int j = 0 ; j<2 ; j++)
		{
			printf("Enter element (%d,%d) in first matrix : ",i+1,j+1);
			scanf(" %f",&a[i][j]);
			printf("Enter element (%d,%d) in second matrix : ",i+1,j+1);
			scanf(" %f",&b[i][j]);
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nThe result of adding both matrices: \n");
	
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("%.2f\t",sum[i][j]);
			
		}
		printf("\n");
	}
	
}