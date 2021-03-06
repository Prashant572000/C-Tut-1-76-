//                                  Exercise 11 Soln
#include <stdio.h>
int ispalindrome(int num) {
    int reversed=0;         // 7 , 77 ,
    int originalNumber=num;
    //  Reverse the number  
    while (num !=0)
    {
        reversed = reversed*10 + num%10;
        num=num/10;     // 87
    }
    printf("The reverse number is %d\n" ,reversed );
    // 877
    if (originalNumber== reversed) {
        return 1;
    }
    else {
    return 0;
    }
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
    printf("The number is not palindrome");
}
    return 0;
}