#include <stdio.h>
#include <string.h>

void parser(char * string) {
    int in=0;                   // var to track whether we r inside tag
    int index=0;
    for (int i = 0; i < strlen(string); i++)
    {
            if(string[i] == '<') {
                in=1;
                continue;
            }
            else if(string[i]=='>')
            {
                in=0;
                continue;
            }
    if (in==0)
    {
        string[index]=string[i];
        index++;
    }
    }
        string[index]='\0';

        //    Remove the trailling spaces from beginning
        while (string[0]==' ')
        {
            // Shift str to left
            for (int i= 0; i< strlen(string);i++)
            {
                    string[i]=string[i+1];
            }
            
        }
        
            //    Remove the trailling spaces from beginning
            while (string[strlen(string)-1] == ' ')
            {
                string[strlen(string)-1] ='\0';
            }
            
}

int main()
{
    char string[] = "<h1>                                           This is a heding                             </h1>"; 
    parser(string);
    printf("The parsed str is ~~%s~~" , string);
    return 0;
}
