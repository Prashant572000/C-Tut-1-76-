#include <stdio.h>
static int e;
int fn1(int b1)
{
    static int myvar = 0;
    printf("The val of myvar is %d\n", myvar);
    printf("The val of e is     %d\n", e);
    e++;
    myvar++;
    return 0;
}
int main()
{
    int b = 324;
    e=56;
    printf("Val of new e in main fn is %d ", e);
    fn1(b);
    fn1(b);
    fn1(b);
    fn1(b);
    fn1(b);
    fn1(b);

    return 0;
}
// #include <stdio.h>
// #include <string.h>
// typedef struct student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// } std;
// // Method 2
// int main()
// {
//     typedef unsigned long ul;
//     ul q1,q2,q3;
//     // int* a,b;
//     typedef int *intptr;
//     int a, b;
//     // intptr a,b;
//     int c = 89;
//     a = &c;
//     b = &c;

//     // struct student s1;
//     // struct student s2;
//     std s1, s2;
//     s2.id = 45;
//     s2.marks = 45;
//     s1.id = 425;
//     printf("Value of s1's id is %d\n", s1.id);
//     printf("Value of s2's id is %d\n", s2.id);
// typedef unsigned long ul;
// ul l1,l2,l3;
// typedef int in;
// in a, b,c;
// struct student harry , ravi ,shubham;               // Method 1
//     return 0;
// }
// harry.id=1;
// ravi.id=1;
// shubham.id=1;

// harry.marks=43;
// ravi.marks=23;
// shubham.marks=56;

// harry.fav_char='p';
// ravi.fav_char='1';
// shubham.fav_char='r';
//    struct student harry = {1 , 43 , 'P' , "Hai"};
//     strcpy(harry.name , "Harry is Like a Harry Potter");
//     printf("Harry got %d marks\n" , harry.marks);
//     printf("Harry's name is  %s\n" , harry.name);

// void changeval(int *addressofvar) {
//     *addressofvar=54;
// }
// void val(int *a, int *b)
// {
//     int add, sub;
//     add = *a + *b;
//     sub = *a - *b;
//     *a = add;
//     *b = sub;
// }
// void func1(int array[])
// { // pass arr as parameter
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d %d\n", i, array[i]);
//     }
//     array[0] = 223;
// }
// void func2(int *ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         // printf("%d %d\n" , i , ptr[i]);
//         printf("%d %d\n", i, *(ptr + i));
//     }
//     *(ptr + 2) = 45;
// }
// void func3(int array[][2])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d %d %d\n", i, j, array[i][j]);
//         }
//     }
//     array[0][1] = 34;
// }
// #include <stdio.h>
// void printstr(char string[]) {
//     int i=0;
//     while (string[i]!=0)
//     {
//         printf("%c" , string[i]);
//         i++;
//     }

// }
// int main()
// {
// char str[]={'h', 'a', 'r', 'r', 'y', '\0'};     // Method 1
// char str[6]="harry";
// char str[23];
// printf("Enter Your name : ");
// scanf("%s" , str);

// puts(str);
// gets(str);
// printf("Using custom fn printstr is\n");
// printstr(str);
// printf("\nUsing printf stmt %s \n" , str);
// printf("Using puts stmt  \n");
// puts(str);
//     return 0;
// }
// int arr[] = {1, 2, 3, 4};
// int arr[][2] = {{1, 2},
// {3, 4}};
// printf("Value at index 0 is %d\n" , arr[0]);
// func1(arr);
// printf("Value at index 0 is %d\n" , arr[0]);
// func2(arr);
// func2(arr);
// func3(arr);
// func3(arr);
// int a=34 , b=74;
// int a = 4, b = 3;
// printf("Before running fn The val of a and b is %d %d\n", a, b);
// // changeval(&a);
// val(&a, &b);
// printf("After running fn The val of a and b  is %d %d\n", a, b);
// int arr[]={123,2,3,4,5,6,67};
// int *prt=arr;
// // printf("%d\n" , arr[3]);
// // printf("Value at position 3 of array is %d\n" , arr[3]);
// printf("Address of 1st element of array is %d\n" , &arr[0]);
// printf("Address of 1st element of array is %d\n" , arr);
// printf("Address of 2nd element of array is %d\n" , &arr[1]);
// printf("Address of 2nd element of array is %d\n" , arr+1);
// arr++;      // it throws error boz inside arr = &arr[0] or &arr or arr, and it is constant

// printf("Value  of 1st element of array is %d\n" , *(&arr[0]));
// printf("Value  of 1st element of array is %d\n" , *(arr));
// printf("Value  of 2nd element of array is %d\n" , *(&arr[1]));
// printf("Value  of 2nd element of array is %d\n" , *(arr+1));
// int a=32;
// int *ptr=&a;
// char a='2';
// char *ptr=&a;
// printf("%d\n" , ptr);
// ptr--;
// printf("%d\n" , ptr + 1);
// printf("%d\n" , ptr + 2);
// printf("%d\n" , ptr - 2);
// #include <stdio.h>
// int fib_recursive(int n) {
//     if (n==1 || n==2)
//     {
//         return n;
//     }
//     else
//     {
//         return fib_recursive(n-1) + fib_recursive(n-2);
//     }
// }
// int fib_iterative(int n) {
//     int a , b , arr[10];

