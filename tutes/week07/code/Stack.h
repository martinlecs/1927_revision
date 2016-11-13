// Interface for Stack ADT


typedef struct StackRep *Stack;
typedef int Item;

#define ItemCopy(it) (it)

Stack newStack();               // creates a new empty Stack
void dropStack(Stack);          // free up memory used by stack
void StackPush(Stack s, int n); // adds n to top of Stack s
Item StackPop(Stack s);          // removes and returns top of Stack
Item StackIsEmpty(Stack s);      // indicates whether zero items in Stack
