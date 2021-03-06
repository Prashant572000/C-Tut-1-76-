//                            Functions in C

/* 
About Function - used to divide large program into pieces, can be called multiple times to
 provide reusability, modularity program

Advantage - avoid rewriting same logic, divide our work, easily debug(find bugs in code) program

Function decleared to tell compiler about its existence

Types C fn- Library fn(fn included in c header files ex - printf(), User defined fn(created by user) 
*/

// #include <stdio.h>
// // int sum(int a , int b);                // Function declaration
// int sum(int a, int b)                                               // Function With argu & with return val
// {
//     return a + b;
// }
// void printstar(int n)
// {                                                                    // Function With argu & without return val
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }
// }
// void number()
// {                                                                       // Function wihout argu & without return val
//     int x = 2, y = 3, z;
//     z = x * y;
//     printf("The multi is %d", z);
// }
// int takenum()                                                           // Function Without argu & with return val
// {
//     int i;
//     printf("Enter a number");
//     scanf("%d", &i);
//     return i;
// }
// int main()
// {
//     int c;
//     // number();
//     printstar(12);
//     // c = sum(45, 5);
//     // printf("The sum is %d\n", c);
//     // c = takenum();
//     // printf("The number entered is %d", c);
//     return 0;
// }

#include <stdio.h>
void prash1() {                         // With argu & without return val
        int a=20 , b=10 , c;
    printf("The sum is %d" , a+b);
    }
int prash2() {                          // without argu, with return val
        int x,y,z;
        printf("Enter val 1 \n");
        scanf("%d" , &x);
        printf("Enter val 2 \n");
        scanf("%d" , &y);
        z=x+y;
        return z;
    }
int prash3(int a , int b) {                 // with argu, without return val
    int c;
    c=a*b;
    printf("The multiplication is %d" , c);
    }
int prash4(int a , int b) {
    return a-b;
}
int main()
{
    printf("The sub is %d" , prash4(20,10));
    //  prash1();
    // prash3(4,5);
    // printf("The sum is %d\n" ,prash2());
    return 0;
}