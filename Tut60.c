//                                      Predefined Macros, Other Pre-processor Directives

/*

#undef   - undefines a macro or preprocessor var
#ifdef   - return T if macro or preprocessor var defined
#ifndef  - return T if macro or preprocessor var not defined
#if      - 

Preprocessor micros - __DATE__ 'Jan-3-2020' , __TIME__ '10:20:45' , __FILE__ current file name , __Line__ current line no.,  
*/

#include <stdio.h>
int main()
{
    // printf("File name is %s\n" , __FILE__);                 // Current file name as str
    // printf("Today's Date is %s\n" , __DATE__);              // Current Date 
    // printf("Time now is %s\n" , __TIME__);                  // Current Time 
    printf("Line number is %d\n" , __LINE__);                  // Current line no. of this stmt
    printf("ANSI: %d\n" , __STDC__);                           // Compiling our program in ANSI standard
    return 0;
}