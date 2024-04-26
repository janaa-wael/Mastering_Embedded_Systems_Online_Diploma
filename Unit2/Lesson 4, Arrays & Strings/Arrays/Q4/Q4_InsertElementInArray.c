#include "stdio.h"
#include "stdlib.h"

int main()
{
	int arr[5] = {1,2,3,4};
	int size = sizeof(arr)/sizeof(arr);
	int n;
	int x;
	printf("Enter element to be inserted");
	scanf("%d",&x);
	printf("Enter position to be inserted");
	scanf("%d",&n);
	for(int i = size-1 ; i > n  ; i--)
	{
		arr[i] = arr[i-1];
		printf("a[i] = %d",arr[i]);
	}
	arr[n-1] = x;
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr) ; i++)
	{
		printf("%d ",arr[i]);
	}
}