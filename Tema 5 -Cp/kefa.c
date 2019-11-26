#include<stdio.h>
int main ()
{
    int n ;
    scanf("%i" , &n);
    int ok = 0 ;
    int a[n],i,aux ;
    int count = 1  ;int countMax = 1 ;

    for ( i = 0 ; i < n ; i++)
       {
        scanf("%i" , &a[i]);
        if ( i > 0 )
            if ( a[i] >= a[i-1])
                {
                    count ++ ;
                    if ( countMax < count)
                        countMax = count ;
                }
            else
                count = 1 ;

            }
    printf("%i" , countMax);




    return 0 ;




}
