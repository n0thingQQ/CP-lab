#include<stdio.h>
int main ()
{
    int n,i,j ;
    int a[n];
    scanf("%i" , &n);
    int aux = 0 ;
    for (i = 0 ; i < n ; i++)
        scanf("%i" ,&a[i]);
     for (i = 0 ; i < n - 1 ; i ++)
        for ( j = 0 ; j < n - 1 - i ;j++)
            if (a[j] > a[j+1])
                {aux = a[j];
                a[j]=a[j+1];
                a[j+1]=aux ;}
    for (i = 0 ; i < n ; i ++)
        printf("%i " , a[i]);
    return 0 ;




}
