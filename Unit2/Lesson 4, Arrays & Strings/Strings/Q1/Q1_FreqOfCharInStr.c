#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str[1000];
	int size ;
	char c;
	int freq = 0;
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	printf("\nEnter the character to calculate its frequency in the string : ");
	scanf(" %c",&c);
	for(int i = 0 ; i < strlen(str) ; i++)
	{
		if(c==str[i])
		{
			freq++;
		}
	}
	printf("\nFrequency of '%c' = %d",c,freq);
}