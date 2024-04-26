#include "stdio.h"
#include "stdlib.h"

int main()
{
	char str[10000];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	
	int size = 0;
	for(int i = 0 ; str[i]!= '\0'; i++)
	{
		size++;

	}
	printf("Size = %d",size);
}