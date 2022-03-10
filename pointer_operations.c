#include<stdio.h>
int main()
{
 int arr[3]={1,2,3};
 int *ptr;
 ptr=arr;
 int i;
 for(i=0;i<3;i++)
 {
	 printf("%d",*ptr);
	 ptr++;
 }
}
