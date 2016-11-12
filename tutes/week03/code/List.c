// Implementation of a version of selection sort that builds a NEW
// sorted list from an original unsorted linked list. 
// Original list is not modified during the sorting.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

Link clone (List ls);

List selectSort(List ls)
{
    List sorted_list = malloc(sizeof(ListNode));
    List list_copy = clone(ls);

    //Selection sort
    Link i, min, curr = list_copy;
    for( ; curr != NULL; curr = curr->next) {
        min = curr;
        for(i = curr->next; i->next != NULL; curr = curr->next) {//find smallest
            if (less(curr,curr->next)) min = i;             // value in list
        }
        append(sorted_list, min);
    }
    return sorted_list;
}

//Make a copy of the original list
Link clone (List ls)
{
    if(ls == NULL) return NULL; // base case
    
    Link result = malloc(sizeof(ListNode));
    assert(result != NULL);
    result->value = ls->value;
    result->next = clone(ls->next);
    return result;
}

void append (List ls, Link node)
{
    assert(ls != NULL);

    //If list is empty

    Link curr = ls;
    for(; curr->next != NULL; curr = curr->next); //Find end of list
    curr->next = node;
    node->next = NULL;
}
Link NewNode (int n)
{
    Link node = malloc(sizeof(ListNode));
    node->value = n;
    node->next = NULL;
    return node;
}
