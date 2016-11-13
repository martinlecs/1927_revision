// Interface for Graph ADT w/ Adjacency matrix for tute week07 q9 

// Vertices denoted by integers 0..N-1
typedef struct GraphRep * Graph;
typedef int Vertex;
typedef struct edge Edge;

// Edges are pairs of vertices (end-points)
struct edge { Vertex v; Vertex w; };

typedef struct GraphRep {
    int nV; // #vertices
    int ** edges; // matrix of 0/1 values
    //int ** edges = edges[0][0]
}

// Macros

#define nVertices (g) (g->nV)
#define matrix(i,j) (g->edges[i][j])

int nEdges(Graph g);

