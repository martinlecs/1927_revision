//Implementation of a List
//By Martin Le
//Date: 11/11/2016
// WIP: insertion method is crap

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct ListRep {
    int value;
    ListRep *head;
    ListRep *tail;
    ListRep *next;
}SortedListRep;

static struct ListNode {
    int value;
    ListRep *next;
} *ListNode;

ListNode newNode(int n)
{
    ListNode n = malloc(sizeof(ListNode));
    assert (n != NULL);
    n->value = 0;
    n->next = NULL;
    return n;
}
SortedList newList()
{
    SortedList L = malloc(sizeof(SortedListRep));
    assert(L != NULL);
    L->value = 0;
    L->head = NULL;
    L->tail = NULL;
    L->next = NULL;
    return L;
}

void ListInsert(SortedList L, int n)
{
    ListNode n = newNode(n);
    if(n->value <= L->value) {
        n->next = L->head;
        L->head = n;
    }
    else if(n->value => L->value) {
        L->tail->next = n;
        L->tail = n;
    }
    else {
        
        ListNode curr = L->next;
        while(curr != NULL) {
            if (less(n,curr->value)) {
                
            }
        
        }
    
    
    }
    

}
