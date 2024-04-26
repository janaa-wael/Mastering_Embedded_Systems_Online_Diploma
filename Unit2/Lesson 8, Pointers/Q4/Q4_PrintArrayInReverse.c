#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(a)/sizeof(int);
	int* ptr = a;
	for(int i = size-1; i >= 0 ; i--)
	{
		printf("%d\n",ptr[i]);
	}
}