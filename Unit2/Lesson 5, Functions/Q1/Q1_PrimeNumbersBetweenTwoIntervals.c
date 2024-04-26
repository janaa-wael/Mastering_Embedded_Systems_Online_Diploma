#include "stdio.h"
#include "stdlib.h"
void Print_Prime_Num()
{
	int x,y;
	printf("Enter number 1 : ");
	scanf(" %d",&x);
	fflush(stdin);
	printf("Enter number 2 : ");
	scanf(" %d",&y);

	for(int i = x ; i <= y ; i++)
	{
	    int flag = 0;
		for(int j = 2 ; j < i; j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("\n%d is a prime number",i);
	}

}

int main()
{
	Print_Prime_Num();
}