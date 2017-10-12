#include <stdio.h>
#include <string.h>

int main()
{
int findMatch(char* p, char* t);
int power(int a , int n );
//int result = findMatch("abc" ,"hareesh");(setq gdb-many-windows t)
//printf("the result is %d", result);
printf("4 to 4 is %d" ,power(4,4));
  
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

int power(int a,int n)
{
  int x;
  if (n == 0) return 1;

  x = power(a , n/2);
  if (n % 2 == 0) return x * x;
  return a * x * x;
}
    
  

