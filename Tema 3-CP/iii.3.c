#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n , lcm   ;
    scanf("%i" , &n);


      int gcd ( int M , int N)
        {
            if ( M % N == 0)
                return N;
            else
                return gcd( N , M % N);
        }
    int a , b ;
    for ( a = 2 ; a <= n ; a++)
        for (b = 2 ; b <= n ; b++)
            if( (a * b )/gcd(a,b) < n && a != b  )
                printf ("%i %i\n" , a , b );







 return 0;
}
