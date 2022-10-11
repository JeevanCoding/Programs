// 08/11/2021
////////////// Data Structures
// Linked List basic code


#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node*PNODE;
typedef struct node*PPNODE;

int main()
{
	PNODE First=NULL;  // 8 bytes
	// struct node*First=NULL;  // internally this happens
		
	return 0;
}



