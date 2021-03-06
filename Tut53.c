//                                          NULL Pointer (Address of NULL pointer is 0)

/*
NULL pointer which has reserved val which indicates this ptr doesn't point to any obj (Ex- int *ptr=NULL;)
If we set ptr to NULL, it guarrantes that this ptr doesn't point to any var.
Don't dereferencing Null ptr, and confirm before dereference any ptr that is it NULL or Not

int x=1;
int *p=NULL;            // NULL ptr         Can't be dereference
p=&x;                   // NULL ptr         Can   be dereference    (Now holds add of x)

                    NULL Vs Void Pointer
NULL Pointer is a value , Void Pointer is a type
*/ 

#include <stdio.h>
int main()
{
    int a=34;
    // int *ptr=&a;
    // int *ptr=NULL;                   // in Most compilers the address of NULL ptr is 0
    int *ptr;
    int c=34;
    // if (ptr != NULL) {
    // printf("The address of a is %d\n" , ptr);
    // }
    // else
    // {
    //     printf("The Pointer is null ptr and can't be dereferenced\n");
    // }
    
    printf("The value  of a is %d" , *ptr);
    return 0;
}


