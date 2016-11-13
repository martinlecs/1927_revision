// Implementation of Stack ADT

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Stack.h"

typedef struct StackNode {
    Item value;
    struct StackNode *next;
} StackNode;

typedef struct StackRep {
    StackNode *top;  // ptr to first node
} StackRep;

Stack newStack()
{
    Stack s;
    s = malloc(sizeof(StackRep));
    assert(s != NULL);
    s->top = NULL;
    return s;
}
void StackPush(Stack s, Item it)
{
    StackNode *new = malloc(sizeof(StackNode));
    assert(new != NULL);
    new->value = ItemCopy(it);
    new->next = s->top;
    s->top = new;
}
 
Item StackPop(Stack s)
{
	Item n = s->top->value;
	StackNode *curr = s->top;
	s->top = s->top->next;
	free(curr);
	return n;
}
