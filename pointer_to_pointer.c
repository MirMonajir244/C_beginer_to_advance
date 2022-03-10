#include<stdio.h>
int main()
{
	int var=10;
	int *ptr1;
	ptr1=&var;
	int **ptr2;
	ptr2=&ptr1;
	printf("%d\n%d\n%d\n%d",*ptr1,ptr1,**ptr2,ptr2);
}
