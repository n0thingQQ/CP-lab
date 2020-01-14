#include<iostream>
using namespace std;
int main ()
{
    int n , m , i;
    char c ;
    cin>>n>>m;
    int ok = 0 ;
    for ( i = 0 ; i < n*m ;i++)
        {cin>>c;
        if ( c == 'C' || c == 'M' || c == 'Y')
            ok = 1 ;}
    if (ok == 0 )
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0 ;

}
