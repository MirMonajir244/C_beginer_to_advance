#include<stdio.h>
void insert(int arrz[],int n,int pos,int element)
{
	int i;
	for(i=n-1;i>=pos-1;i--)
	{
		arrz[i+1]=arrz[i];
	}
	arrz[pos-1]=element;
	printf("after the element array is: ");
	for(int k=0;k<n;k++)
	{
		printf("%d\t",arrz[k]);
	}
}
int main()
{
	int n;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array Elements: ");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	int position;
	printf("Enter the position where you want to insert the elememt: ");
	scanf("%d",&position);
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	printf("After inserting the element the array is: ");
	insert(arr,n,position,ele);
}
