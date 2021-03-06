//                           Exercise 1

#include <stdio.h>
void main()
{
    int n1;
    printf("Enter the number to print table\n");
    scanf("%d", &n1);
    printf("Multiplication table of %d is as follows: \n", n1);
    // printf("%d * 1 = %d\n" , n1 , n1*1);                             // 1st method
    // printf("%d * 2 = %d\n" , n1 , n1*2);
    // printf("%d * 3 = %d\n" , n1 , n1*3);
    // printf("%d * 4 = %d\n" , n1 , n1*4);
    // printf("%d * 5 = %d\n" , n1 , n1*5);
    // printf("%d * 6 = %d\n" , n1 , n1*6);

    for (int i = 1; i <= 10; i++)                                    // 2nd method
    {
        printf("%d*%d=%d\n", n1, i, n1 * i);
    }

}