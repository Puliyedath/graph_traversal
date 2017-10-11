//linked list implementation with c :)


#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int value;
  struct list *next; 
}list;

void init_linked_list(list **p);
void print_list(list *p);
void add_item(list **p, int val);
int search_list(list *p, int val);

int main ()
{
  list *p = NULL ;
  init_linked_list(&p);
  add_item(&p, 2);
  add_item(&p, 3);
  add_item(&p, 4);
  print_list(p);

  printf("is 5 in the list %d \n", search_list(p, 5));
  printf("is 4 in the list %d \n", search_list(p, 4));
}

int search_list(list *p, int val)
{
  while(p != NULL)
    {
      if (p->value == val)
        {
          return 0;
        }
      p = p->next;
    }

  return -1;
}

void add_item(list **p, int val)
{
  list *q = NULL;
  q = malloc( sizeof(list) );
  q->value = val;
  q->next = *p;
  *p = q; 
}

void print_list(list *p)
{
  while(p != NULL)
    {
      printf("%d->", p->value);
      p = p->next;
    }
  printf("\n");
}

void init_linked_list(list **p)
{
  list *q;
  q = malloc(sizeof (list) );
  q->value = -1;
  q->next = NULL;
  *p = q ;
}


  
