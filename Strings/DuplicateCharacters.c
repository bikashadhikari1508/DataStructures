#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "anonymous";
    int lastduplicate = 0;
    int length = strlen(str);
    //printf("%d",length);
    int i, j;
    printf("Duplicate characters are\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j] && str[i] != lastduplicate)
            {
                printf("%c ", str[i]);
                lastduplicate = str[i];
            }
        }
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    string s;
//    cin>>s;
//    int a[26];
//    memset(a,0,sizeof(a));
//    for(int i=0;i<s.size();i++)
//    {
//       a[s[i]-'a']++;
//    }
//    for(int i=0;i<26;i++)
//    {
//        if(a[i]>1)
//        {
//            cout<<(char)(97+i)<<endl;
//        }
//    }
// }
