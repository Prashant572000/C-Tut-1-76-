//                                  Exercise 8 Employee Manager

/*
ABC Pvt Ltd. manages emp records of other companies
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int eid1, eid2, eid3;
    int *ptr;
    printf("Enter no of character of eid Employee 1 \n");
    scanf("%d", &eid1);
    // Use of realloc
    printf("Change the size of the eid1 you want \n ");
    scanf("%d", &eid1);
    ptr = (int *)realloc(ptr, eid1 * sizeof(int)); // Dynamically change size on run time
    printf("The new eid's char is %d", eid1);
    return 0;
}