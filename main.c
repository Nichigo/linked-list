#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(int argc, char* argv[])
{
	linked_list_t* list = ll_Create();

	printf("Adding seven values in incrementing order..\n");
	ll_Add(1, list);
	ll_Add(2, list);
	ll_Add(3, list);
	ll_Add(4, list);
	ll_Add(5, list);
	ll_Add(6, list);
	ll_Add(7, list);
	ll_Display(list);
	
	printf("Deleting the second node..\n");
	ll_Delete(2, list);
	ll_Display(list);

	printf("Deleting the head node..\n");
	ll_Delete(1, list);
	ll_Display(list);

	printf("Deleting the last node..\n");
	ll_Delete(7, list);
	ll_Display(list);

	printf("Deleting nonexisting node to try and crash it..\n");
	ll_Delete(180, list);

	printf("Reversing the list order -> should be decremental..\n");
	ll_Reverse(list);
	ll_Display(list);

	ll_Destroy(list);
	return 0;
}
