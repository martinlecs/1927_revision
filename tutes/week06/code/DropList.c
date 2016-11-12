//Implementation of recursive function which removes a list
//ie. go through list and free everything start from the last node

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void drop(List L)
{
   /* if(L == NULL) return;
    else {
    Link curr = drop(curr->next);
    free(curr);
    }
    */
}

// Problems with above implementation:
// 1) this a void function so it shouldn't return something
// 2) cannot initialise curr = drop() as drop is a void function that
// (1) shouldn't return anything and (2) is not the same type as Link

//Alternative method

void Drop(List L)
{
    // This function shouldn't have an effect an already empty lists
    // so we can just disclude them from the function so

    //Using the macro, we first check that the list is not empty
    if(!empty(L)) {
        drop(tail(L));
        free(L);
    }    
    
    // But what is the base case? How does this function terminate?
    // Answer: The function exits once it goes through all the code. So
    // once we have an empty list, if(!empty(L)) fails and then control
    // continues down the function until it reaches the closing bracket
    // and so the function closes.
       
}
