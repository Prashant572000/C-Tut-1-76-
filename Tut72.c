//                                      Function Pointers

/*
We have pointers which points to var , as well we hav  pointer which points to fn called fn ptr Ex- int (*p) (int , int)
[p is fn pointer which return integer and takes 2 integer] , p is fn pointer , Ex- p=&fn1; now p points to fn1

Why FN Pointers - It is useful for implement callback fns
*/

#include <stdio.h>
#include <stdlib.h>
int sum(int a , int b) {
    return a+b;
}
void main()
{
    printf("The sum of 1 and 2 is %d\n" , sum(1,2));        // Testing fn
    int (*fptr) (int , int);            // create a function ptr which return integer, and takes 2 integer as i/p
    fptr = &sum;                        // This file ptr points to sum fn
    // int d= (*fptr)(4,6);                // just like Ex- int a=3 , *ptr=a;(it will print 3) (Derefrencing ptr)
// *ptr gives val of var which pointed by ptr, so *fptr gives fn , it looks like int d=sum(4,6);
    printf("The val of d is %d\n" , (*fptr)(4,6));
}