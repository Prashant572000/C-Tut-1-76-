//                               For Loop

/*

For loop - used to iterate stmt or part of program several times.

Synrax -                  for (Expression 1; ,Expression 2; ,Expression 3;) {          int i;
                            //   Code to be run                                         for (i=0 ;i<5 ; i++) {
                         }                                                              printf("%d\n" , i);
                                                                                          }

Properties- Expression 1 - represents initilization of loop var , can initialize more than 1 var , Expression 1 is optional
Properties- Expression 2 - condition expression , can initialize more than condition , Expression 1 is optional
Properties- Expression 3 - for update lop var, update more than 1 val at time 
*/

#include <stdio.h>
void main()
{
    // for (int i = 0; i <= 15; i++)
    // {
    //     printf("%d ", i);
    // }
    for (int i =0,j= 3; j<10, i <= 15;)
    {
        printf("%d  %d \n", i , j);
        i++;j++;
    }
}