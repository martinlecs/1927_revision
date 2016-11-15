typedef struct { Vertex s; Vertex t; int w; } Edge;
void sortedEdgeList(Graph g, Edge edges[]);
int cmp(const void *a, const void *b);
