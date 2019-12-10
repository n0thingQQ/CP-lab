#include<iostream>
using namespace std;
int n , p , x[101],i,k;
int main ()
{
    int ok = 1 ;
    cin>>n>>p;
    for ( i = 0 ; i < p ; i++)
        {cin>>k ;
        x[k] = 1 ;}
    cin>>p;
    for ( i = 0 ; i < p ; i++)
        {cin>>k ;
        x[k] = 1 ;}
    for ( i = 1 ; i <= n ; i++)
        if ( x[i] == 0 )
            ok = 0 ;

    if ( ok == 0 )
        cout<<"Oh, my keyboard!";
    else
        cout<<"I become the guy.";
    return 0 ;





}
