// Implementation of function that checks if graph has a euler tour

#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

bool hasEulerTour(Graph g)
{
    // Check that the graph is connected 
    if(isConnected(g)) {
        for(int i = 0; i < nEdges(g); i++) {
            int v = vertex(i);
            if(degree(v)%2 != 0) return false;
        }               
    }
    return false;
}
int degree(Graph g, Vertex v)
{
    // Go through adjacency list and count how many other vertices v is
    // connected to = # degrees

    VLink curr = g->edges[v];
    int degrees;
    for( ; curr != NULL; curr = curr->next) {
        degrees++;
    }
    return degrees;
}
