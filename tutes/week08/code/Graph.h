// Interface for Graph Adjacency List ADT

#include <stdbool.h>

#define nEdges(g) (g->nE)
#define vertex(i) (g->edges[i]->v)

typedef struct Vnode *VList;
typedef struct Vnode *VLink;
typedef struct Vnode { Vertex v; VLink next; };
typedef struct Graph { int nV; int nE; VList *edges; } *Graph;

bool hasEulerTour(Graph g);
bool isConnected(Graph g);
int degree(Graph g, Vertex v);
