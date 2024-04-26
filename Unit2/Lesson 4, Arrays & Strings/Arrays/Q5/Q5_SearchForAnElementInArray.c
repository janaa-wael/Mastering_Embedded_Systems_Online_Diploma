#include "stdio.h"
#include "stdlib.h"

int main()
{
	int arr[1000];
	int n,search;
	printf("Enter size of array\n");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Search for an element: \n");
	scanf("%d",&search);
	for(int i = 0 ; i < n ; i++)
	{
		if(search==arr[i])
		{
			printf("Element %d is found at position %d\n",search,i+1);
		}
	}
}