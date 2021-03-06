//                                          Array & Pointer arithmetic

// 4 oprators can be used on pointers -   ++ , -- , + , -
#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    // char a='3';
    // char *ptra=&a;
        // printf("%d\n" , ptra);
        // ptra--;
        // printf("%d\n" ,  ptra);
        // printf("%d\n" ,  ptra-2);   // It includes size of int (4) -> ptra(642216) + 1(4) = 642220
        // printf("%d\n" , ptra);      // It includes size of int (4) -> ptra(642216) + 1(4) = 642220
        // printf("%d\n" , ptra+2);    // It includes size of int (4) -> ptra(642216) + 2(8) = 642224
    int arr[] = {111, 2, 4, 5, 6, 7};
    int *arrptr = arr;
    // printf(" Value at position 3 of array is %d\n", arr[3]);
    // printf("The address of 1st element  of array is %d\n", &arr[0]);                         // Method 1
    // printf("The address of 1st element  of array is %d\n", arr);                             // Method 2
    // printf("The address of 1st element  of array is %d\n", arrptr);                          // Method 3
    // printf("The address of 2nd element  of array is %d\n", &arr[1]);                         // Method 1
    // printf("The address of 2nd element  of array is %d\n", arr + 1);                         // Method 2
    // printf("The address of 1st element  of array is %d\n", arrptr[1]);                       // Method 3

    // arrptr++;

    printf("The value of address of 1st element  of array is %d\n", *(&arr[0])); // Method 1
    printf("The value of address of 1st element  of array is %d\n", *(arr+0));   // Method 2
    printf("The value of address of 1st element  of array is %d\n", arr[0]);     // Method 3
    printf("The value of address of 2nd element  of array is %d\n", *(&arr[1])); // Method 1
    printf("The value of address of 2nd element  of array is %d\n", *(arr + 1)); // Method 3
    printf("The value of address of 2nd element  of array is %d\n", arr[1]);     // Method 2
    return 0;
}

//     Char takes 1 byte
//     int  takes 4 byte
