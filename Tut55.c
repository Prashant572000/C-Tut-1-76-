//                                      Wild Pointers
/*
Uninitialized ptrs known as wild ptrs, this ptr point to any arbitory memory location in memory,    
Syntax - int *ptr; , inside this ptr there is garbage value,  
Dereferencing wild ptr can cause nasty bugs(crash your program) , because inside wild ptr , garbage val

int a=3;
int *ptr;                                   Now it is a wild ptr
ptr=&a;                                     ptr no longer wild

To avoid wild ptr set ptr to null
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 334;
    int *ptr;                                   // This is wild ptr , where inside any address
    *ptr = 34;                                  // inside ptr garbage val , wha us add pr jakr wha 34 write kr rha h
    ptr = &a;                                   // ptr is no longer wild ptr
    printf("The value of a is %d\n", *ptr);
    return 0;
}