// }
// int main()
// {
//     int n;
//     printf("Enter the no. to calculate fibonacci series : ");
//     scanf("%d" , &n);
//     printf("Fibonacci series of %d using recursive is %d" , n , fib_recursive(n));
// printf("Fibonacci series of %d using iterative is %d" , n , );
// int a=72;
// int *ptr=&a;
// int *ptr2=NULL;
// printf("The val of a is %d\n" , a);
// printf("The val of a is %d\n" , *ptr);       // ptr Dereferencing  (means get the val which ptr pointer points)
// printf("The address of a is %d\n" , &a);
// printf("The address of a is %d\n" , ptr);
// printf("The address of ptr is %d\n" , &ptr);
// printf("The address of a  in Hexadec form  %x\n" , &a);
// printf("The address of a  in Hexadec form  %x\n" , ptr);
//     return 0;
// }
// int num;
// for (int i = 0; i < 5; i++)
// {
//     printf("%d\n" , i);
//     for (int j = 0; j < 8; j++)
//     {
//         printf("Enter a number , 0 to exit\n");
//         scanf("%d" , &num);
//         if (num==0)
//             goto end;
//         }
// }
// end:
// int a=3;
// float b=5/2;
// // printf("The value of a is %d\n" , a);
// printf("The value of b is %f\n" , (float)b);
// int a; float b; char c;
// printf("Enter value of a \n");
// scanf("%d" , &a);
// printf("Val of A is %f\n" , (float)a);

// printf("Enter value of b \n");
// scanf("%f" , &b);
// printf("Val of B is %d\n" , (int)b);
// getchar();

// printf("Enter value of c \n");
// scanf("%c" , &c);
// printf("Val of C is %d\n" , (int)c);
int a = 9, b = 87, c;

// int age;
// for (int i = 1; i <= 10; i++)
// {
//     printf("%d\n Enter your age : " , i);
//     scanf("%d" , &age);
//     if (age>10)
//     {
//         continue;   // when this if stmt T , then it foget all line of code & go to next iteration
//     }
//         printf("This execute when if age is not >10 or This line printed bcz if condition is not satisfied");
//         }
// label:
// printf("We r inside label\n");
// goto end;
// printf("Hello World\n");
// goto label;
// end:
// printf("We r at end");
// int x=10 , age;
// printf("Enter the age \n");
// scanf("%d" , &age);
// printf("You entered %d\n" ,age);
// if (age>=18)
// {
//     printf("You can vote");
// }
// else if (age>10)
// {
//     printf("You r b/w 10 to 18 , you can vote for kids");
// }

// else {
//     printf("You can't vote");
// }
//     int exam;
//     printf("Enter which exam you passed \n 1. For Science \n 2. For Maths \n 3. For Both \n");
//     scanf("%d" , &exam);
//     printf("You entered %d \n " , exam);
//     if (exam==1)
//     {
//         printf("Your gift is 15$");
//     }
//    else if (exam==2)
//     {
//         printf("Your gift is 15$");
//     }
//     else
//     {
//         printf("Your gift is 45$");
//     }
// int num, index = 1;
// printf("Enter a number\n");
// scanf("%d", &num);
// do
// {
//     printf("%d\n", index);
//     index += 1;
// } while (index < num);
// int n, sum = 0;
// do
// {
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     sum += n;
// } while (n != 0);
// printf("Sum = %d", sum);
// int i=1;
// while (i<=189)
// {
//     printf("%d " , i);
//     i++;
// }
// printf("Enter no :\n");
// scanf("%d" , &x);
// printf("You entered %d\n " , x);
// if (x%2==0)
// {
//     printf("Number is even");
// }
// else {
//     printf("Number is Odd");
// }
// int i=0;
// while (i<=10)
// {
//     printf("%d " , i);
//     i++;
// }
// int a , marks;
// printf("Enter your age\n");
// scanf("%d" , &a);
// printf("Enter your marks\n");
// scanf("%d" , &marks);
// switch (a)
// {
// case 3:
//     printf("The age is 3\n");
//     switch (marks)
//     {
//     case 45:
//         printf("Your marks r 45");
//         break;

//     default:
//     printf("Your marks is not 45");
//         break;
//     }
//     break;
// case 13:
//     printf("The age is 13\n");
//     break;
// case 23:
//     printf("The age is 23\n");
//     break;
// default:
//     printf("Age is not  3 , 13 , 23\n");
// }
// char c;
// printf("Enter the char\n");
// scanf("%c" , &c);
// switch (c)
// {
// case 'A':
//     printf("%c for Apple", c);
//     break;
// case 'B':
//     printf("%c for Ball", c);
//     break;
// case 'C':
//     printf("%c for Cat", c);
//     break;

// default:
//     printf("Your are duffer");
// }
// int *a=&x;
// printf("The val of x is %d\n" , x);
// printf("The val of x is %d\n" , *a);
// printf("The address of x is %d\n" , &x);
// printf("The address of x is %d\n" , a);
// printf("The address of ptr is %d " , &a);
// }