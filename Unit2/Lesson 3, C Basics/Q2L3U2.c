/*
 ============================================================================
 Name        : Q2L3U2.c
 Author      : Jana Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;
	printf("Enter an alphabet");
	scanf("%c",&x);
	switch(x){

	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("\n%c is a vowel",x);
		break;
	default:
		printf("\n%c is a consonant",x);
	}
}
