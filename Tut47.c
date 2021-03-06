//                                      DMA , Malloc() Calloc() Realloc() Free()

/*
For allocate memory in Heap , there r 4 task
Malloc - Syntax - ptr= (int *) malloc (size in bytes); 
calloc - Syntax - ptr= (int *) malloc (n ,size in bytes);
realloc -Syntax - ptr= (int *) malloc (ptr , new size in bytes);
free
*/

#include <stdio.h>
#include <stdlib.h> // inside the stdlib , malloc , calloc , realloc are defined
void main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n ");
    scanf("%d" , &n);
    ptr = (int *)malloc(n * sizeof(int));               // malloc intialize garbage val in memory location (default)
    for (int i = 0; i <n; i++)                           // n size of dynamic arr created (LINE 20 )
    {
        printf("Enter the val of %d of this array\n" ,i );
        scanf("%d" , &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The val of %d of this array %d\n" ,i,ptr[i] );
    }

    // Use of calloc
    // printf("Enter the size of the array you want to create\n ");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n, sizeof(int));                        // calloc intialize 0 in memory location (Default)
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the val of %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The val of %d of this array %d\n", i, ptr[i]);
    // }

    // Use of realloc
    // printf("Enter the size of the array you want to create\n ");
    // scanf("%d", &n);
    // ptr = (int *)realloc(ptr, n * sizeof(int));                             // Dynamically change size on run time
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the val of %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The New val of %d of this array %d\n", i, ptr[i]);
    // }
    free(ptr);
}