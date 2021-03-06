#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter no. of char in your emp id \n", i + 1);
        scanf("%d", &chars);
        getchar();
        printf("Enter value of a\n"); // it will not i/p a beacuse we press enter(which accept by a var) so we use
        scanf("%c", &a);              //  getchar method to avoid this error
        getchar();
        printf("Enter value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your emp id \n");
        scanf("%s", ptr);
        printf("Your emp id is %s \n", ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}