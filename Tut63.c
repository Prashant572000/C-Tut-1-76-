//                                  Exercise 11 Check Palindrome In C lang.
#include <stdio.h>
int ispalindrome(int num) {
    return 1;
}
int main()
{
    int number;
printf("Enter no. to check whether it is palindrome or not\n");
scanf("%d" , &number);
// Your task is to implement this fn
if(ispalindrome(number)) {
    printf("The number is palindrome");
}
else {
    printf("The number is not  palindrome");
}
    return 0;
}