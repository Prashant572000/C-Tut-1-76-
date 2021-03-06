//                                      Exercise 13 Solution

#include <stdio.h>
#include <string.h>
#include <stdlib.h>                              // in this header file , there is 1 fn atoi() which takes string in argu & return int 
void main(int argc, char *argv[])
{
    char *operation;
    int num1 , num2;
    operation = argv[1];
    num1 = atoi(argv[2]);                       // argv is char data type , atoi takes argv as argu, and return integer 
    num2 = atoi(argv[3]);
    printf("Operation is %s\n" , operation);
    printf("Num 1 is %d\n" , num1);
    printf("Num 2 is %d\n" , num2);

    if (strcmp(operation , "add") == 0) {           // This means if string(operation) and string(add) == 0 because strcmp return 0  
        printf("%d\n" , num1 +num2 );
    }
    else if (strcmp(operation , "sub") == 0) {
        printf("%d\n" , num1 -num2 );
    }
    else if (strcmp(operation , "multi") == 0) {
        printf("%d\n" , num1 *num2 );
    }
    else if (strcmp(operation , "div") == 0) {
        printf("%d\n" , num1 /num2 );
    }
}