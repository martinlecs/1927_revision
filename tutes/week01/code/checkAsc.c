//Function to check whether the elements in an array occur in ascending order.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define cmp(x,y) (x > y)
bool isSorted(int *a, int n);

int main(int argc, char *argv[]) {

    int i[10]={1,2,3,4,5,6,7,8,9,10};
    if((isSorted(i, 10))) printf("Sorted\n");

    int j[5]={3,1,2,6,7};
    if(!(isSorted(j,5))) printf("Not sorted\n");

    return EXIT_SUCCESS;
}

bool isSorted(int *a, int n) 
{
    //Go through each element in the array and check that their neighbour
    //greater then the current item

    for(int i=0;i<n-1;i++) {
        if(cmp(a[i], a[i+1])) return false;
    }
    return true;
}
