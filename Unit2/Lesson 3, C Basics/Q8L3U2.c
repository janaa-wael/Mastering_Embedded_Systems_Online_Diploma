/*
 ============================================================================
 Name        : Q8L3U2.c
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
	float a,b;
	printf("Enter an operation : ");
	scanf("%c",&x);
	printf("\nEnter 2 operands: ");
	scanf("%f",&a);
	scanf("%f",&b);
	switch(x)
	{
	case '+':
		printf("%f",a+b);
		break;
	case '-':
			printf("%f",a-b);
			break;
	case '*':
				printf("%f",a*b);
				break;
	case '/':
		printf("%f",a/b);
		break;
	default :
		printf("Invalid operation");
	}

}
