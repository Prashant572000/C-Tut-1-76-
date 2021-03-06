//                                      Command Line Arguments in C
/*
Sometimes we need to give commands to Terminal , so we use CLA 
CLA used to supply parameters to program , These argu passsed to main() method
argc - No of arguments , it is integer (Default val 1)
argv - inside argv cla hote h (just like array)

EX - we give commdand to terminal - .\Prac4.exe Prashant Sir

O/P - The val of argc is 3
0 argu - .\Prac4.exe 
1 argu -  Prashant 
2 argu -  Sir 
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The val of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The argument no. %d has val of %s\n", i, argv[i]);
    }
    return 0;
}
