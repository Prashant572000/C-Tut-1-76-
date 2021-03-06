//                               Exercise  4  - Print * pattern


//   Take i/p from user & ask user to choose 0 (* Triangular pattern) 1 for (Reverse Triangular pattern)

/*
*
**
***
****
*****           --> Triangular Star pattern

*****
****
***
**
*               --> Reverse Triangular Star pattern


*/


//                               Solved By Me
#include <stdio.h>
int main()
{
    int pattern;
    printf("0 - Triangular pattern \n1- Reverse Triangular pattern \nEnter 0 or 1 \n");
    scanf("%d" , &pattern);
    while (1)
    {    
    int n;
    printf("Enter the no. which you want to print star pattern\n");
    scanf("%d" , &n);
    if (pattern==0)
    {

    for (int i = 0; i <= n; i++)                  // for row
    {
        for (int j = 0; j < i; j++)               // for col
        {
            printf("*");
        }
        printf(" \n");
    }
        break;
    }
    else if (pattern==1)
    {
        for (int i = 1; i <=n; i++)                 // for row
    {
        for (int j = 0; j <=n-i; j++)               // for col
        {
            printf("*");
        }
        printf(" \n");
    }
        break;
    }
    else
    {
            printf("Try again \n");
            
    }   
    return 0;
}
}