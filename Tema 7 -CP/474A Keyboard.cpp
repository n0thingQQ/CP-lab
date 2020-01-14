#include<bits/stdc++.h>
using namespace std;



int main ()
{
    int i , j , len  ;
    string text  ;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char pos ;
    cin>>pos;
    cin>>text;
    len = text.size() ;


    if( pos == 'R')
        for (  i = 0 ; i < len ; i++)
            for ( j = 0 ; j < 32 ; j++)
                if ( key[j] == text[i])
                    cout<<key[j-1];


    else
        for (  i = 0 ; i < len  ; i++)
            for ( j = 0 ; j < 32 ; j++)
                if ( key[j] == text[i])
                    cout<<key[j+1];




    return 0 ;


}
