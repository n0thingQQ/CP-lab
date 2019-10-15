#include <stdio.h>
int main(void){
 // In this example, the user has $20.07 to buy stamps
 int numDollars = 20;
 int numCents = 7;
 int stampCost = 39; // each stamp costs 39 cents
 // Compute the maximum number of stamps the user can purchase
 int numStamps = ((numDollars*100)+numCents)/stampCost;
 // Compute the amount of change (in cents) the user will have left over
 int change =((numDollars*100)+numCents)-(numStamps * stampCost) ;
 printf("\n You can purchase %d stamps.", numStamps);
 printf("\n You will have %d cents remaining.", change);
}

