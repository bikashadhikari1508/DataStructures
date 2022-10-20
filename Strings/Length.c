#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* s="WELCOME";
    int i,count=0;
    for(i=0 ;s[i]!='\0';i++)              //by for loop
    {
        count++;
    }
    printf("%d\n",count);
    char name[10]="INDIAN";
    int length;
    length = strlen(name);                  //By using function
    printf("Name length: %d", length);
    return 0;
}