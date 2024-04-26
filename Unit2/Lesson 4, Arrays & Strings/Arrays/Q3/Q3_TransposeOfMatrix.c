#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[100][100];
	int r,c;
	printf("Enter number of rows\n");
	scanf("%d",&r);
	printf("Enter number of columns\n");
	scanf("%d",&c);
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++)
		{
			printf("\nEnter element (%d,%d): ", i , j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of entered matrix:\n");
	for(int i = 0 ; i < c ; i++)
	{
		for(int j = 0 ; j < r ; j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}