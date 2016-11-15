// Implementation to check whether a graph using an array of edges
// implementation has an euler path

#include <assert.h>

int hasEulerPath(Graph g, Edge e[], int nE)
{
    assert(g != NULL);
    int nOdd;
    
    for(int i = 0; i < nE; i++) {
        int degree;
        for(int j = 0; j < nE; j++) {
            if(e[j].v == i || e[j].w == i) degree++;
        }
        if(degree % 2 != 0) nOdd++; 
    }
    return (nOdd == 2) ? 0 : 1;
}
