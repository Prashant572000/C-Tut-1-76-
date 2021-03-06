//                                      Void Pointer(General purpose ptr)

/*
It is a pointer, that it has no data type   (jiska data type ap phle se nhi bnate , we reserve memory only jb addres store kna ho to tb data type btate h)
It can be easily typecasted to any pointer type
Also known as general purpose pointer var 

Uses of Void Pointers

In DMA , malloc() , calloc() return (Void *) type pointer
It allows these DM fn to allocate memory of any data type, because these pointers typecast to any pointer type  

Not possible to dereference void ptrs, ptr arthmatic not allowed in ptrs 
*/

#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    printf("The address of void ptr is %d" , ptr);         // Address of void ptr is 0
    // printf("The value of a is %d\n", *ptr);             // didn't dereference void ptr directly , 1st typecase ptr then deref.
    // ptr=&a;
    // printf("The value of a is %d\n" , *((int *)ptr));
    // ptr=&b;
    // printf("The value of b is %f\n" , *((float *)ptr));
    return 0;
}

// we created general purpose pointer now we can use this ptr to any data type