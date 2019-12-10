#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
ll n  , k , i , j , impar;
int main()
{
    cin>>n>>k;
    if ( n % 2 == 0 )
        impar = n / 2 ;
    else
        impar = n / 2 + 1 ;
    if ( k <= impar)
       cout<< (1 + 2 * (k-1));
    else
        cout<<(2 * (k - impar));

    return 0 ;


}
