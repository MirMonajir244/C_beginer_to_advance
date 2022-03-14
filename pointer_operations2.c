#include<stdio.h>
int main()
{
	int mit=10;
	int *ptr; //wild pointer right now
	ptr=&mit;
	printf("%d\n",*ptr);
	printf("%d\n",++(*ptr));
	printf("%d\n",*++ptr);
}
