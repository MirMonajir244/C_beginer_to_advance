#include<stdio.h>
#include<stdlib.h>
int *func()
{
	int x=10;
	return &x;
}
int main()
{
	int *ptr=func();
	fflush(stdin);
	printf("%d",*ptr);
}
//as x is a local variable here so *ptr is pointing here to a location which not available

