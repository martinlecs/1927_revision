//Implementation of a function that takes in the original array, the
//sorted array, and determines whether the sort was stable.

//Solution from Jas. Not efficient, there is probably a better way to do
//it. Time could be saved if we remembered each key value that had
//already been checked, and then skipeed if we see it again.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct { int a; int b;} Item;

int isStableSort(Item original[], Item sorted[], int lo, int hi)
{
    int i, j, k, key;
    for(i = lo; i <= hi; i++) {
        key = sorted[i].a;

        j = i; k = 0;
        while (j <= hi && k <= hi) {
            // find next pair of items with (item.a == key)
            for(/*current_i*/; j <= hi; j++) if(sorted[j].a == key) break;
            for(/*current_k*/; k <= hi; k++) if(sorted[k].a == key) break;
            //check that they have the same item.b
            if(j <= hi && k <= hi) {
                if(sorted[j].b != sorted[k].b) return true;
            }
        }
    }
    return false;

}
