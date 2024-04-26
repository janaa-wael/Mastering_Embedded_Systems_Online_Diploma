/*
 ============================================================================
 Name        : Homework2.c
 Author      : Jana Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer you want to check");
	scanf("%d",&x);
	if(x%2 == 0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);
}
