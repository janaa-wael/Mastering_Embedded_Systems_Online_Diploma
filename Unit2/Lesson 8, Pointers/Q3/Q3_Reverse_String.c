  #include "stdio.h"
  #include "stdlib.h"
  #include "string.h"
  
  int main()
  {
	  char a[20];
	  printf("Enter a string: \n");
	  scanf("%[^\n]s",&a);
	  char *ptr = &a[strlen(a)-1];
	  for(int i = strlen(a)-1 ; i >= 0  ; i--)
	  {
		  printf("%c",*ptr);
		  ptr--;
	  }
  }