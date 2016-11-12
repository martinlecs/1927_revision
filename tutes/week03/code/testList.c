//testList.c implementation to test List Insertion Sort
// By Martin Le
// Date: 12/11/2016

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include  "List.h"

int main (int argc, char *argv[])
{
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    List newList = malloc(sizeof(ListNode));
    newList->value = 10;
    newList->next = NULL;

    for(int i = 1; i < 10; i++) {
        Link newNode = NewNode(a[i]);
        append(newList, newNode);
    }
    for(Link curr = newList; curr->next != NULL; curr = curr->next) {
        printf("%d ", curr->value);
    }
    printf("\n");
    selectSort(newList);
    for(Link curr = newList; curr->next != NULL; curr = curr->next) {
        printf("%d ", curr->value);
    }

    
    return EXIT_SUCCESS;
}
