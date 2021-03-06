#include <stdio.h>
int fib_recursive(int n) {
    if (n==1 || n==2) {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    return 0;
}

int fib_iteraive(int n) {
    int a=0;
    int b=1;

    for (int i = 0; i < n-1; i++)
    {
        b=a+b;   // 1 for iteration 1
        a=b-a;   // 1 for iteration 2
    }
  return a;
}
int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d" , &number);
    printf("The value of fibonacci number at position no. %d using Iterative %d\n" , number, fib_iteraive(number));
    printf("The value of fibonacci number at position no. %d using recursive %d\n"  ,number,  fib_recursive(number));
    return 0;
}