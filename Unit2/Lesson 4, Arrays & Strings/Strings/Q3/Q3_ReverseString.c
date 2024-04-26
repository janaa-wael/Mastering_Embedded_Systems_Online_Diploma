#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int main()
{
	char str[100000];
	char reversed_str[100000];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	for(int i = strlen(str)-1 ; i > 0 ; i--)
	{
		reversed_str[strlen(str)-1-i] = str[i];
	}
	printf("Reversed String = %s",reversed_str);
}