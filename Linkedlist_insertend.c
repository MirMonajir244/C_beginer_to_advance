#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
void insertEnd(struct Node **n,int x)
{
	struct Node* newtemp=(struct Node*)malloc(sizeof(struct Node*));
	newtemp->data=x;
	newtemp->next=NULL;
	if(*n == NULL)
	{
		*n=newtemp;
	}
	else
	{
		struct Node *lastnode=*n;
		while(lastnode->next != NULL)
		{
			lastnode=lastnode->next;
		}
		lastnode->next=newtemp;
	}
}
void printList(struct Node* n)
{
	while(n!=NULL)
	{
		printf("%d\t",n->data);
		n=n->next;
	}
}
int main()
{
	struct Node* head=NULL;
	insertEnd(&head,10);
	insertEnd(&head,20);
	insertEnd(&head,30);
        printList(head);
}
