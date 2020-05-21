#include "functii.h"

void randomiseNumber(long* numar)
{
    *numar = rand() % 1000000 + 1  ;

}
long randomiseStation(long lower ,long upper,long count,long d[100001])
{

    long i ,num ;
    for (i = 1 ; i <= count; i++){
        num = 1 +(rand() % (lower + upper ) + d[i-1]) ;
        while ( num == d[i-1]){
            num = (rand() % (lower + upper ) + d[i-1]) ;
        }
    d[i] = num ;
    }
    return d;

}
long parcurgere(long statieCurenta ,long autonomie,long numarStatii,long d[100001]){
    long i = statieCurenta ;
    long k = autonomie ;
    long opriri = 0 ;

    while ( i < numarStatii ){
        if(k - (d[i+1]-d[i]) >=0){
            k -= d[i+1] - d[i];
            i++;
        }
        else{
            k = autonomie ;
            opriri ++ ;
        }

    }
    return opriri ;
}

