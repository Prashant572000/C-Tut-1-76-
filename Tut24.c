/*
kms    to miles
inches to foot
cms    to inches
pound  to kgs
inches to meters
*/

#include <stdio.h>
int main()
{
    char input;
    float kmToMiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the I/p Char , q To Quit \n 1.  kms to miles\n 2. inches to foot\n 3. cms to inches\n 4. pound to kgs\n 5. inches to meters \n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            printf("Quitting the program......");
            goto end;

        case '1':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmToMiles;
            printf("%f km is equal to %f miles \n\n", first, second);

        case '2':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot \n\n", first, second);

        case '3':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%f cms is equal to %f inches \n\n", first, second);

        case '4':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f Pounds is equal to %f Kgs \n\n", first, second);

        case '5':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters \n\n", first, second);

            // default:
            break;
        }
    }
end:
    return 0;
}