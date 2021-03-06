//                      Call By Value(Only copy value in fn) Vs Call By Reference (copy address  in fn)
/*
when we call fn by val, it means that we r passing values of the arguments which r copied into formal parameters of fn.

Actual parameters - when fn is called, the val that passed in fn is called (arguments)Actual parameters
Formal parameters - it is local var, which r assigned val from argu when fn is called.   

Call by val       - when call fn by val, means we pass copy of val as argument into formal parameters of fn. and actual val remains unchange, only parameters inside fn changes. 
Call by reference - when call fn by ref, fn copies address of argument into formal parameters. now we can change actual value, using formal parameters

Call by reference Ex - 
void swap(int *x , int *y) {            // x and y formal parameters
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main() {
    int a=34, b=74;
    printf("%d and %d" , a , b);        // a=34, b=74;
    swap(&a,&b);                        // a and b actual parameters
    printf("%d and %d" , a , b);        // a=74, b=34;
}
*/

#include <stdio.h>
void changevalue(int *address)
{
    *address = 342;
}
int main()
{
    int a = 34, b = 56;
    printf("The value of a is %d\n", a);
    changevalue(&a);
    printf("The value of a is %d\n", a);
    return 0;
}

// Quiz - Given 2 no. , 1st add them , 2nd Substract then assigned to a & b using call by reference

// #include <stdio.h>
// void quiz(int *add , int *sub) {
//     int addition,subtraction;
//     addition   = *add+*sub;
//     subtraction=*add-*sub;
//     *add=addition;
//     *sub=subtraction;
// }
// int main()
// {
//    int a=4 ,b=3;
//    printf("The sum is %d\n",  a+b);
//    printf("The subtraction of is %d\n", a-b);
//    printf("The val of a is %d\n" , a);
//    printf("The val of b is %d\n" , b);
//    quiz(&a,&b);
//    printf("The new values of a and b is %d , %d" , a,b);
//    return 0;
// }
