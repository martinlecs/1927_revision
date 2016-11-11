//Question 6. About Swaps

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
void SwapEl(int *a, int i, int k);

int main(int argc, char *argv[])
{
    int x = 1;
    int y = 2;
    printf("Value of x is %d and y is %d\n", x, y);
    swap(&x,&y);
    printf("Value of x is %d and y is %d\n", x, y);

    //Array test
    int a[5]={1,2,3,4,5};
    SwapEl(a,0,4); //&a[0] == a
    for(int i=0;i<5;i++) printf("%d-",a[i]);

    return EXIT_SUCCESS;
}

void swap(int *x, int *y)
{
    int tmp; tmp = *x; *x = *y; *y = tmp;
}
void SwapEl(int *a, int i, int k)
{
    //Assumption that i or j is no more than N-1 and >0

    int tmp = a[i];
    a[i]=a[k];
    a[k]=tmp;
}
