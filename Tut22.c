//                                  Exercise 2

/*

kms    to miles =0.621
inches to foot  =0.0833
cms    to inches=0.394
pound  to kgs   =0.454
inches to meters=0.0254
*/

#include <stdio.h>
int main()
{
    int first ; 
    float second; 
    int type;
    float result;
    float kmstomiles = 0.621;
    float inchestofoot = 0.0833;
    float cmstoinches = 0.394;
    float poundtokgs = 0.454;
    float inchestometers = 0.0254;
    printf("Enter which type of conversion you want : \n 1. kms    to miles \n 2. inches to foot \n 3. cms    to inches \n 4. pound  to kgs \n 5. inches to meters\n  ");
    scanf("%d" , &type);
    switch (type)
    {
    case 1:
        printf("Enter the 1st value : ");
        scanf("%d" , &first);
        second = first*kmstomiles;
        printf("%d kms is equal to %.4f miles : " , first , second);
        break;
    case 2:
        printf("Enter the 1st value : ");
        scanf("%d" , &first);
        second = first*inchestofoot;
        printf("%d inches is equal to %.4f foot : " , first , second);
        break;
    case 3:
        printf("Enter the 1st value : ");
        scanf("%d" , &first);
        second = first*cmstoinches;
        printf("%d cm is equal to %.4f inches : " , first , second);
        break;
    case 4:
        printf("Enter the 1st value : ");
        scanf("%d" , &first);
        second = first*poundtokgs;
        printf("%d pound is equal to %.4f kgs : " , first , second);
        break;
    case 5:
        printf("Enter the 1st value : ");
        scanf("%d" , &first);
        second = first*inchestometers;
        printf("%d inches is equal to %.4f meters : " , first , second);
        break;
    
    default:
    printf("Please check your i/ps");
        break;
    }
    return 0;
}
