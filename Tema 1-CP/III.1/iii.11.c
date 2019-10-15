#include<stdlib.h>
#include<stdio.h>
int main(int argc,char **argv)
{
    char firstName[100],lastName[100];
    if ( argc != 2 )
    {
        printf( "Filename isn't defined in args\n" );
    }
    FILE *f=fopen(argv[1],"r");
    while(fscanf(f, "%s", firstName) == 1 && fscanf(f, "%s", lastName) == 1)
    {
        printf("%s %s\n",firstName,lastName);
    }



}
