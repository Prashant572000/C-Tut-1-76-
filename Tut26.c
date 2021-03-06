//                                         Pointers

/*
Pointer is a var that stores address of another var which pointer points to var,  
Pointer in c declared using *(asteric symbol), 
The & operator returns address of var            (Ex - int a =7; &a = add of a)
* is dereference operator(indirection operator)  Ex-  int a =7; print *ptr  , O/p =7   
used to get val at given address
USE OF POINTERS - Dynamic memory Allocation, Array, Fns, Structures, Return multiple val from fn, Reduces code and improve performance
*/

#include <stdio.h>
int main()
{
    int a=76;
    int *ptra=&a;
    // int *ptra2=NULL;
    // printf("The add of ptra2 is %p\n" , ptra2);
    printf("The value of a is %d\n" , a);                        // To print the val of a Method 1
    printf("The val of a is %d\n" , *ptra);       // Dereferencing of ptr (means get the val which ptr pointer points)
    printf("The value of a is %d\n" , *ptra);                    // To print the val of a Method 2
    printf("The address of a is %d\n" , &a);                     // To print the address of a Method 1
    printf("The address of a is %d\n" , ptra);                   // To print the address of a Method 2
    // printf("The add of ptra is %x\n" , ptra);                        // To print the addres of ptra in Hexa dec
    // printf("The address of pointer Ptra is %d\n" , &ptra);      // To print the address of ptra   
     
// printf("print The address of ptra in Hexadec is %x\n",ptra);  //print the address of ptra(Pointer) in form of hexa dec no.(%x means)
    return 0;
}

/*
Pointer that not assigned any avl and doesn't points to any obj or fn is called Null Pointer 
When pointer var have no val then we assigned null val
Ex-       int *ptr=NULL; 
*/