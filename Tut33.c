//                                    Tut Solution
#include <stdio.h>
void triangularstr(int n) {
    for (int i = 0; i <= n; i++)                  // for row
    {
        for (int j = 0; j < i; j++)               // for col
        {
            printf("*");
        }
        printf(" \n");
    }    
}
void revtriangularstr(int n) {
    // for (int i = 1; i <=n; i++)                     // for row       Logic 1
    // {
    //     for (int j = 0; j <=n-i; j++)               // for col
    for (int i = 0; i <=n; i++)                     // for row          Logic 2
    {
        for (int j = 0; j <=n-i-1; j++)               // for col
        {
            printf("*");
        }
        printf(" \n");
    }    
}
void main()
{
    int pattern , n;
    printf("0 - Triangular pattern \n1- Reverse Triangular pattern \nEnter 0 or 1 \n", pattern);
    scanf("%d" , &pattern);
    printf("Enter the no. of rows you want \n");
    scanf("%d", &n);
    switch (pattern)
    {
    case 0:
        triangularstr(n);
        break;
    case 1:
        revtriangularstr(n);
        break;
    default:
    printf("You entered wrong choice");
        break;
    }
}