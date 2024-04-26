#include "stdio.h"
#include "stdlib.h"

int power(int base, int exp)
{
	if(exp ==0)
		return 1;
	return base*power(base,--exp);
}

int main()
{
	int b,p;
	printf("Enter a base number: ");
	scanf("%d",&b);
	printf("Get the base power raised to the power of: ");
	scanf("%d",&p);
	printf("%d raised to the power of %d = %d",b,p,power(p,b));
}