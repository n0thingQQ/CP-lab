#include<stdio.h>
int main ()
{
    int n ,m ,i,aux,j,k ;
    scanf("%i%i" , &n , &m);
    int p[n];
    for ( i = 0 ; i < m ; i++)
        scanf("%i" , &p[i]);

    for (i = 0 ; i < m - 1 ; i ++)
        for ( j = 0 ; j < m - 1 - i ;j++)
            if (p[j] > p[j+1])
                {aux = p[j];
                p[j]=p[j+1];
                p[j+1]=aux ;}
    int answ = 9999999 ;

    for (i = 0 ; i <= m-n ; i++)
           {
            k = p[i+n-1]-p[i];
            if (answ < k)
                answ = k ;}

    printf("%i" , answ);





    return 0 ;


}
