//Interface for List ADT (as given from week03 tute q4)

#define less(x,y) (curr->value < curr->next->value)

// a link is simply a pointer to a List node
typedef struct ListNode *Link;

typedef struct ListNode {
    int value; // a List node has an integer value
    Link next; // and a link to the rest of the list
} ListNode;

// a List is represented by a pointer to its first node
typedef Link List;

void append (List ls, Link node);
Link NewNode (int n);
List selectSort(List ls);
