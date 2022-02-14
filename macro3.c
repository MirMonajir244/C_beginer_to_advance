#include<stdio.h>
//Merging of MAcros using ##
#define Merge(a,b) a##b
int main()
{
	printf("%d",Merge(23,34));
}
