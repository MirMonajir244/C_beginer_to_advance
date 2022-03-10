#include<stdio.h>
int main()
{
	int x=5;
	float x1=1.23;
	void *ptr;
	ptr=&x;
	printf("%d", *( (int*) ptr) );
	ptr=&x1;
	printf("%f", *( (float*) ptr) );
}
