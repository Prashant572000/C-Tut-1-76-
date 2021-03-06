//                                Recursion
/*
Recursive fn or Recursion is process when any fn calles itself to work smaller problems, Any fn calls itself is called recursion

Why Recursion - Any problem solve recursively, also solved iteratively., some problems solved best suited using recursion. Ex- Tower of Hanoi , Fibonacci series, Factorial etc. 

case which fn doesn't recur is called base case Ex- 0, 1. 
Instance where fn keeps calling itself to perform subtask called recursive case,Ex- fac(3)= 3*2*1, - (3,2) recursive case (0,1) Base case 
*/
#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}