#include<iostream>
using namespace std;
int main ()
{
    int n , k , s , i ;
    s = 0 ;
    k = 1 ;
    cin >> n ;
    for ( i = 1 ; i < n ; i++)
        {s += k * (n-i);
        k++;}
    s = s + n ;
    cout << s ;


}
