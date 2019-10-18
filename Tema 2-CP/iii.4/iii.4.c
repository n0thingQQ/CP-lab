#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int ok,i ;
    printf("Press 1 if you want to ...... else press 0 \n");
    scanf("%i" , &ok);

    int gcd ( int M , int N)
        {
            if ( ok == 1 )
                printf("The value of M is %i and the value of N is %i\n",M,N);
            if ( M % N == 0)
                return N;
            else
                return gcd( N , M % N);

        }
    int k ;int var1,var2;
    printf("Enter how many pairs of numbers you want to test :\n");
    scanf("%i" , &k);
    for ( i = 1 ; i <= k ; i++)
        {   printf("Enter the value for the first number :\n");
            scanf("%i" , &var1);
            printf("Enter the value for the second number :\n");
            scanf("%i" , &var2);
            printf("The greatest common divisor between %d and %d is %d\n",var1,var2,gcd(var1,var2));}


return 0 ;
}
