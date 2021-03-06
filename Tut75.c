//                                      Memory Leak in C

/*
When we dynamically allocate memory in heap, after we have to free momory, if we forget to free memory, it is called memory leak

CAUSES -

Memory leak is caused when we dont use DM properly.
when we keep allocate memory in heap without free.
The situation is create memory block in memory & forget to delete.
To Avoid memory leak, use free() fn
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int *i2;
    while (i < 455)
    {
        printf("Welcome to Agra");
        i2 = malloc(3444 * sizeof(int));    // i2 ptr ko point kra do heap mai memory block se jo ki 3444*sizeof(int) jitna bda h
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);                           // without free memory , memory leak situation will increase
    }

    return 0;
}

// Now open task manager check Tut75.c and after print Welcome to agra, Hit enter and hold then memory increase
// after hit enter