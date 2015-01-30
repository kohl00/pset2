#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{


 string name = GetString();
 
    for(int i = 0, len = strlen(name);i<len;i++)
    { 
        if(i == 0){
          printf("%c", toupper(name[0]));
        }else if(name[i] == (char) 32 ){  
          printf("%c", toupper(name[i+1]));
        }  
    }
    printf("\n");
     
}
