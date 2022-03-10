#include<stdio.h>
int main()
{
	char *ptr="MirMonajir";
	printf("%c\n%c",*ptr,*&*&*ptr);
}
