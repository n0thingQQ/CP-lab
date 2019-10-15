#include<stdio.h>
int main()
{
    printf("Florescu Andrei\n");
    int i;
    for(i = 65; i <= 90; i++)
        printf("%c" , i);
    printf("\n");
    char c[]="1.23456789";
    int n = 3;
    for(i = 0 ;i <= 4; i++)
        {printf("%.*s   ",n,c);
        printf("%.*s",n+1,c);
        printf("\n");
        n++;}


    return 0;
}
