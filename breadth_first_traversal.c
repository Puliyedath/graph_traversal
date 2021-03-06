#include <stdio.h>

main()
{
  
}

breadth_first_traversal(graph *g, int start)
{
  queue q ; int v; EdgeNode p ; int y;
  init_queue(&q);

  v = start;

  add(&q, v);

  discovered[v] = true;

  while(is_Empty(&q) == false)
    {
      v = dequeue(&q);
      p = g->edges(v);

      process_vertex_early(v);
      while(p != null)
        {
          y = p.y;
          if (discovered[y] == false)
            {
              parent[y] = v ;
              discovered[y] = true;
              add(&q, y);
            }

          if (processed[y] == false || g->directed)
            {
              process_edge(v,y);
              g->outdegree[y]++;
            }
          p = p->next;
        }

      processed[v] = true;
      process_vertex_late(v);
    }
  
}

find_path(graph *g, int start , int end, int parents[])
{

  if (parents[end] == -1 || (start == end))
    {
      printf("%d", start)
      return 0; 
    }

  prinf("%d", end);
  find_path(g, start, parents[end], parents);
}


//begining of the defun and end of defun is the method of movement that you 
connected_components(graph *)
{
  int mV = g->mV;
  int c = 0;

  for(int i = 0 ; i <= mV ; i++)
    {
      c++;
      if (discovered[i] == false)
        {
          breadth_first_traversal(g, i);
        }
    }
}



