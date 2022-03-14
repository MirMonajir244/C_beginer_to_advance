#include<stdio.h>
int isSorted(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i] < arr[i-1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	int res=isSorted(arr,n);
	if(res==1)
	{
		printf("Sorted array");
	}
	else
	{
		printf("Not sorted");
	}
}

