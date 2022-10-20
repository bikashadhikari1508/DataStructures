// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[]= "anonymous";
//     int i,j,k;
//     int length=strlen(s1);
//     for(i=0;i<length;i++)
//     {
//         for(j=i+1;j<length;j++)
//         {
//             if(s1[i]==s1[j])
//             {
//                 for(k=j;k<length;k++)
//                 {
//                     s1[k]=s1[k+1];
//                 }
//             }
//         }
//     }
//     printf("%s",s1);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,j,k;
    printf("Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        for(j=i+1;j<strlen(str);){
            if(str[i]==str[j]){
                for(k=j;k<strlen(str);k++){
                    str[k]=str[k+1];
                }
            }
            else{
                j++;
            }
        }
    }
    printf("New String without duplicate char is : %s",str);
    return 0;
}