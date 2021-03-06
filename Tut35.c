//                                      String Functions
/*
Str is a null terminated char array

Ex- <stdio.h>  has some fns - printf , scanf , gets, puts
Ex- <string.h> has some fns - 
strcat()- concat or combine 2 str                       Ex- strcat("hello" , "world");      O/P - helloworld 
strlen()-show len of str(not null char),                Ex- strlen("Hello");                O/P - 5 
strrev()- show reverse of str,                          Ex- strrev("Hello");                O/P - olleH
strcpy() - copy 1 str to another                        Ex- strcpy(s1 , s2);                O/P - copy s2 data into s1 
strcmp() - compare 2 given str                          Ex- strcmp("sold" , "tight");       O/P -   -ve
strcmp gives ASCII difference of 1 unmatchting char (IF ASCII val of 1st < 2nd) O/P -ve val else +ve
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="harry";
    char str2[]="ravi";
    char str3[23];
    // char str2[]="aavi";
    // char str3[54];
    // printf("The strcmp for str1, str2 returned %d \n" , strcmp(str1,str2));    // h comes before r so it returns -ve val 
    // printf("The strcmp for str1, str2 returned %d \n" , strcmp(str1,str2));    // h comes after  a so it returns +ve val 
    // puts(strcat(str1, str2));
    // printf("The len of str1 is %d\n", strlen(str1));
    // printf("The len of str2 is %d\n", strlen(str2));
    // printf("The reverse str of str1 is %s:" , strrev(str1));         // Method 1 to print str
    // puts(strrev(str1));  
    // printf("The reverse str of str2 is :");
    // puts(strrev(str2));                                              // Method 2 to print str
    strcpy(str3 , strcat(str1, str2));          // copy the concat of str1 ,str2 to str3 
    // puts(str3);
    // printf(str3);
        char s1[20];
        char s2[10];
        char s3[15];
        char s4[15];
    // printf("Enter 1st str\n");
    // gets(s1);
    // printf("Enter 2nd str\n");
    // gets(s2);
    // printf("Enter 3rd str\n");
    // gets(s3);
    // printf("%s is a friend of %s " , s1 , s2 );
    // puts(strcat(s1,s2));
    return 0;
}