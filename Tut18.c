//                                   Typecasting

#include <stdio.h>

//             Typecasting Syntax
//              (type) value;
int main()
{
    // int   a=3;
    // float b=54/5;
    //         printf("The value of b is %d\n" , b);        // convert one data type to another data type is type-casting
    //        printf("The value of b is %d\n" , (int)b);
    //        printf("The value of a is %f\n" , (float)a);
    // short a=10;
    // int b;
    // b=a;
    // printf("%f\n" ,(float)a);
    // printf("%f\n" ,(float)b);
    int a;
    float b;
    char c;
    printf("Enter val of a \n");
    scanf("%d" , &a);
    printf("A is %f" , (float)a);
    printf("Enter val of b \n");
    scanf("%f" , &b);
    printf("B is %d" , (int)b);
    getchar();
    printf("Enter any char \n");
    scanf("%c" , &c);
    printf("C is %d" , (int)a);
    return 0;
}
