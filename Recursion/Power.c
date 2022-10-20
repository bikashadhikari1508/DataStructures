#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int power(int m , int n)
{
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;
}
int main()
{
    int x ,y,res;
    printf("Enter the base num.\n");
    scanf("%d" , &x);
    printf("Enter the upper num.\n");
    scanf("%d", &y);
    res = power(x , y);
    printf("Result is %d" , res);
}