// Implementation of a function that takes two vertices from an edge and
// determines the corresponding index in the edges array which gold the
// boolean value for this edge.

#include <stdio.h>
#include <stdlib.h>
#include "indexOf.h"

int indexOf(Vertex v, Vertex w)
{
    assert(v != w); //no self-edges
    if (v > w) { Vertex tmp = v; v = w; w = tmp; } //Because we are storing
                                                   // top right half of
                                                   // matrix
    int i = v;
    int j = i + 1;
    int k = nV - j;
    
}
