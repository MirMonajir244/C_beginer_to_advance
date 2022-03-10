#include<stdio.h>
//pointer stores the address of another variable
//'*' is necessary to declare a pointer variable.
//'*' using this wwe can access the value located at the address specified by its operand
//'*' is called dereferncing.
int main()
{
int a=10;
int *ptr;
ptr=&a;
printf("%d\n%d",*ptr,ptr);
}
