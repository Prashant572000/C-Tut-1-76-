//                                              Union in C

/*
Union is user defined data type  (very similar to structures)

Union is used to better memory management in C programs.

diff b/w Structure & Union

Structure - Each member has its own storage location
   Union  - Each member uses single shared memory locaion.

Note- Single shared memory location gives to = which has largest data member  
*/

#include <stdio.h>
#include <string.h>
union student // union says if we have 4 members , so 1 member should active at a time
{
    int id;
    int marks;
    char fav_char;
    char name[33];
};
// out of 4 member, which member has large size , it will share memory to others(3 members)
void main()
{
    union student s1;
    s1.id = 1;
    s1.fav_char = 'u';
    s1.marks = 53;
    strcpy(s1.name, "Harry");                          // Only last val will access 
    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);
 }