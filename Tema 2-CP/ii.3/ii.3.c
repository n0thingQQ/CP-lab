#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main ()
{
    /*Write a program that computes the solutions of a 2-nd degree equation aX^2 + b^X + c =0. The a, b, c
    coefficients are real numbers and are known. */


    int a , b , c ;
    int delta ;
    int x1 , x2 ;
    scanf("%i %i %i",&a ,&b ,&c );

    delta = (b*b) - (4 * a * c);
    if ( delta > 0)
        {   x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a); }
            else
                if ( delta == 0)
                   {x1 = (-b)/(2*a);
                    x2 = x1; }
                    else
                        if ( delta < 0)
                    {       x1 = (-b - sqrt(-delta))/(2*a);
                            x2 = (-b + sqrt(-delta))/(2*a); }
    if ( delta > 0)
        printf("%i %i",x1 ,x2 );
        else
            if (delta == 0)
                printf("Ecuatia are solutie unica x = %i" , x1);
                else
                    printf("Solutiile ecuatiei sunt x1 = %ii si x2 = %ii",x1,x2);

    return 0;




}
