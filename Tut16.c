//                        Break and Continue

//     Break -    used for exit from loop
//     Continue - This stmt forget all lines after continue , and go to next iteration 
#include <stdio.h>
int main()
{
    int i, age;
    for (i=0;i<10;i++)
    {
        printf("%d\n Enter Your age\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
        if (age>10) {
            printf("The loop will continue");
            continue;
        }
        printf("We haven't come across any continue statement");
    }
    return 0;
    }
    