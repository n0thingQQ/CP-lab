#include<iostream>
using namespace std ;
int main ()


{

     int n , i  , a[101]  , p[101] ;

     int price = 102;
     int sum = 0 ;
     cin >> n ;
     for (  i = 0 ; i < n ; i++)
       {
        cin>>a[i]>>p[i];
        if ( p[i] < price )
            {price = p[i];}
        sum += a[i] * price;
       }


    cout << sum ;


return 0 ;
}
