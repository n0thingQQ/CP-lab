#include<stdio.h>
int main ()
{
    int n ;
    scanf("%i" , &n);
    int ok = 1 ;
    int n2 = n ;
    while(n2 > 0)
    {
        if (n2 % 10 != 4 && n2 % 10 != 7)
           {    ok = 0 ;
                break;
           }
        n2 /= 10 ;
    }

    if      (ok == 0 && n % 4 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 7 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 47 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 74 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 44 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 77 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 444 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 447 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 474 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 777 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 774 == 0 ) ok = 1 ;
    else if (ok == 0 && n % 747 == 0 ) ok = 1 ;

    if ( ok == 1 )
        printf("YES");
    else
        printf("NO");
    return 0 ;

}
