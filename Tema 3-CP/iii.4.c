#include<stdio.h>
#include<stdlib.h>
int isprim(int a)
        {
            int count ;
            int d = 0 ;
            for (count = 1 ; count <= a/2 ;count++)
                if ( a % count == 0)
                    d++;
            if ( d >= 2 )
                return 0 ;
            else
                return 1 ;
        }
main ()
{
   int n , i , j;
   scanf("%i" , &n);

    for (i = 1 ; i <= n ;i++)
        if ( isprim(i) == 1)
           {
               for (j = 1 ; j <= i ;j++)
                printf("%i" , j);
                printf(" ");
           }
        else
            {for (j = 1 ; j <= i ; j++)
                printf("%i" , i);
                printf(" ");}









return 0;
}
