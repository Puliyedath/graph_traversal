#include <stdio.h>
#include <string.h>

int main()
{
  int findMatch(char* p, char* t);
  int result = findMatch("abc" ,"hareesh");
  printf("the result is %d", result);
  
}


//find the starting index of the pattern t in p
int findMatch(char *p, char* t)
{
  int m, n, j;
  m = strlen(p);
  n = strlen(t);

  for( int i = 0; i <= n-m ; i++)
    {
      j = 0;
      while(j<m && (t[i+j] == p[j]))
        {
          j = j + 1 ;
        }

      if (j == m) return 0 ;
        
    }

  return -1;
}


