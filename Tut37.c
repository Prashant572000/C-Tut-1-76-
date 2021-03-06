//                                  Structure in C

/*

Structures r user defined data type in C

Why Structure - to create user defined data types in C.
Structure allow us to combine different types together Ex - (Structure -> combo of (int , float ,char , char arr))

Used to create Complex data type which contains diverse information (different int float char)

They very similar to arr but structure can store any data of any type, which is practically more useful.

Ex- we want to store info of 1000 emp working on company (Name ,address,  email , empid)
clearly we need user defined data type which contain this info. 

Define a structure - 

struct [struc_name]
{                                                                          struct student {
    // data_type var 1                   // Id                             int id;
    // data_type var 2                   // Marks                          int marks;
    // data_type var 3                   // fav char                       char fav-char;
}                                                                           } s1,s2,s3;          Declaring var - s1,s2,s3 Mthod 1
[struc_variables];                                                      New Data type Name - Student(User defined dt)

struct student s1,s2,s3;   Declaring var Method 2

Initialize struct   - 2 Ways

struct student s1
s1.id=23;                                       Method 1                                                           
s1.marks=34.35;                                                struct student s1={23 , 34.35};         Method 2

Just like we access arr elements using subscript var (Ex- arr[0], arr[1]) , struct access using dot[.] operator Ex- student.id=45;

(.) also called structure member operator

To access member(id , marks) of struct , Ex- (s1.id )use "Structure name" [s1] & "member name" [id , marks]
*/

#include <stdio.h>
#include <string.h>
struct student                                      // Line 44 - 50 , User defined data type  dt name - Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
// } harry, ravi, shu;                                             // Method 2 to declare var
// struct student harry, ravi, shu;                 // struct student - data type , var name - harry , ravi , shu         (GLOBAL VAR)
int main()
{
    // struct student harry, ravi, shu;            // struct student - data type , var name - harry , ravi , shu  (LOCAL VAR) Mehotd 1
    // harry.id = 1;
    // ravi.id = 2;
    // shu.id = 3;
    // harry.marks = 66;
    // ravi.marks = 466;
    // shu.marks = 49;
    // harry.fav_char = 'p';
    // ravi.fav_char = 'y';
    // shu.fav_char = 's';
    struct student harry = {1, 67, 'p'};

    strcpy(harry.name, "Harry Potter Student of the year");
    printf("Harry got %d marks \n", harry.marks);
    printf("Harry's name is  %s\n  ", harry.name);
    return 0;
}

// we create var in main fn or any fn  is - Local var