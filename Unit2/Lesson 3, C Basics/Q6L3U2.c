/*
 ============================================================================
 Name        : Q6L3U2.c
 Author      : Jana Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,sum=0;
	printf("Enter a positive number");
	scanf("%d",&x);
	for(int i = 1; i<=x ; i++)
	{
		sum += i;
	}
	printf("Sum = %d",sum);
}
