/*
 ============================================================================
 Name        : Q7L3U2.c
 Author      : Jana Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, product=1;
		printf("Enter a positive number");
		scanf("%d",&x);
		if(!(x<=0))
		{
			for(int i = 1 ; i<=x; i++)
			{
				product = product*i;
			}
			printf("Factorial = %d",product);
		}
		else if (x==0)
			printf("Factorial = 1");
		else
			printf("Has no factorial");
}

