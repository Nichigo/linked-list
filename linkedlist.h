#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode 
{
	int data;
	struct LinkedNode* next;
} linked_node_t;

typedef struct LinkedList 
{
	linked_node_t * head; 
} linked_list_t;

linked_list_t* ll_Create();
void ll_Add(int data, linked_list_t* list);
void ll_Delete(int data, linked_list_t* list);
void ll_Display(linked_list_t* list);
void ll_Reverse(linked_list_t* list);
void ll_Destroy(linked_list_t* list);

#endif /* __LINKEDLIST_H_ */

