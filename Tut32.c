//                                    Passing Arrays As Function Arguments

/*
We pass arr to a fn when we need to pass a list of values to given fn
We can pass arr to a fn -> 
By declare arr as parameter in fn                       (Ex - int avg(int arr[])) 
By declare pointer in fn to hold base address of arr    (Ex - int sum(int *ptr) )

Inside func If you change val of arr , it gets reflected in main fn
*/

#include <stdio.h>

void func1(int array[])                                     // Passing arr as parameter in function
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d & %d\n", i, array[i]);
    }
    array[0] = 223;                                // Very imp point that if you change any value here , it gets reflected in main 
}

void func2(int *ptr)                                        // Pass array as a pointer in func2
{
    for (int i = 0; i < 4; i++)
    {
        // printf("%d & %d\n" ,i ,ptr[i]);                  // Method 1
        printf("%d & %d\n", i, *(ptr + i));                 // Method 2
    }
    // *(ptr + 2) = 6534;                                   // Method 1
    ptr[2] = 6534;                                          // Method 2
}
void func3(int arr[2][2])                                   // Pass multidimension array
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d & %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    // int arr[] = {2, 3, 4, 5};
    int arr[2][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d \n" , arr[0]);   // Passing arr as parameter in function
    // func1(arr);
    // printf("The value at index 0 is %d \n" , arr[0]);
    // func2(arr);         // 1st call , will print arr values through for loops
    // func2(arr);         // now change val of arr[2] , then func2(arr) calls and change val of arr[2] through *(ptr+2) pointer and run loop
    func3(arr);
    return 0;
}