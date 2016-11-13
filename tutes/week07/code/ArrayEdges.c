/Implementation of a function that takes in a graph as its parameter
//and then returns an array containing all the edges in the Graph, along
//with the count of the number of edges.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Graph.h"

Edge *edges (Graph g, int *nE)
{
    // Since we are not given the number of edges we must allocate the
    // maximum amount  = v(v-1)/2

    Edge *new = malloc(maxE(g)*sizeof(Edge));

    for(int i = 0; i < nVertices(g); i++) {
        for(int j = (i + 1); j <nVertices(g); j++) {
            if(!matrix(i,j)) {
                new[i] = mkEdge(i,j);        
                nE++;
            }
        } 
    }
    return new;
}

Edge mkEdge(Vertex v, Vertex w)
{
    Edge e = {v,w};
    return e;
}


