#include "linkedlist.h"

linked_node_t* CreateNode(int data);

linked_node_t* CreateNode(int data)
{
	linked_node_t* newNode = malloc(sizeof(linked_node_t));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

linked_list_t* ll_Create()
{
	linked_list_t * list = malloc(sizeof(linked_list_t));
	list->head = NULL;
	return list;
}

void ll_Display(linked_list_t* list) 
{
	linked_node_t* current = list->head;
	if(list->head == NULL) return;

	while(current->next != NULL)
	{
		printf("%d,", current->data);
		current = current->next;
	}
	printf("%d\n", current->data); 
}

void ll_Add(int data, linked_list_t* list)
{
	linked_node_t* current = NULL;
	if(list->head == NULL)
  	{
    		list->head = CreateNode(data);
	}
  	else 
	{
		current = list->head; 
		while (current->next!=NULL)
		{
			current = current->next;
		}

    	current->next = CreateNode(data);
  	}
}

void ll_Delete(int data, linked_list_t* list)
{
	linked_node_t* current = list->head;            
	linked_node_t* previous = current;           
	while(current != NULL)
	{           
		if(current->data == data)
		{      
			previous->next = current->next;
			if(current == list->head)
			{
				list->head = current->next;
			}
			
			free(current);
			return;
		}                               
		previous = current;             
		current = current->next;        
	}                                 
}                                   

void ll_Reverse(linked_list_t* list)
{
	linked_node_t* reversed = NULL;
	linked_node_t* current = list->head;
	linked_node_t* temp = NULL;

	while(current != NULL)
	{
		temp = current;
		current = current->next;
		temp->next = reversed;
		reversed = temp;
	}

	list->head = reversed;
}

void ll_Destroy(linked_list_t* list)
{
  linked_node_t* current = list->head;
  linked_node_t* next = current;
  while(current != NULL)
  {
    next = current->next;
    free(current);
    current = next;
  }

  free(list);
}
