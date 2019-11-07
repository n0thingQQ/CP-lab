#include <stdio.h>
#include <conio.h>
int i , j , x ,y ;
int move[64]  ;

void jump (int d )
{
    if      (move[i] == 0 ) { x = x - 1*d; y = y + 2*d;}
    else if (move[i] == 1 ) { x = x - 2*d; y = y + 1*d;}
    else if (move[i] == 2 ) { x = x - 2*d; y = y - 1*d;}
    else if (move[i] == 3 ) { x = x - 1*d; y = y - 2*d;}
    else if (move[i] == 4 ) { x = x + 1*d; y = y - 2*d;}
    else if (move[i] == 5 ) { x = x + 2*d; y = y - 1*d;}
    else if (move[i] == 6 ) { x = x + 2*d; y = y + 1*d;}
    else if (move[i] == 7 ) { x = x + 1*d; y = y + 2*d;}

}



int main ()
{
    int grid[8][8] = {-1};
    for ( i = 0 ; i < 8 ;i++)
       for (j = 0 ; j < 8 ;j++)
        grid[i][j] = -1 ;


    for ( i = 0 ; i < 64 ;i++)
        move[i] = 0 ;

    //starting position is   grid[0][0]
    x = 0 ;
    y = 0 ;
    for ( i = 0 ; i < 64 ; i++)
     {
         if ( x >= 0 && x < 8 && y >= 0 && y < 8 && grid[x][y] == -1 )
            grid[x][y] = i ;
        else
        {
            i = i - 1 ;
            jump(-1);
            while(move[i] == 7)
            {
                grid[x][y] = -1;
                move[i] = 0;
                i = i - 1 ;
                jump(-1);
            }
            move[i] = move[i] + 1;
        }
        jump(1);
    }

    for ( i = 0 ; i < 8 ; i++)
    {
        for ( j = 0 ; j < 8 ; j++)
            printf("%2d " , grid[j][i]);
        printf("\n");
    }


return 0 ;
}
