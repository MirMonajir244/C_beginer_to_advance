#include<stdio.h>
#include<string.h>
int main()
{
	char str[120];
	printf("Enter Your String: ");
	scanf("%[^o]str",&str);  //^o means stop taking input when o occur.
	printf("Your Entered string is: %s",str);
}
