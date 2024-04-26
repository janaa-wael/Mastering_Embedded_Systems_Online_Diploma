#include "stdio.h"
#include "stdlib.h"

int main()
{
	int avg = 0;
	int a[100];
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		printf("\nEnter element: ");
		scanf("%d",&a[i]);
		avg += a[i];
	}
	printf("Average of numbers : %.2f",(float)avg/n);
}