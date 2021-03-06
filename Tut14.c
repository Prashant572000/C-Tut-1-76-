//                                While Loop

/*      while - executes until condition is True

                                                       int i=0;
Syntax- while(condition){                           while (i<30) {
            //  Code to be executed                      print("%d",i);
           }                                             i=i+1;
                                                        } 
*/

#include <stdio.h>

void main()
{
    int i = 0;
    while (i <= 55)
    {
        printf("%d\n", i);
        i += 1;
    }
// int main()
// {

//     int u = 0;
//     while (u < 12)
//     {
//         printf("%d\n", u);
//         u++;
//     }
}