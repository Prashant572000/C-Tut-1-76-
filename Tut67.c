//                          FILE Modes fgets, fputs, fgetc, & More on File C

/*
when we open file like fopen("myf.txt" , "r"), now fopen() returns a file ptr (FILE *ptr) which points to our fname and mode also 

Other file I/O fn in C
c for char , s for str

fscanf  - Read the file.
fprintf - write the content inside file.

fputc -(Put character in File) help to insert char in file, Syntax- int fputc(character, FILE pointer), return written char as int type, On fail it return EOF(End of file) is constant defined in stdio.h 
fputs - used to insert null terminated str to file Syntax- int fputs( const char*s , FILE *fp) EX- int puts("This" , ptr);
fgetc - (Get used to read chars 1 by 1 from file) Syntax- int fgetc(FILE *fp) return written char as int type, On fail it return EOF(End of file) is constant defined in stdio.h 
fgets - used to read null terminated str to file  Syntax- int fgets( const char*s, int n , FILE *fp) , where n=no of chars to read
 n= no + 1 (+1 for  null termintaed)*/

#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");
    //                                      fgetc
    // char c=fgetc(ptr);                              // read char by char
    // printf("The char I read was %c\n" , c);
    // c=fgetc(ptr);                                   // read char by char
    // printf("The char I read was %c\n" , c);
    //                                      fgets
    char str[5];
    fgets(str, 4, ptr); // read str The and 4 is null char
    printf("The str is %s\n", str);
    //                                      fputc
    // fputc('o' , ptr);                               // put o char in file myfile.txt
    //                                      fputs
    // fputs("This is the Game" , ptr);                    // It will write str in file
    fclose(ptr);
    return 0;
}

// r+ - in this mode when we write it , it will replace written str from beginning
// w+ - in this mode when we write it , it will clean file then write
// a+ - in this mode when we write it , it will not clean file then write, and not replace written str from begi. , only append content from lasr
