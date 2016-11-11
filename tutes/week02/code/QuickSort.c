//QuickSort Implementation
//By Martin Le
//Date: 11/11/2016

#include <stdio.h>
#include <stdlib.h>

#define less(x,y) (x < y)
#define swap(a,j,i) \
    {Item tmp; tmp = a[i]; a[i] = a[j]; a[j] = tmp;}

typedef int Item;
void quicksort(Item a[], int lo, int hi);
int partition(Item a[], int lo, int hi);

int main (int argc, char *argv[])
{
    Item a[]={20,15,25,18,22};
    partition(a,0,4);
    
    for(int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");
    return EXIT_SUCCESS;
}

void quicksort(Item a[], int lo, int hi)
{
    int i;
    if(hi < lo) return;
    i = partition(a, lo, hi);
    quicksort(a,lo,i-1);
    quicksort(a,i+1,hi);
}

int partition(Item a[], int lo, int hi)
{
    Item v = a[lo]; //pivot
    printf("Pivot is %d\n", v);
    int i = lo+1, j = hi;
    printf("Initially i is %d and j is %d\n", i, j);
    printf("In the loop...\n");
    for(;;) {
        for(int k = 0; k < 5; k++) printf("%d ",a[k]);
        printf("\n");
       while(less(a[i],v) && i < j) { //Find value bigger than pivot
            i++;
            printf("i is now %d\n", i);
        }
        while(less(v, a[j]) && j > i) { //Find value smaller than pivot
            j--;
            printf("j is now %d\n", j);
        }
        if(i == j) break;
        swap(a,i,j); //Swap those two values around
    }
    printf("Now we have exited the main loop.\n");
    j = less(a[i],v) ? i: i-1;
    printf("j is now %d\n", j);
    swap(a,lo,j); //Move the pivot so that it is behind the numbers that 
                  // it is smaller than (ie. the ones just sorted)
    return j;
}
