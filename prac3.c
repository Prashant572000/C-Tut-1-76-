//                                Tut 73
#include <stdio.h>
int sum(int a , int b) {
  return a+b;
}
int average(int a , int b) {
    printf("Enter no. 1 : \n");
    scanf("%d" , &a);
    printf("Enter no. 2 : \n");
    scanf("%d" , &b);
    float avg=(a+b)/2;
    // printf("The average of %d and %d is %.2f\n" , a,b , avg);
  return 0;
}
void gretHelloexecute( int (*fnptr)(int ,int)) {
  printf("Hello Uses\n");
  printf("Sum of 5 and 7 is %\n" , fnptr(5,7));
}
void gretGMexecute(int (*fnptr) (int , int)) {
  printf("GM Uses\n");
  printf("Sum of 5 and 7 is %\n" , fnptr(5,7));
}
void gretGAexecute(int (*fnptr) (int , int)) {
  int a,b;
  printf("GA Uses\n");
  printf("avg  is %f\n" , fnptr(a,b));
}
int main()
{
  int (*fptr) (int , int);
  // fptr = &sum;
  fptr = average;
  // gretHelloexecute(fptr);
  // gretGMexecute(fptr);
  gretGAexecute(fptr);
  return 0;
}
//                                Tut 72
// #include <stdio.h>
// int mul (int a , int b) {
//   return a*b;
// }
// int main()
// {
//   // printf("The multi of 4 and 2 is %d" , mul(4,2));
//   int (*fptr) (int , int); 
//   fptr = &mul;
//   int d= (*fptr)(4,4);
//   // printf("The multi of 4 and 2 is %d" , fptr(4,2));
//   printf("The multi of 4 and 4 is %d" , d);
//   return 0;
// }
// #include <stdio.h>
// int sum(int a , int b) {
//   return a+b;
// }
// void greet() {
//   printf("Hello world my user Gm %d\n");
// }
// int main()
// {
//   printf("The sum of 1 and 2 is %d\n" , sum(1,2));
//   int (*funptr) (int ,int);   // ek aisa fn h which return int , takes 2 integer as i/p
//   funptr =&sum;
//   int d= (*funptr)(5,6);
//   printf("Val of d is %d\n" , d);
//   printf("The fn pointer points to sum fn which returns sum is %d\n" , funptr(2,5));    // Method 1
//   return 0;
// }
    
//     FILE *ptr=NULL;
//     ptr=fopen("myfile.txt" , "r+");
//     // fputc
//     // fputc('R' , ptr);
//     // fputs("Rey 619" , ptr);
//     char str[40];
// //   char c=  fgetc(ptr);
// //   printf("%c" , c);
//     fgets(str , 20 , ptr);
//     printf("%s" , str);
//     fclose(ptr);
 
//                                          Tut 67
#include <stdio.h>
int main(int argc, char const *argv[])
 {
    printf("The val of argc is %d\n" , argc);    
    for (int i = 0; i < argc; i++)
    {
    printf("This agu at no %d has value of %s\n" , i,  argv[i]);    
        
    }
    
    return 0;   
  }
//                                          Tut 67

#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile2.txt" , "r");
    //          fgetc
    // char c=fgetc(ptr);
    // printf("The char I read was %c\n" , c);
    //  c=fgetc(ptr);
    // printf("The char I read was %c\n" , c);
    //          fgets
    // char str[20];
    // fgets(str , 25, ptr);
    // printf("The str is %s\n" , str);
    //          fputc
    // fputc('P' , ptr);
    //          fputs
    // fputs("The Undertaker" , ptr);
    fclose(ptr);
    return 0;
}
//                                          Tut 64

// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL;
    //**********READING FILE*************
    // char string[34];
    // ptr=fopen("myfile.txt" , "r");         // Open File in read mode
    // fscanf(ptr , "%s" , string);           // to take content of file , by give parameters
    // printf("The content of this file has %s\n" , string);
    // int i=0;
    // while (string[i] != " ")
    // {
    // printf("The content of this file has %s\n" , string);
    // i++;
    // }
    //**********WRITING FILE*************
    // char string[64]="This string will goes into your file";
    // // ptr=fopen("myfile.txt" , "w");
    // ptr=fopen("myfile.txt" , "a");
    // fprintf(ptr, "%s" , string);
//     fclose(ptr);
//     return 0;
// }

//                                          Tut 60

// #include <stdio.h>
// int main()
// {
//     printf("File    name is %s\n" , __FILE__);
//     printf("Today's date is %s\n" , __DATE__);
//     printf("Time    Now  is %s\n" , __TIME__);
//     printf("Line    No   is %d\n" , __LINE__);
//     printf("ANSI:           %d\n" , __STDC__);
//     return 0;
// }

//                                          Tut 59
// #include <stdio.h>
// #define PI 3.14
// #define Square(r) r*r
// #define add(r , s) r-s
// int main()
// {
//     int r=2;
//     printf("The area of circle is %f\n" , PI * Square(r));
//     printf("The val of PI is %f\n" , PI);
//     printf("The add of is %d\n" , add(r,r));
//     return 0;
// }

//                                          Tut 55

// #include <stdio.h>
// int main()
// {
//     int a=23;
//     int *ptr;                   // This is wild ptr , where inside any address

//     // *ptr=34;                    // inside ptr garbage val , ye ptr wha us add pr jakr  34 write kr rha h
//     // ptr=&a;                    // now it is not wild ptr
//     printf("Address of wild ptr  is %d\n" ,ptr);
//     printf("Val     of Wild ptr  is %d\n" , *ptr);
//     printf("Val of a is %d\n" , *ptr);
//     return 0;
// }
//  Tut 54

// #include <stdio.h>
// #include <stdlib.h>
// int fndangling() {
//     int a=22, b=28, sum;
//     sum=a+b;
//     return &sum;
// }
// int main()
// {
//     //  Case 1 : Deallocation of memory block
//     int *ptr= (int *) malloc(7* sizeof(int));
//     ptr[0]=23;
//     ptr[1]=33;
//     ptr[2]=43;
//     ptr[3]=53;
//     free(ptr);          // ptr is now a dangling ptr

//     // Case 2 : Fn returning local var address
//     int *dangptr= fndangling();         // fn returns add of sum, after fn ends sum var will destroy , when any ptr points to sum , it will become dangling ptr

//     // Case 3 : var goes out of scope
//     int *dangptr2;
//     {
//         int a=23;
//         dangptr2=&a;
//     }
// // when var outside of scope means it will delete , now *dangptr2 points to location which is free it wil be dangling ptr
//     return 0;
// }
//                                          Tut 53
// #include <stdio.h>
// int main()
// {

// printf("The value of ptr is %d" , *ptr);
// int a=45;
// int *ptr = NULL;
// int *ptr = &a;
// printf("The address of ptr is %d", ptr);
// printf("The val of ptr is %d", *ptr);
// if (ptr != NULL)
// {
//     printf("The value of a is %d", *ptr);
// }
// else
// {
//     printf("The ptr is NULL ptr , that can't be dereferenced value of a");
// }

//     return 0;
// }
//                                          Tut 52

