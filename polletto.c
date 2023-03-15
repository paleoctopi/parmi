#include <stdio.h>
 int main()
 {
    int x;
    int y = 2;
    scanf ("%d", &x);
     while (y < x )
     { 
        // if (x % y !=0)
        // {
        // printf(" si tratta di un numero primo");
        // }
        if ( x % y == 0)
        {
            printf("non si tratta di un numero primo\n");
            break ;
        }
        
      y = y+1;
        
     }
    if( x == y)
    {
        printf("'si tratta di un numero primo\n");
      }
 }
