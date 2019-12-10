// https://codeforces.com/problemset/problem/230/A
#include<iostream>
using namespace std;
long  s , n ;
int i , j,aux ,aux2 ;
long x[1001],y[1001];



int main ()
{
    int ok = 1 ;
    cin>>s>>n;
    for (i = 1 ; i <= n ; i++)
        cin>>x[i]>>y[i];
    for (i = 1 ; i < n  ; i ++)
        for ( j = 1 ; j <= n - i ;j++)
            if (x[j] > x[j+1])
                {aux = x[j];
                x[j]=x[j+1];
                x[j+1]=aux ;

                aux2 = y[j];
                y[j]=y[j+1];
                y[j+1]=aux2;

                }
   for ( i = 1 ; i <= n ;i++)
        if ( s > x[i])
            s = s + y[i];
        else
            {ok = 0 ;
            break;}
    if (ok == 0 )
        cout <<"NO";
    else
        cout <<"YES";
    return 0 ;
}
