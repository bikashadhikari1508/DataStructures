#include<iostream>
using namespace std;


//int x=0;            //Global declartion
int fun(int n)
{
    static int x=0;   //We can also declare the variable global
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int a = 5;
    cout<<fun(a)<<endl;
    return 0;
}