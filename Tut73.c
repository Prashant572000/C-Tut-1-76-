//                                  Callback fns using Function Pointers

/*
We have ptrs to fn as well
Fn ptr point to code not data, fn ptr useful to implement callback fns
we dont allocate/deallocate memory using fn ptrs

Callback fns - Fn ptr used to pass fn to a fn Ex- fn1() some code , fn2() some code , fn1 call fn2 , to give argu fn2 to fn1 , give fnptr of fn2 to fn1 

This passed fn can be called again (hence called callback fn)
*/

#include <stdio.h>
int sum(int a , int b) {
    return a+b;
}
void greethelloexe(int (*fptr)(int , int)) {                // create fn ptr - fptr
    printf("hellow ptr\n");                         // 1st print helo world , 
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}
void greetGoodMoringexe(int (*fptr)(int , int)) {
    printf("Good Morning user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}
int main()
{
    int (*ptr)(int , int);                      //This is a fn ptr of this fn which takes 2 int and return int
    ptr=sum;            // same as ptr=&sum; , because it is already address, inside fn there r set of instruction , so instructon is addres
    // greetGoodMoringexe(ptr);
    greethelloexe(ptr);
    return 0;
}