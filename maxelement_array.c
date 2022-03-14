#include<stdio.h>
int largestElement(int arr[],int n)
{
	int res=0;
	for(int i=1; i<n; i++)
	{
		if(arr[i]>arr[res])
		{
			res=i;
		}
	}
		return res;
}
int main()
{
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array element");
	for(int j=0; j<n; j++)
	{
		scanf("%d",&arr[j]);
	}
	int result=largestElement(arr,n);
	printf("%d",arr[result]);
}
