#include <stdio.h>
int trian(int num) {
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c" , '*');
        }
        printf("\n");
    }
    
    return 0;
}
int revtrian(int num) {
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num-i; j++)
        {
            printf("%c" , '*');
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int number , n;
    printf("Enter Type For print star pattern \n0 for Triangular pattern \n1 for Reverse Triangular pattern \n");
    scanf("%d",&number);
    printf("Enter no. for print star patttern : ");
    scanf("%d", &n);
    if (number==0)
    {
        trian(n);
    }
    else {
        revtrian(n);
    }
    return 0;
}
// #include <stdio.h>
// // int sum(int a , int b) {                            // fn with argu & ret value
// //     return a+b;
// // }
// void prstar(int n) // fn with argu & without ret value
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }
// }
// int takenum() // fn without argu & with ret value
// {
//     int i;
//     printf("Enter no. \n");
//     scanf("%d", &i);
//     return i;
// }
// void sum()
// {
//     int a, b;
//     printf("Enter no. 1 : ");
//     scanf("%d", &a);
//     printf("Enter no. 2 : ");
//     scanf("%d", &b);
//     printf("The mul is %d", a * b);
// }
// int main()
// {
//     int a = 9;
//     int b = 87, i;
//     sum();
// printf("Your entered no is %d", takenum(i));
// printf("The val of C is %d" , sum(4,6));
// prstar(5);
// int factorial(int n) {
//     if (n==1 || n==0)
//     {
//         return 1;
//     }
//     else {
//     return n*factorial(n-1);
//     }
// }
// #include <stdio.h>
// int main() {
// int marks[] = {34,23,45,32};          // initialization & declaration of arr            1d array
// int marks[2][4];
// // int marks[2][4] = {{34,23,45,32}
// //                 , {3,2,3,4}};          // initialization & declaration of arr            1d array
// for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j < 4; j++)
//     {
//         printf("Enter value of %d %d element of array is\n" , i , j);
//         scanf("%d" , &marks[i][j]);
//     }
// int martics[3][3];
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         printf("Enter no. %d %d element of the array : \n" , i,j);
//         scanf("%d" , &martics[i][j]);
//     }
//     printf("\n");
// }
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         printf("%d " , martics[i][j]);
//     }
//     printf("\n");
// }

// }
// for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j < 4; j++)
//     {
//         printf("%d  " , marks[i][j]);
//     }
//     printf("\n");
// }
// for (int i = 0; i < 4; i++)                  // Take i/p from user & store in marks array
// {
//     printf("Enter the value of %d element of array\n" , i);
//     scanf("%d" ,  &marks[i]);
// }
// for (int i = 0; i < 4; i++)             // print val of marks array using loop
// {
//     printf("The value of %d element of array is %d\n" , i , marks[i]);
// }
// return 0;
// }

// marks[0]=45;
// printf("Marks of student 1 is %d\n" , marks[0]);
// marks[0]=455;
// printf("Marks of student 1 is %d\n" , marks[0]);

// #include <stdio.h>
// int main()
// {
//     int marks[10];
//     int sum = 0, average;
//     for (int i = 1; i < 11; i++)
//     {
//         printf("Marks of %d student : \n", i);
//         scanf("%d", &marks[i]);
//         sum += marks[i];
//     }
//     average = sum / 10;
//     printf("The average marks of student is %d ", average);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a=5;
//     int *p=&a;
//     printf("The address of var a is %d\n", &a);
//     printf("The address of var a is %d\n", p);
//     printf("The value of var a is %d\n",  a);
//     printf("The value of var a is %d\n", *p);
//     return 0;
// }