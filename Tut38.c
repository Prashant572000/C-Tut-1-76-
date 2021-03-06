//                                            Typedef in C

/*
typedef is keyword in c lang, to give an alternative name on existing data type

Syntax- typedef <previous_name> <alias_name>
Ex    - typedef  int                integer;
*/

#include <stdio.h>
int sum=45;
typedef struct student
{
    int id;
    int marks;
    char fav_char;
} std;

int main()
{
    // int *a, b;
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = c;
    typedef unsigned long ul;                   // previous_name- unsigned long , alias_name - ul
    typedef int interger;
    ul l1, l2, l3;
    interger n=12;
    printf("The value of n is %d" , n);
    struct student s1,s2;

    // std s1,s2;
    s1.id=79;
    s2.id=39;
    //  printf("The value of s1's is %d\n" , s1.id);
    //  printf("The value of s2's is %d\n" , s2.id);
    return 0;
}