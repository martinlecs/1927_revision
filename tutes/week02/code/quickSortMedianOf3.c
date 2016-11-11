//Quick Sort (Median of 3)
//Implemented by Martin Le
//Date: 11/11/2016

#include <stdio.h>
#include <stdlib.h>

#define swap(a,i,j) \
    {int tmp; tmp = a[i]; a[i]=a[j]; a[j]=tmp;}

int main (int argc, char *argv)
{
    return EXIT_SUCCESS;
}

void setMedianOfThree(int a[], int lo, int hi)
{

    if((hi-lo+1) < 3) return; //checks that there are at least 3 elements
    int mid = (lo+hi/2);

    //Rearrange the 3 locations so that lowest goes all the way to the
    //left and highest goes to the right.
    if (a[lo] > a[mid]) swap(a,lo,mid);
    if (a[lo] > a[hi]) swap(a,mid,hi);
    if (a[mid] > a[hi]) swap(a,lo,hi);

    //Ie. say we have an array a[]=2,1,3,6,4
    //lo=0,hi=4,mid=2 the array is in the right order

    //but say we have a[]=6,4,5,1,2
    //lo=0,hi=4,mid=2
    //we want to arrange the elements of the array so that these are in
    //order so by using the processes above we can get
    //a[lo]=6,a[hi]=2,a[mid]=5
    //since a[lo]>a[mid] we swap so
    //a[]=5,4,6,1,2
    //since a[lo]>a[hi] we swap so
    //a[]=2,4,6,1,5
    //since a[mid]>a[hi] we swap so
    //a[]=2,4,5,1,6
    //Everything is now in the right place.
    
}
