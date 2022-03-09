#include<stdio.h>
int main()
{
	int n;
	printf("Enter The Size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<=n-1;j++)
	{
		printf("%d",arr[j]);
	}
}
