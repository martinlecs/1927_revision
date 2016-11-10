//Construct a functon to sum the values in the list.
//Implement using 1)while 2)for 3) recursion
//This is just stub code, this will NOT compile


//Using While loops

int sumOfList(List l) 
{
    Node *curr = l;
    int sum = 0;
    while(curr->next != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    return sum;
}

//Using For loops

int sumOfList(List l)
{   
    Node *curr;
    int sum = 0;
    for(Node *curr=l;curr->next != NULL; curr=curr->next) {
        sum +=curr->value;
    }
    return sum;
}

//Using recursion

int sumOfList (List l) {
    
    if (l->next = NULL) return;
    else 
        return l->value + sumOfList(l->next);
}
