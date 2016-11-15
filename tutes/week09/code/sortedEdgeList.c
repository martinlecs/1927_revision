// Implementation of a function that takes a Grapgh (adjacency matrix)
// and returns a sorted array of Edges.

#include <stdio.h>
#include <stdlib.h>
#include "sortedEdgeList.h"

void sortedEdgeList(Graph g, Edge edges[])
{
    int nEdges = 0;
    for(int i = 0; i < g->nV; i++) {
        for(int j = i + 1; j < g->nW; j++) {
            if (g->adj[i][j] > 0) {
                edges[nEdges].s = i;
                edges[nEdges].t = j;
                edges[nEdges].w = g->adj[i][j];
                nEdges++;
            }
        }
    
    }
    qsort(edges, nEdges, sizeof(Edge), &cmp);
}

int cmp(const void *a, const void *b)
{
    Edge *ae = (Edge *)a;//This is an unnecessary step. Can just initialise 
    Edge *be = (Edge *)b;// function using Edge * as parameters.
    return (ae->w - be->w); //But this way its more general
}
