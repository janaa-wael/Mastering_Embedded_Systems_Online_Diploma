/*
 ============================================================================
 Name        : Q4L3U2.c
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
	printf("Enter a number : ");
	scanf("%d",&x);
	if(x>0)
		printf("Number is positive");
	else if(x<0)
		printf("Number is negative");
	else
		printf("Neither positive nor negative");

}
