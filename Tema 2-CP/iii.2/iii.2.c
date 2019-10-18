#include<stdlib.h>
#include<stdio.h>
int main ()
{
    void perfect (int n)
        {
            int i ; int ok = 0 ;
            int s = 0 ;int count = 0;
            int a[100];
            int j = 1 ;
            for (i=1 ; i <= n/2 ; i++)
                if (n % i ==0)
                    {a[j] = i ;
                    s = s + i ;
                    j++;
                    count ++;}
            if ( s == n )
            {   printf("%i is made by adding :" , n);
                ok = 1 ;
                for(j = 1 ; j <= count  ; j++)
                    printf("%i " , a[j]);   }
            if ( ok == 1)
                printf("\n");
        }
    int k ;
    int m;
    scanf("%i" , &m);
    for (k = 1 ; k <= m ;k++)
        perfect(k);
    return 0;










}
