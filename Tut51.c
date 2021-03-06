//                                      Exercise 9
/*
Create game Rock , Paper , Scissors
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandonNumber(int n) {
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    // srand(45);                                                                      // srand, inside seed which takes argu as i/p
    printf("The random number between 0 to 100 is %d\n" , generaterandonNumber(19));
    return 0;
}