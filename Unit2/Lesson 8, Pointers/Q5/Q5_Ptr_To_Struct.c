#include "stdio.h"
#include "stdlib.h"

struct Employee
{
	char name[15];
	int age;
	int id;
};

int main()
{
	struct Employee e1 = {"Jana Wael", 22, 2100667};
	struct Employee* ptr1 = &e1;
	struct Employee e2 = {"Sarah Rashad", 21, 2100874};
	struct Employee* ptr2 = &e2;
	struct Employee* (a[2]) = {ptr1 , ptr2};
	struct Employee* (*ptr)[2] = &a;
	printf("Employee 1:\nName : %s\nID: %d\nAge: %d\n",(*ptr)[0]->name,(*ptr)[0]->id,(*ptr)[0]->age);
	printf("Employee 2:\nName : %s\nID: %d\nAge: %d\n",(*ptr)[1]->name,(*ptr)[1]->id,(*ptr)[1]->age);
}