#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
string key;
int result;
int current_key;
int i;
int j;

    if((argc != 2))
    {
        printf("You lose. Try again.");
        return 1;
    }
    for(int k=0; k<strlen(argv[1]);k++)
    {
        if(!isalpha(argv[1][k]))
        {
            printf("You lose. Try again.\n");
            return 1;
        }
     }
     printf("Enter a string of text to encrypt: \n");
     string myinput = GetString();
     key = (argv[1]);
        
     for(i = 0,j=0; i<strlen(myinput);j++,i++)
     {
          if(j>=strlen(key))
          {
            j=0;
          }
          if(!(isalpha(myinput[i])))
          {
            j=j-1;
            
          }
                   
          if(isupper(key[j]) && isupper(myinput[i]))
          {
            current_key = (key[j]-'A');
            result = myinput[i] + current_key;
            if(result > 'Z')
            {
                result = result -26;
            }
          }
          if(islower(key[j]) && islower(myinput[i]))
          {
            current_key = (key[j]- 'a');
            result = myinput[i] + current_key;
            if(result > 'z')
            {
                result = result -26;
            }
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
