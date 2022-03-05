#include<stdio.h>
#include<ctype.h>
int main()
{
	char c[3]={'a','b','c'};
	int i;
	for(i=0;i<4;i++)
	{

		printf("%c",toupper(c[i]));				
         }
}
