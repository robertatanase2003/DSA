#include<stdio.h>
#include<stdlib.h>

struct node {
	int data; //This will store an integer value.
	struct node* link;//This is a pointer to another struct node. It's used to "link" to the next node in the linked list.
};

int main() {
	struct node* head = NULL;//This declares a pointer head of type struct node* and initializes it to NULL.
	head = (struct node*)malloc(sizeof(struct node));//This allocates memory dynamically for a new node of type struct node.
	// sizeof(struct node)  calculates the size (in bytes) needed to store a struct node.
	//malloc() returns a pointer to this allocated memory.
	

	head->data = 45;
	head->link = NULL;//indicates that this is the only node in the list and there's no "next" node.

	printf("%d", head->data); //"%d" format specifier is used for integers
	return 0;
}