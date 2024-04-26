/*
 ============================================================================
 Name        : Q5L3U2.c
 Author      : Jana Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter a character : ");
	scanf("%c",&x);
	if(x>=65 && x<=90 || x>=97 && x<=122)
		printf("\nAn alphabet");
	else
		printf("Not a character");
}
