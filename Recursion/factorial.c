#include<stdio.h>
#include<stdlib.h>

int fact(int p)
{
    if(p==0)
    return 1;
    else
    return fact(p-1)*p;
}
int main()
{
    int n ,res;
    printf("Enter the num.\n");
    scanf("%d" , &n);
    res = fact(n);
    printf("Factorial is %d" , res);
}