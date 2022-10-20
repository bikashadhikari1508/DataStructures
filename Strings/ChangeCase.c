#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[]="WeLcomE";
    int ln=strlen(str);
    int i;
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
    printf("%s",str);
    return 0;
}
