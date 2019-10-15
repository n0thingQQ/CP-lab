#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
int main ()
{
    //serial number:1. random 4 digit number(first digit !=0)
    //serial number:2. 3 random upper case letters
    //serial number:3. random 3 digit number(digit not even )
    //serial number:4. last caracter of item name(uppercase)
    char product_name[50];
    int man;
    char year[10];
    int i,diceRoll;
    int randomNumber=1;
    int randomNumber1=0;
    int p=1;
    int randomAscii;
    char aux[]="000";
    srand(time(0));

    printf("WELCOME TO THE PRODUCT LABEL MAKER!\n");
    //
    printf("Please enter the name of the product:");
    scanf("%[^\n]" , &product_name);
    //
    printf("Please enter the month the product was manufactured:");
    scanf("%i" , &man );
    //
    printf("Please enter the year the product was manufactured as a four digit number:");
    scanf("%s" , &year);
    //
    printf("Here is your product label:\n");
    printf("*********************************************\n");
    printf("%s\n" , product_name);
    //step 1
    for(i = 0 ; i <= 3 ; i++)
    {
        diceRoll = (rand() % 9 ) + 1 ;
        randomNumber = randomNumber + diceRoll*p;
        p = p * 10;
    }
    //step 2 65-48


    for(i = 0 ; i < 3 ; i++)
    {
        randomAscii = (rand() % 26)+65;
        aux[i]=randomAscii;
    }
    //step 3
    p=1;
    for (i = 1 ; i <= 3 ; i++)
    {
        diceRoll = (rand() % 9 ) + 1 ;
        if(diceRoll % 2 == 0)
            diceRoll = diceRoll + 1;
        randomNumber1 = randomNumber1 + diceRoll*p;
        p = p * 10;
    }
    int lenght=strlen(product_name);
    char v=product_name[lenght-1];
    v=toupper(v);





    char luni[12][20]={"January","February","March","April","May","June","July","August",
                        "September","October","November","December"};

    printf("Serial Number:");
    printf("%i-%s-%i-%c\n",randomNumber,aux,randomNumber1,v);

    printf("Manufactured:");
    printf("%c%c%c %c%c\n",luni[man-1][0],luni[man-1][1],luni[man-1][2],year[2],year[3]);



    return 0;





}
