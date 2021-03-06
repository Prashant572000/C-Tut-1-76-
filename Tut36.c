//                            Exercise 5  ,   Array reversal

#include <stdio.h>
void revarr(int *arr) {
        //  Before reversing
        for (int i = 0; i < 7; i++)
        {
            printf("%d " , arr[i]);
        }
        
}
void afterrevarr(int arr[]) {
        //  After reversing
        int temp[34];
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7/2; j++)
            {
            arr=temp[i];
            temp[i]=arr[6-i];
            arr[i]=temp;
                printf("%d " , arr[i]);
            }
            
            printf("%d " , arr[i]);
        }
        
}
int main()
{
    int arr[]={1,2,3,4,5,6,77};
    printf("Before reversing array is : " );
    revarr(arr);
    printf("After reversing array is : " );
    afterrevarr(arr);
    return 0;
}