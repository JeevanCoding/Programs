// 08/11/2021
//////// Data Structures
// Linked List NODE PNODE PPNODE Concepts Demonstration

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int main()
{
	NODE obj; // 12 bytes
	
	obj.data=11;
	obj.next=NULL;
	
	PNODE p=NULL;  // 8 bytes
	p=&obj;
	
	PPNODE q=NULL; // 8 bytes
	q=&p;
	
	return 0;
}



/*
    p                       100
    q                       200
    &p                      200
    &q                      300
    p->data             11
    p->next             NULL
    *q                      100
    (*q)->data;         11
    (*q)->next;         NULL
 */
