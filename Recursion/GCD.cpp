#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(a%b==0)
    {
        return b;
    }
    if(b%a==0)
    {
        return a;
    }
    if(a>b)
    {
        GCD(a%b,b);
    }
    else
    {
        GCD(a,a%b);
    }
}

int main()
{
    
}