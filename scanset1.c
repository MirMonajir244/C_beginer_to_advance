#include<stdio.h>
#include<string.h>
int main()
{
	char str[150];
	printf("Enter your string: ");
	scanf("%[A-Z]s",&str);
	printf("Your Entered string is %s", str);
}
