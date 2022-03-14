#include<stdio.h>
void arrayReverse(int arr[],int n)
{
	int low=0,high=n-1;
	int temp;
	while( low < high)
	{
		temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
	        low++;
		high--;
	}
	
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arrayReverse(arr,n);
	print(arr,n);
}

