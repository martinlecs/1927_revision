// Test DFS and BFS on a graph for question 14 tute week07

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Stack.h"
#include "DFS.h"
#include "GraphMatrix.h"

int main (int argc, char *argv[])
{
    Graph g = newGraph(8);
    Edge edge1 = mkEdge(g,0,1);
    Edge edge2 = mkEdge(g,1,2); 
    Edge edge3 = mkEdge(g,1,3);
    Edge edge4 = mkEdge(g,1,4);
    Edge edge5 = mkEdge(g,2,3);
    Edge edge6 = mkEdge(g,2,5);    
    Edge edge7 = mkEdge(g,3,4);    
    Edge edge8 = mkEdge(g,3,5);    
    Edge edge9 = mkEdge(g,5,6);
    Edge edge10 = mkEdge(g,5,7);

    insertE(g,edge1);
    insertE(g,edge2);
    insertE(g,edge3);
    insertE(g,edge4);
    insertE(g,edge5);
    insertE(g,edge6);
    insertE(g,edge7);
    insertE(g,edge8);
    insertE(g,edge9);
    insertE(g,edge10);

    depthFirst(g,0);

    return EXIT_SUCCESS;
}
