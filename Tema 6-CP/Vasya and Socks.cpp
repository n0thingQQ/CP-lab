// https://codeforces.com/problemset/problem/460/A
#include<iostream>
using namespace std;
int n ,m , i ;

int main ()
{
    int count = 0 ;int days = 0 ;
    cin>>n>>m;
    while ( n != 0)
       {
        n -= 1 ;
        count += 1 ;
        if ( count == m)
            {n += 1;
            count = 0 ;}
        days +=1 ;
       }
    cout<<days;
    return 0 ;



}
