//                                          Static Variables in C

#include <stdio.h>
int b=34;                                   // Global var
int func1(int b)                           // formal parameters
{
   static int myvar=0;                      // if we not assign val to static var , default val is zero
    printf("The value of myvar is %d \n" , myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b); // func1 int b var is different from main fn of var b
    return b * 10;
}
void main()
{
    int b = 344;                                        // Actual parameter (Local var)
    printf("The address of b inside main is %d\n", &b); // func1 int b var is different from main fn of var b
    int val = func1(b);                                 // will print 0
    val = func1(b);                                     // will print 1
    val = func1(b);                                     // will print 2
    val = func1(b);                                     // will print 3
    // val = func1(b);                                  // will print 4
    printf("The value of func1 is %d \n", val);
    printf("The val of b is %d\n" , b);
}

// when we call the fn by value , the values copies , means actual parameters are copied into formal parameters