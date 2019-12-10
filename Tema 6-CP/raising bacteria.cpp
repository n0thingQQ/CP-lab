// https://codeforces.com/problemset/problem/579/A
#include<iostream>
using namespace std;
int main ()
{
    long long  n ;
    cin>>n;
    int count = 0 ;
    while (n != 0)
        {if ( n % 2 !=0)
            count++;
        n /= 2 ;
        }
    cout <<count ;
    return 0 ;
}
