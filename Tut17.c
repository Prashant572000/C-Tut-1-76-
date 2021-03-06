//                               Goto statement

/*  GoTo stmt- Also called jumped stmt , used to transfer program control to predefined label
    GoTo stmt- It is only used when we need to break multiple loops using single stmt
*/

#include <stdio.h>
int main()
{
label:
    printf("We r inside label");
    goto end;
    printf("  Hello world\n");
    goto label;
end:
    printf(" We are at end");
    return 0;
}

// Ex of use goto stmt - used to exit nested loops

// #include <stdio.h>
// int main()
// {
//     int num;
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", i);
//         for (int j = 0; j < 8; j++)
//         {
//             printf("Enter a number . enter 0 to exist");
//             scanf("%d", &num);
//             if (num >= 10)
//             {
//                 goto end;
//             }
//     }
//     }
// end:
//     return 0;
// }