// #include <stdio.h>
// void main()
// {
// int a = 45;
// float b = 8.3;
// char c = 'a';
// void *ptr;
// ptr = &a;
// printf("Val of a is %d\n", *(int *)ptr);
// ptr = &b;
// printf("Val of b is %f\n", *(float *)ptr);
// ptr = &c;
// printf("Val of c is %c\n", *(char *)ptr);
// }
//                                          Tut - 50 Ex soln

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int chars, i = 0;
//     char *ptr;
//     while (i < 3)
//     {
//         printf("Employee %d Enter the no. of characters in your employee Id :\n ", i + 1);
//         scanf("%d", &chars);
//         ptr = (char *)malloc((chars + 1) * sizeof(char));
//         printf("Enter your employee Id :\n ");
//         scanf("%s", ptr);
//         printf("Your employe Id is %s\n", ptr);
//         free(ptr);
//         i += 1;
//     }
//     char a, b;
//     printf("Enter val of a : ");
//     scanf("%c", &a);
//     getchar();
//     printf("Enter val of b : ");
//     scanf("%c", &b);
//     getchar();
//     return 0;
// }
//                                  Tut49.c
// #include <stdio.h>
// #include "temp.c"
// int myfunc(int a , int b) {
//    extern int sum;                         // Local var also called automatic var
//     sum=a+b;
//     return sum;
// }
// void myfn() {
//    static int myvar;
//     printf("myvar is %d\n" , myvar);
//     myvar++;
// }
// int sum=7897;                                // Global var also called external var
// int main()
// {
//   int sum=myfunc(3,5);
//     // printf("The sum is %d\n" ,sum );
//     myfn();
//     myfn();
//     myfn();
//     myfn();
//     myfn();
//     myfn();
//     return 0;
// }
//                                  Tut47.c
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// //  USE OF malloc
int *ptr, n;
// printf("Enter size of the aray you want to create : ", n);
//     scanf("%d" , &n);
// ptr = (int *)malloc(n * sizeof(int)); // n size of dynamic arr created
// for (int i = 0; i < n; i++)
// {
//     printf("Enter the value no %d of this array\n", i);
//     scanf("%d" , &ptr[i]);
// }
// for (int i = 0; i < n; i++)
// {
//     printf("The value at %d of this array is %d\n", i , ptr[i]);
// }
//  USE OF calloc
// int *ptr, n;
// printf("Enter size of the aray you want to create : ", n);
//     scanf("%d" , &n);
// ptr = (int *)calloc(n , sizeof(int)); // 10 size of dynamic arr created
// for (int i = 0; i < n; i++)
// {
//     printf("Enter the value no %d of this array\n", i);
//     scanf("%d" , &ptr[i]);
// }
// for (int i = 0; i < n; i++)
// {
//     printf("The value at %d of this array is %d\n", i , ptr[i]);
// }
//     //  USE OF realloc
// int *ptr, n;
//     printf("Enter size of the new aray you want to create : ", n);
//         scanf("%d" , &n);
//    ptr = (int *)realloc(ptr, n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the new value no %d of this array\n", i);
//         scanf("%d" , &ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The new value at %d of this array is %d\n", i , ptr[i]);
//     }
//     // USE of FREE
//     free(ptr);
//     return 0;
// }
// #include <string.h>
// union stu
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };
// #include <stdio.h>
// void swape(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// void main()
// {
//     int a=32 , b=36;
//     printf("    val of a and b is %d %d\n" , a , b);
//     swape(&a,&b);
//     printf("New val of a and b is %d %d\n" , a , b);
//     // union stu s1;
//     // s1.id = 1;
//     // s1.marks = 34;
//     // s1.fav_char = 'e';
//     // strcpy(s1.name, "Prash");
//     // printf("Id is %d\n", s1.id);
//     // printf("marks is %d\n", s1.marks);
//     // printf("fav_charis %c\n", s1.fav_char);
//     // printf("Name is %s\n", s1.name);

//     /* char s1[]="Harry";
//      char s2[]="Ravi";
//      char s3[7];
//      puts(strcat(s1,s2));
//      printf("Length is %d\n" , strlen(s1));
//      printf("Length is %d\n" , strlen(s2));
//      printf("Reverse str is %s\n" , strrev(s1));
//      printf("Reverse str is %s\n" , strrev(s2));
//      strcpy(s3,s2);
//      puts(s3);
//      printf("strcmp for s1,s2  %d\n" , strcmp(s1,s2));
//     */
//     // return 0;
// }