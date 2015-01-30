#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
int key;
int result;

    if(argc != 2)
    {
        printf("Enter a key as a Command Line Arguement");
        return 1;
    }
        printf("Enter a string of text to encrypt: \n");
        string myinput = GetString();
        key = atoi(argv[1]);
    
         if(key >= 26)
         {
            key = (key % 26);
         }
         
     for(int i = 0; i<strlen(myinput);i++)
     {
        result = (myinput[i] + key);
        
        if((result > 'z') && (islower(myinput[i])))
        {
            result = (result-26);
        }
        
        if((result > 'Z') && (isupper(myinput[i])))
        {
            result = (result-26);
        }
        
        if(isalpha(result))
        {
          printf("%c",result);
        }else{
          printf("%c",myinput[i]);
        }
     }
     printf("\n");
     
     return 0;

}
