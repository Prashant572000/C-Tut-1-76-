//                                  Exercise 10 Solution

#include <stdio.h>
void main()
{
    int m, n , sum=0;
    int a[3][4], b[4][2] , result[3][2];
    printf("Enter your first matrix\n");
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
        {
    // printf("Enter the %d %d element of your first matrix\n", i ,j);
    scanf("%d" , &a[i][j]);
    // printf("\t");
    }
    // printf("\n");
    }
    printf("Enter your Second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
    // printf("Enter the %d %d element of your first matrix\n", i ,j);
    scanf("%d" , &b[i][j]);
    // printf("\t");
    }
    // printf("\n");
        }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
    }
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          printf("%d \t" , result[i][j]);
    }
    printf("\n");
        }
    
}