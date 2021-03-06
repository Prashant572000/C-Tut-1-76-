//                                        Variables and Data types in C

/*                                  Flow of c Program
What is var - A name is given to memory location, Syntax- int a; or int a=10;
Basic Data Type: int, char,float , double

Derived Data Type  - array , pointer , structure, union 
Derived Data types - Jinko bnane ke liye basic data types ki need hoti h 

Enumeration data type- enum 
Void                  - means in c empty (Nothing)
*/

#include <stdio.h>
int main()
{
    int a = 12.221;
    float b = 12.221;
    printf("Output = %d\n", a);
    printf("Output = %.4f\n", b);
printf("Integer takes %lu bytes\n", sizeof(int)); //lu used for unsigned long, & this stmt used for tell max size of specified data type
    printf("char takes %lu bytes\n", sizeof(char));
    printf("float takes %lu bytes\n", sizeof(float));
    return 0;
}