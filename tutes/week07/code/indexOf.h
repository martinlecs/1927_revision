// Interface for indexOf function written for tute week07 q12

typedef sruct GraphRep * Graph;
typedef int Vertex;
typedef struct edge Edge;
typedef unsigned char Bool;

struct edge { Vertex v, Vertex w; };

struct GraphRep {
    int nV; // # vertices
    int nE; // # edges
    Bool *edges; //array of booleans (0 or 1)
};


