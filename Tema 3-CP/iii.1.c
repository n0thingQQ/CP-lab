#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i , n , m , c , j ,k ;
    printf("Enter how many numbers you want in the first list: ");
    scanf("%i",&n);
    int a[n];
    for (i = 1 ; i <= n ; i++)
        scanf("%i" , &a[i]);

    printf("Enter how many numbers you want in the second list :" );
    scanf("%i",&m);
    int b[m];

    for (i = 1 ; i <= m ; i++)
        scanf("%i" , &b[i]);
       c = n + m;

    int f[c];
    j = 1;i = 1;k = 1;
    while ( i <= n || j <= m)
        {if ( a[i] > b[j])
            {   f[k] = b[j];
                k++;
                j++;    }
                else
                    if (a[i] < b[j])
                    {   f[k] = a[i];
                        k++;
                        i++;    }
                    else
                        if (a[i] == b[j])
                            {   f[k] = a[i];
                                k++;
                                i++;    }}
    for ( k = 1 ;k <= c ;k++)
        printf("The elemt at position %i in the final list is %i\n" , k ,f[k]);








return 0 ;
}
