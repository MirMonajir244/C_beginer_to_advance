#include<stdio.h>
int largest(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])
		{
			res=i;
		}
	}
	return res;
}
int secondLargest(int arr[],int n)
{
	int largest1=largest(arr,n);
	int res=-1;
	for(int j=0;j<n;j++)
	{
		if(arr[j] != arr[largest1])
		{
		   if(res == -1)
		   {
			   res=j;
		   }
		   else if(arr[j]>arr[res])
		   {
			   res= j;
		   }
		}
	}
	return res;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int k=0;k<n;k++)
	{
		scanf("%d",&arr[n]);
	}
	int final=secondLargest(arr,n);
	printf("%d",arr[final]);
}
