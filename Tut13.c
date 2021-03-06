//                               Do While Loop

/*      Do while loop - executes at least once 

                                                     int i=0;
Syntax- do {                                         do {
            //  Code to be executed                      i=i+1
           }while(Condition);                          print("%d",i);
                                                        } while(i<10);
*/

#include <stdio.h>
int main()
{
    int num, index = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index += 1;
    } while (index < num);

    // int n, sum = 0;
    // do
    // {
    //     printf("Enter Number :\n");
    //     scanf("%d", &n);
    //     sum += n;
    // } while (n != 0);
    // printf("Sum is =%d\n", sum);
    return 0;
}
