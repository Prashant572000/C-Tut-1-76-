//                                  Storage classes

/*
What is storage class - 3 things depends on storage class

Scope - where will this var be available (Ex - var can be used  in main fn or any fn or in whole program )
Default initial val - int a; (Ex- if we don't initialize val of a what will be default initial val) 
Lifetime - Life of that var

Scope(kha par uplabdhg hoga) vs Lifetime (kb tk uplabdhg hoga)

Storage classes in c - 4 
1. Automaticvar - same as Local var local to fn they r defined(Ex-int prash or auto int prash)Auto default(defualt initial val - Garbage) 
2. External var - same as global var glocal to fn they r defined(defualt initial val -0) Lifetime - Thoughout lifetime of program
3. Static   var - Local var , Default val - 0 , static var (Ex- static int i;) 
4. Register var - Cpu ka register processor ka part hota h, yha un var ko store kiya jata h jo bhot jldi use hote h (Ex- we use var inside loops), because they near of cpu, defualt initial val - Garbage , Local var
*/

#include <stdio.h>
// int sum = 897; // Also called external var (Because it defined by external storage class)
int func(int a, int b)
{
    static int sum=0;                    // same as auto int sum , Auto (Default)
    sum++;
    // extern int sum;                // If we want to use global var inside fn use extern keyword
    // sum = a + b;
    printf("The sum is %d\n" , sum);
    return sum;
}
int main()
{
    // Declaration - Telling compiler about the var
    // Definition  - Declaration + Space reservation
    // int sum=func(3,5);
    register int sum=func(3,5);             // cpu register ke andr access request ki jati h, used by this storage class, so that we can access our var fastly          or it provides the facility to store var inside cpu register 
    sum=func(3,5);
    sum=func(3,5);
    sum=func(3,5);
    sum=func(3,5);

    // int sum = 89;
    // printf("The sum is %d\n", sum);
    return 0;
}
