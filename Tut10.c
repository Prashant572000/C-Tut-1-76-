//                                       If - Else (Control Statements)
// It is used to perform based on some conditions , Types - If , If else , If - else if , Nested if

#include <stdio.h>
int main()
{
    // int age;
    // printf("Enter your age\n");
    // scanf("%d" , &age);
    // printf("You have entered %d as your age\n" , age);
    // if (age >=18)   
    // {
    //     printf("You can vote");
    // }
    // else if(age>10) {
    //     printf("You are b/w 10 to 18 and y can vote for kids");
    // }
    
    // else {
    //     printf("You can't vote");
    // }
    int n;
    printf("Enter 0 or 1\n");
    scanf("%d", &n);
    if (n==1)
    {
        printf("Number 1 is entered \n" );
    }
        else
    {
    if (n==0)
    {
        printf("Number 0 is entered \n");
        }
        else {
        printf("Wrong input");
    }
    }
    return 0;
}
