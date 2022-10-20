#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int a[26];
   memset(a,0,sizeof(a));
   string ans="";
   for(int i=0;i<s.size();i++)
   {
      if(a[s[i]-'a']==0)
      {
          ans+=s[i];
          a[s[i]-'a']=1;
      }
   }
   cout<<ans<<endl;
}