// Implementation of a recursive function which makes a copy of a list.

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

List copy(List L)
{
    // Two cases to consider: (1) the empty list (2) list with items in
    // it
    
    //(1) Empty list: When we have an empty, we just return NULL

    if(empty(L)) return NULL; //base case
    else {
        List listCopy = newNode(head(L)); //pointer to 1st node in list
        listCopy->next = copy(tail(L)); //recursive case to go through list
        //cannot use tail(L) in LHS as NULL case screws things up
        return listCopy;
    }
}
