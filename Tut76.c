#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) * (x2 - x1) * (x2 - x1);
    return sqrt(a);
}
float areaofcircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2); // distance is fn ptr, which points to fn, which calculate distance
}

int main()
{
    int x1, x2, y1, y2;
    float dst;
    printf("Enter the val of x1\n");
    scanf("%d", &x1);

    printf("Enter the val of y1\n");
    scanf("%d", &y1);

    printf("Enter the val of x2\n");
    scanf("%d", &x2);

    printf("Enter the val of y2\n");
    scanf("%d", &y2);
    dst = areaofcircle(x1, y1, x2, y2, Edistance);
    printf("The distance b/w these points is %.2f", dst);
    return 0;
}