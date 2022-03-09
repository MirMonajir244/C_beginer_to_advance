#include<stdio.h>
int search(int arrz[],int n,int xs)
{
	int i;
	for( i=0; i<n; i++)
	{
	   if(arrz[i]==xs)
	   {
		   return i+1;
		   break;
	   }
	}
	if(i == n)
	{
		return -1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Enter the element to search: ");
	scanf("%d",&x);
	int index=search(arr,n,x);
	printf("%d",index);
}
	
