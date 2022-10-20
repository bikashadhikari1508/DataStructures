#include <stdio.h>  
int main()  
{  
    int i, len = 0;  
    char str[] = "Great Power";  
      
    //Calculating length of the array  
    len = sizeof(str)/sizeof(str[0]);  
    //len=strlen(str);
      
    //Checks every character in the array  
    for(i = 0; i < len; i++){  
          
        //Checks whether a character is upper case character  
        if(isupper(str[i])){  
            //Convert that charcter to lower case  
            str[i] = tolower(str[i]);  
        }  
        //Checks whether a character is lower case character  
        else if(islower(str[i])){  
            //Convert that charcter to upper case  
            str[i] = toupper(str[i]);  
        }  
    }  
    printf("String after case conversion : %s", str);  
    return 0;  
}  