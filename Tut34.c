//                                        String in C
/*

Is str a data type => No

we have char , int , float & other data type but no str data type in C.

we use char arr to represent str, str is char arr (NULL terminated char arr)

Str not supported data type in c but very useful concept used to model real world entities like name , city etc.

What r Str - Arr of characters terminated by NULL char, Str is created by creating arr of chars,

we need null char(/0) to tell compiler that our str ends here Ex harry , we need 6 char array(include \0)

To store str - we need to make char array (len + 1)

Syntax of Create Str - There r 2 methods

char name[] = "harry";                      no need to declare \0 compiler automatically 
char name[] = {'h','a','a','r','y', '\0'};    

Taking Str I/p From the user

char str[52];                   // 1st declare char arr, which hold 52 char 
gets(str);                      // In stdio.h file , gets is fn in which user can i/p str , this str will store in str[52] with /0  
printf("%s" , str);             // to print str Method 1
puts(str);                      // to print str Method 2 , puts is also a fn in stdio.h file

Scanf Vs gets - we can i/p white spaces also using gets where can't i/p using scanf
*/

#include <stdio.h>
void printstr(char str[]) {                // It is fn which takes char arr
    int i=0;
    while (str[i] !='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    
}
int main()
{
    // char str[] = {'h','a','a','r','y','\0'};                 // To create char arr Method 1
    // char str[5]="Harry";                                     // To create char arr Method 2
    char str[34];
    gets(str);                                                  // To i/p str from user
    printstr(str);
    printf("Using printf %s\n", str);                           // TO print str method 1
    printf("Using puts \n");
    puts(str);                                                  // TO print str method 2
    return 0;
}

// If we declare str[5], then it adds garbage values, because null value \0 not added beause of size 5 so we delcare size>5 