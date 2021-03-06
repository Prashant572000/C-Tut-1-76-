#include <stdio.h>
#include <string.h>
typedef struct driver {
    char name[34];
    char dlno[44];
    char route[24];
    int kms;
}dr;

int main()
{
    dr d1,d2,d3;
    printf("Enter details of driver no.  1\n\n");
    printf("Enter  the name of  1st driver\n");
    scanf("%s" , &d1.name);
    printf("Enter  the dlno of  1st driver\n");
    scanf("%s" , &d1.dlno);
    printf("Enter the route of  1st driver\n");
    scanf("%s" , &d1.route);
    printf("Enter  the Km of  1st driver\n");
    scanf("%d" , &d1.kms);
    
    printf("\nEnter details of driver no.  2\n");

    printf("Enter  the name of  2nd driver\n");
    scanf("%s" , &d2.name);
    printf("Enter  the dlno of  2nd driver\n");
    scanf("%s" , &d2.dlno);
    printf("Enter the route of  2nd driver\n");
    scanf("%s" , &d2.route);
    printf("Enter  the Km of  2nd driver\n");
    scanf("%d" , &d2.kms);
    
    printf("\n Enter details of driver no.  3\n");
    printf("Enter  the name of  3rd driver\n");
    scanf("%s" , &d3.name);
    printf("Enter  the dlno of  3rd driver\n");
    scanf("%s" , &d3.dlno);
    printf("Enter the route of  3rd driver\n");
    scanf("%s" , &d3.route);
    printf("Enter  the Km of  3rd driver\n");
    scanf("%d" , &d3.kms);


    printf("\n *****Printing Information of these drivers****** \n\n");

    printf("For Driver No 1: \n\nName is %s \n" , d1.name);
    printf("Dl no. is %s \n" , d1.dlno);
    printf("Route is %s\n" , d1.route);
    printf("Kms is %d\n" , d1.kms);

    printf("For Driver No 2: \n\nName is %s \n" , d2.name);
    printf("Dl no. is %s \n" , d2.dlno);
    printf("Route is %s\n" , d2.route);
    printf("Kms is %d\n" , d2.kms);

    printf("For Driver No 3: \n\nName is %s \n" , d3.name);
    printf("Dl no. is %s \n" , d3.dlno);
    printf("Route is %s\n" , d3.route);
    printf("Kms is %d\n" , d3.kms);
    return 0;
}