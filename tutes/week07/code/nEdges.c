// Implementation for a function that counts the number of distinct
// edges in a graph using an adjacency matrix representation

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Graph.h"

int nEdges(Graph g)
{
    int nE;
    
    for(int i = 0; i < nVertices(g); i++) {
        //ignore stuff below leading diagonal
        for(int j = i+1; j < nVertices(g); j++) {
            if(matrix(i,j) == 1) nE++;
        }
    }
    return nE;
}
