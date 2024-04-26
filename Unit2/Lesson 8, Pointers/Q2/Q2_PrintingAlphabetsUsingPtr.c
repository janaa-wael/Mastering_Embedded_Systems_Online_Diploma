#include "stdio.h"
#include "stdlib.h"

/* Write a program in C to print all the alphabets using a pointer. Go
 * to the editor
 */
 
 int main()
 {
	 char a = 97;
	 char *ptr = &a;
	 for(int i = 0 ; i < 26 ; i++)
	 {
		 printf("%c ",*ptr);
		 (*ptr)++;
	 }
 }