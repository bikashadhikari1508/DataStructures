//C uses char type to store characters and letters. 
//However, the char type is integer type because underneath C stores integer numbers instead of characters.
//In C, char values are stored in 1 byte in memory,and value range from -128 to 127 or 0 to 255.


#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>   //Library function for characters

int main()
{
    char temp;
    temp='A';
    printf("%d " ,temp);         //Character form
    printf("%c " ,temp);         //decimal form
    printf("\n");

    //Arrays of character
    char str1[5]={'A' , 'B', 'C', 'D' , 'E'};     //initialization and declartion
    printf("Character Values are\n");
    for(int i=0 ; i<5 ; i++)
    {
        printf("%c\t",str1[i]);            //Accesing
    }
    printf("\n");
    printf("Character Values are\n");               
    char str2[5]={65 , 66 , 67 , 68 , 69};       //Using numeric values
    for(int i=0 ; i<5 ; i++)
    {
        printf("%c\t",str2[i]);            //Accesing
    }
    printf("\n");
    char name[10]={'B' , 'i' , 'k' , 'a' , 's' , 'h' ,'\0'};       
    int i;
    // printf("%s",name);
    for(i=0 ; name[i]!='\0' ; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    char name1[10]="John";       //Another way to intialize string
    printf("%s", name1);        //%s for string

    printf("\n");
    char s[10];
    printf("Enter your name\n");
    gets(s);                    //For more than one word
    printf("%s" ,s);
    return 0;
}