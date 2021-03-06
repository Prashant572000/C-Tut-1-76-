//                                  Exercise - 3
#include <stdio.h>
int fibrecursive(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num == 1 || num == 2) {
        return num-1;
    }
    else {
        return fibrecursive(num - 1) + fibrecursive(num - 2); }
}
int fibiterative(int number) {
    int a=0;
    int b=1;
    for (int i = 0; i < number-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}
int main()
{
    int num;
    printf("Enter the number to print the fibonaci of \n");
    scanf("%d", &num);
    printf("The fibonacci of %d is %d\n", num, fibiterative(num));
    printf("The fibonacci of %d is %d\n", num, fibrecursive(num));
    return 0;
}