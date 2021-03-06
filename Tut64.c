//                              File I/O fns in C

/*
when working with files , we need to declare ptr of type FILE       Ex- FILE *ptr=NULL; 
This declaration helps us to read, write , update file.

Create a FILE - Syntax -     ptr=fopen("myfile2.txt" , "mode");  mode can be - (a , a+ , w , w+) 

Opening a File - Creating & Editing FILE

stdio.h contain fn called fopen() for open , fclose for close file in C.

Syntax - fopen("filename" ,"mode") Ex- fopen("myfile.txt" , "r")

r  - Open file for read
r+ - Open file for read & write both (Insert content from begin , don't delete old content)
w  - Open file for write (when write old content deleted)
w+ - Open file for both read & write. it 1st truncates file , then(Insert content , Delete old content)
a  - Open file for append (Old content will not delete)
a+ - Open file for both read & write, reading start from beginning , but writing only append 
rb - Open file for read file in binary mode
wb - Open file for write file in binary mode

Closing a file - need to close after work done, close file by using fclose() fn, takes i/p file ptr Ex- fclose(ptr);

Reafing a file- For read file, use fscanf fn.

fscanf - Syntax- fscanf(Pointer , formatspecifier , (str name)) Ex- fscanf(ptr , %s , string);
fscanf is a FILE Version of scanf
We have to open file in read mode if we want to use fscanf fn

Writing a file - For write a file , use fprintf fn
fprintf used to write content in file
fprintf - Syntax - fprintf (Pointer , formatspecifier, str name) Ex- fprintf(ptr , "%s" , string);
*/

#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // char string[35];
    //              *****Reading a file******
    // ptr=fopen("myfile.txt" , "r");
    // fscanf(ptr , "%s", string);
    // printf("The content of this file is %s" , string); // It will read char before space, and store content in char string

    //              *****write a file******
    char string[35] = "This is the game";
    // ptr=fopen("myfile.txt" , "w");          // Old content will delete, you can use append mode
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);
    fclose(ptr);
    return 0;
}

// myfile.txt belongs to this Tut64.c