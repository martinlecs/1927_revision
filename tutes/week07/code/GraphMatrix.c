#include <stdio.h>
#include <stdlib.h>
#include "GraphMatrix.h"
#include <assert.h>

Graph newGraph(int nV)
{
   assert(nV >= 0);
   int i, j;
   int **e = malloc(nV * sizeof(int *));
   assert(e != NULL);
   for (i = 0; i < nV; i++) {
      e[i] = malloc(nV * sizeof(int));
      assert(e[i] != NULL);
      for (j = 0; j < nV; j++)
         e[i][j] = 0; // FALSE
   }
   Graph g = malloc(sizeof(GraphRep));
   assert(g != NULL);
   g->nV = nV;  g->nE = 0;  g->edges = e;
   return g;
}
void insertE(Graph g, Edge e)
{
   assert(g != NULL);
   assert(validV(g,e.v) && validV(g,e.w));
   if (g->edges[e.v][e.w]) return;
   g->edges[e.v][e.w] = 1;
   g->edges[e.w][e.v] = 1;
   g->nE++;
}

void removeE(Graph g, Edge e)
{
   assert(g != NULL);
   assert(validV(g,e.v) && validV(g,e.w));
   if (!g->edges[e.v][e.w]) return;
   g->edges[e.v][e.w] = 0;
   g->edges[e.w][e.v] = 0;
   g->nE--;
}
void show(Graph g)
{
   assert(g != NULL);
   printf("V=%d, E=%d\n", g->nV, g->nE);
   int i, j;
   for (i = 0; i < g->nV; i++) {
      int nshown = 0;
      for (j = i+1; j < g->nV; j++) {
         if (g->edges[i][j] != 0) {
            printf("%d-%d ",i,j);
            nshown++;
         }
      }
      if (nshown > 0) printf("\n");
   }
}
int edges(Graph g, Edge es[], int nE)
{
   assert(g != NULL && es != NULL);
   assert(nE >= g->nE);
   int i, j, n = 0;
   for (i = 0; i < g->nV; i++) {
      for (j = i+1; j < g->nV; j++) {
         if (g->edges[i][j] != 0) {
            assert(n < nE);
            es[n++] = mkEdge(g,i,j);
         }
      }
   }
   return n;
}
