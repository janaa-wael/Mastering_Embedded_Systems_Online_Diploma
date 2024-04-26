/*
 ============================================================================
 Name        : Q3L3U2.c
 Author      : Jana Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,z;
	printf("Enter 3 numbers\n");
	scanf("%d",&x);
	fflush(stdin);
	scanf("%d",&y);
	fflush(stdin);
	scanf("%d",&z);
	fflush(stdin);
	if(x>y)
	{
		if(x>z)
			printf("\n x is greatest");
		else
			printf("\n z is greatest");
	}
	else if(y>z)
	{
		if(y>x)
			printf("\n y is greatest");
		else
			printf("\n x is greatest");
	}
	else
	{
		printf("\n z is greatest");
	}

}
