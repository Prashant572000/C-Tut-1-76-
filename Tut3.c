//                                  Install & Configure Vs code

#include <stdio.h>          // prerprocessor command (This command tells compiler that we want to add file stdio.h in our program)                               simple means include this file on program
int main()                  //  main() is a fn, which means where our program starts, int is an interger which fn  return val
{
    printf("Hello");
    return 0;
}

// when we run this command-   gcc -Wall -save-temps Tut3.c -o prash, this will create bunch of files (Tut3.c , Tut3.i , Tut3.o, Tut3.s)

/*
Preprocessing - in this process, remove all comments, expend macros, and #include file's content save in file Tut3.i(Preprocessor o/p)
Compilation   - in this process, .i file converted into assembly level instructions which save in .s
Assembly      - in this process, .s file(assembly level instructions) convert into machine level instructions which cpu understand .o file , which can't open because it is in binary form 
Linking       - new file Tut3.exe is linker that links all file_name.o sort of files at 1 place. 
Loading       - Then our program loads in Ram, then our program's execution starts
*/