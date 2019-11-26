#include<stdio.h>
int main ()
{
    int n ;
    scanf("%i",&n);
    int a[n],i,j,aux;
    int sum = 0 ; int sumT = 0 ;int count = 0 ;
    for ( i = 0 ; i < n ; i++)
        {scanf("%i" , &a[i]);
        sum += a[i];}

    for ( i = 0 ; i < n-1 ;i++)
        for( j = 0 ; j < n-1-i ;j++)
            if(a[j] < a[j+1])
                {aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux ;}

  for ( i = 0 ; i < n ;i++)
        if(sumT <= sum )
            {sumT += a[i];
            sum -= a[i];
            count++;}
    printf("%i" , count );



    return 0 ;


}
