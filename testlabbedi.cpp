#include<stdio.h>
#include<stdlib.h>
int d[100001];
void printArray(int d[] ,int count)
{
    for ( int i = 0 ; i < count ;i++){
        printf("%d " , d[i]);
    }
    printf("\n");
}
void swapPlace(int *a,int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux ;
}
int  partitie (int d[] ,int low ,int  high)
{
    int pivot = d[high];
    int i = (low -1);
    int aux = 0 ;
    for (int j = low ; j <=high -1;j++){
        if (d[j] < pivot){
            i++;
            swapPlace(&d[i],&d[j]);
        }
    }
  swapPlace(&d[i+1],&d[high]);
  return (i + 1);
}

int kthSmallest(int d[],int left ,int right ,int k)
{
    int p = partitie(d,left,right);
    if ( p == k-1){
        return d[p];
    }
    else if (k - 1 < p){
        return kthSmallest(d,left,p-1,k);
    }
    else{
        return kthSmallest(d,p+1,right,k);
    }
}
void quickSort(int d[],int low,int high)
{
    if (low < high){
        int pa = partitie(d,low,high);
        quickSort(d,low,pa - 1);
        quickSort(d,pa + 1,high);
    }
}
int main ()
{

    int n , k ;
    scanf("%d",&n);
    for ( int r = 0 ; r < n ;r++){
        scanf("%d",&d[r]);
    }
    quickSort(d,0,n-1);
    printf("Sorted array: ");
    printArray(d,n);
    printf("\nIntroduceti kthsmallest ");
    scanf("%d",&k);
    printf("\nkethSamllest is %d",kthSmallest(d,0,n-1,k));
    return 0 ;
}
