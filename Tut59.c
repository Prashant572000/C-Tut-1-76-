//                              #define & #include

/*
#include - used to coopy 1 file data to another file

<stdio.h>  - angle brackets fetch  files from standard system directories
"myfile.h" - quotation marks fetch files from current directory


#define - used to  define preprocessor var   EX- #define PI 3.14.
also used to globally replace word with no. Ex- #define PI 3.14, in whole program where we use PI it will replace pi with 3.14 

we can also create macros using #define , macros like fns, and they r faster also than fn
Ex -    #define PI 3.14
        #define Square(x) x*x
        int r=4;
        area = PI   * Square (r)  where r is var  
        area = 3.14 * r*r           (Compiler see like this) This resolve in preprocessing time 
*/

#include <stdio.h>
// #include "Tut38.c"
#define PI 3.14
#define SQUARE(r) r*r                   // This is macro
int main()
{
    float var = PI;
    int r=4;
    printf("The val of PI is %.2f\n", var);
    // printf("The value of sum is %d\n", sum);
    printf("The area of this circle is %.3f\n", PI * SQUARE(r));
    return 0;
}