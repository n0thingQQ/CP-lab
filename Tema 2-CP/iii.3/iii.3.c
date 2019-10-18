#include<stdlib.h>
#include<stdio.h>
int main ()
{
    int putere ( int base , int exponent)
        {
            if (exponent == 0)
                return 1 ;
            else
                return  base * putere ( base , exponent - 1);

        }

    printf("%i " , putere(2 , 3));

    return 0 ;


}



