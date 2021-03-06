//                                          Dangling Pointer
#include <stdio.h>
#include <stdlib.h>
int fndangling()
{
    int a = 34, b = 364, sum;
    sum = a + b;
    return &sum;
}
int main()
{
    // Case 1: De allocation of  a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 54;
    ptr[1] = 64;
    ptr[2] = 74;
    ptr[3] = 5;
    free(ptr);                                  // free ptr is now dangling ptr

    // Case 2: Fn returning local var address
    int *dangptr = fndangling();                // dangptr is now a dangling ptr
// scope of fn is local , it return add of sum , after fn call sum var will destroy , so this will danglig ptr

    int *dangptr3;
    // Case 3: If var goes out of scope
    {                                       // this is scope , Starts
        int a=12;
        dangptr3=&a;
    }                                       // Ends
    // Here var a goes out of scope(means var a deleted ) which means dangptr3 is pointing a location which is freed
    // and hence danglingptr3 is now a dangling pointer
    return 0;
}