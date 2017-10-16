//check whether a file is biparte or not

#define MAX_VERTICES 1000
#define COLORLESS -1
#define BLACK 0
#define WHITE 1

typedef struct{
  int y ;
  struct edgeNode* next;
} edgeNode;

typedef struct {
  int mVertices ;
  edgeNode* edges[MAX_VERTICES];
} graph;


int main()
{
  return 0 ;
}

biparte(graph *g)
{
  void bfs(graph *g, int i );
  char discovered[MAX_VERTICES];
  int colors[MAX_VERTICES];

  for(int i = 1; i < g->mVertices; i++)
    {
      discovered[i] = 0;
      colors[i] = COLORLESS;
    }

  for (int i = 1 ; i < g->mVertices; i++)
    {
      if (discovered[i] == 0 )
        {
          colors[i] = WHITE;
          bfs(g,i);
        }
    }

  return 0;
}

boolean process_edge(int x , int y, int* colors)
{
  //if the colors for the x and y node are the same , then this graph cannot be a biparte
  if (colors[x] == colors[y])
    {
      return false;
    }

  colors[x]  = complimentary(y);
  

  
}
