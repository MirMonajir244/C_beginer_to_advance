#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
void insertBegin(struct Node **n,int x)
{
	struct Node* newtemp=(struct Node*)malloc(sizeof(struct Node*));
	newtemp->data=x;
	newtemp->next=*n;
	*n=newtemp;
}
void printList(struct Node* n)
{
	while(n != NULL)
	{
		printf("%d\t",n->data);
		n=n->next;
	}
}
int main()
{
	struct Node* head=NULL;
	insertBegin(&head,10);
	insertBegin(&head,20);
	insertBegin(&head,30);
	printList(head);
}

