#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
#include"functii.h"

int main ()
{
    srand(time(0));
    long answer = 0 ;
    long autonomie = 0 ;
    long numarStatii = 0;
    long d[100001];
    long size = 0 ;
    for (int p = 0 ; p < 100001 ;p++){
        d[p] = 0;
    }
    FILE *fout = fopen("Inputs.txt" , "w");

    //randomising the value for the number of gas station and the autonomy of the car
    randomiseNumber(&autonomie);
    randomiseNumber(&numarStatii);

    printf("Autonomie masina :%d\nNumar de statii: %d\n" , autonomie ,numarStatii);

    //randomising where the gas station are situated
    randomiseStation(0,autonomie,numarStatii,d);
    for(int m = 0 ; m <= numarStatii;m++){
        printf("%d ",d[m]);
    }
    printf("\n");
    //checking if all the distances are <= autonomy of the car
    for(int m = 0 ; m < numarStatii;m++){
        fprintf(fout,"% li " , d[m]);
        }

    fclose(fout);
    printf("\n\nOccupied space is %d",size);
    //computing  the minimum amount of stops needed to get to the final destination
    answer = parcurgere(0,autonomie,numarStatii,d);
    printf("\n\nOpriri necesare:%d" , answer);
    return 0 ;

}
