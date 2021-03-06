//                              Basic structue of C
#include <stdio.h>
int main()
{
    int a ,b;                                        // This is var decleration
    printf("Enter number a \n");
    scanf("%d" , &a);                                //  &a is address of a where value stored which will user i/p
    printf("Enter number b \n");
    scanf("%d" , &b);

    printf("The sum is %d\n" , a+b);
     return 0;                                      // retur 0 means our program successfully executed
}

// when we run program it create default file a.exe , but you can also create diffrent file name through below command

//  Command - gcc Tut4.c -o prash.exe

// ; is used to terminate 1 statement
