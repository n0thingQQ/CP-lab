#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int number , count , c ,step ,j ;
    printf("Enter the number of children:");
    scanf("%i",&number);
    int a[number] ;

    for (j = 1 ; j <= number ; j++)
        a[j] = 0 ;

    printf("Enter the count :");
    scanf("%i" , &count);


    int i = 0 ;
    step = 0 ;
    int k = number ;
    while ( k != 1 )
        { i = 0 ;
          c = count ;

        while ( i != c )
        {
            if ( i < c)
                i++;

            if ( a[i + step ] == 1 )
                    c++;
            if ( i + step == number && i == c)
                a[i + step ] = 1 ;
            if ( i + step == number)
                {   c = c - number + step;
                    i = 0 ;
                    step = 0 ;     }   }
        a[i] = 1 ;
        k--;
        step =  i ;

        }
    for ( j = 1 ; j <= number ;j++)
        printf("%i " , a[j]);









return 0;
}
