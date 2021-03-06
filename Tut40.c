//                                      Exercise 5 Solution
/*
Logic - 7 values

1,2,3,4,5,6,67
67,2,3,4,5,6,1
67,6,3,4,5,2,1
67,6,5,4,3,2,1
*/

#include <stdio.h>
void arrrev(int arr[]) {
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        // Swap item arr[i] with item arr[6-i]
        temp=arr[i];                // temp is 1 
        arr[i]=arr[6-i];            // arr[i]=67
        arr[6-i]=temp;
    }   
}
void printarr(int arr[]) {
    for (int i = 0; i < 7; i++)
    {
        // printf("The value of element %d is %d\n" , i , arr[i]);
        printf("%d " , arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,67};
    printf("Before reversing the array\n");
    printarr(arr);
    arrrev(arr);
    printf("\nAfter reversing the array\n");
    printarr(arr);
    return 0;
}