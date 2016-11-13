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
} GraphRe;

// Macros

#define nVertices(g) (g->nV)
#define matrix(i,j) (g->edges[i][j])
#define maxE(g) (g->nV)*((g->nV) - 1)/2

int nEdges(Graph g);
Edge *edges(Graph g, int *nE);
//which could be used as ....
// Edges *es; //array we make int n; //#edges es = edges(g, &n);
Edge mkEdge(Vertex v, Vertex w);
