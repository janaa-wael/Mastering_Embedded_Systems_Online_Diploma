#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void rev_str(char str[], char rev[],int start_index)
{
	if(start_index==strlen(str))
		return;
	rev[start_index] = str[strlen(str)-1-start_index];
	rev_str(str,rev,++start_index);
}

int main()
{
	char str[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	char rev[20];
	rev_str(str,rev,0);
	printf("%s",rev);
}