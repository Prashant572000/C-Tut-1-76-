//                               Switch Statement

// Rules for switch statement, 1- switch expression - int or char , case val must be int/ char , case must come inside switch, break is not must

#include <stdio.h>
int main()
{
    // int age;
    // printf("Enter your age \n");
    // scanf("%d", &age);
    // switch (age)
    // {
    // case 3:
    //     printf("The age is 3");
    //     break;
    // case 13:
    //     printf("The age is 13");
    //     break;
    // case 23:
    //     printf("The age is 23");
    //     break;
    // default:
    //     printf("Age is not 3,13,23");
    //     break;
    // }
    int a , num;
    printf("Enter the number 1,2,3\n");
    scanf("%d" , &a);
    printf("Enter marks \n");
    scanf("%d" , &num);
    switch (a)
    {
    case 1:
        printf("You entered 1\n");
        switch (num)
        {
        case 45:
            printf("Your num is 45\n");
            break;
        default:
            printf("Your num is not 45\n");
        }
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");
        break;
    default:
    printf("You entered neither 1,2,3\n");
        break;
    }
    return 0;
}