//                                                    Array

#include <stdio.h>
int main()
{
    // int marks[5]={1,2,3,4};
    int marks[2][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8}};
    for (int i = 0; i < 4; i++)
    {
       printf("Enter the value of %d element of the array\n" , i);
       scanf("%d", &marks[i]);
     }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("The value of %d , %d element of the array is %d\n" , i,j  , marks[i][j]);
    //         // printf("%d ", marks[i][j]); // To print arr in form of matrix
    //     }
    //     printf("\n");
    // }
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; i++)
        {
            printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
        }
    }
    // marks[0]=34;
    // printf("Marks of student 1 is %d\n" , marks[0]);
    // marks[0]=434;
    // marks[1]=44;
    // marks[2]=13;
    // marks[3]=56;
    // printf("Marks of student 1 is %d\n" , marks[0]);
    return 0;
}