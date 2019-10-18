#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main ()
{
    int N,s1,s2;
    s1=0;s2=0;
    float sigma;
    int i,a[20];
    int num,num1;
    scanf("%i" , &N);

    for(i=1 ; i <=N ; i++)
        {scanf("%i" , &a[i]);
        s1=s1 + a[i] * a[i];
        s2=s2 + a[i];}
    s2=s2*s2;
    s1=s1 * N;
    num = N * (N-1);
    num1 = s1 - s2;
    printf("%i %i\n" , num1 , num);

    sigma = sqrt(num1/num);


    printf("%f\n" , sigma);




    return 0 ;












}
