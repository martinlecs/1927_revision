//Test functions of List.c

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.c"

int main (int argc, char *argv[])
{
	SortedList L;
	L = newList();
		// showList(L) → ()
	ListInsert(L,3);
		// showList(L) → (3)
	ListInsert(L,2);
		// showList(L) → (2,3)
	ListInsert(L,3);
		// showList(L) → (2,3,3)
	printf("%d",ListLength(L));
		// prints 3
	printf("%d",ListDistinct(L));
		// prints 2
	return EXIT_SUCCESS;
}
