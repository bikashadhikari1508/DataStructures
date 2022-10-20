#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-2)+fib(n-1);
}
int main()
{
    int n,res;
    printf("Enter the num.\n");
    scanf("%d" , &n);
    res = fib(n);
    printf("Result is %d" , res);
}