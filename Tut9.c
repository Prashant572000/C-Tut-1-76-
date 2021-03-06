//                    Format Specifiers , Constants , Escape Sequences 

// Escape Sequences - \t, \b (Insert backspace) , \n( for new line) , .
// Format Specifiers - is a method to tell compiler that what type of data is in a var(str , float), Ex-int a=4; , float b=3.45 %c , %d used in print f called f s
// Constant is a var or value that cant we change

#include <stdio.h>
#define PI 3.14                     // 2nd method to define const (preprocessor)
int main()
{
    int a = 8;
   const float b=7.333;
    //  b=5.666, PI=4.767;                       // Can't do this since b is constant (because const can't change)
    // printf("%f\n",PI); 
    // printf("To print  backslash \\ (Use double backslash) \\n %f\n" , PI);
    // printf("tab character \t my backslash is %f\n" , PI);
    // printf("The val of a is %d and value of b is %.4f\n" , a,b);
    // printf("%-24.6f this\n",b);                  // 24 char ki space mai 6 decimal accuracy ke sath b no. print ho
       printf("Backslash a is for sound \a%f" , PI);
    return 0;
}
