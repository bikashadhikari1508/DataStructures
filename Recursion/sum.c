#include<stdio.h>
#include<stdlib.h>

int sum(int p)
{
    if(p==0)
    return 0;
    else
    return sum(p-1)+p;
}
int main()
{
    int n ,res;
    printf("Enter sum of n natural num.\n");
    scanf("%d" , &n);
    res = sum(n);
    printf("Sum is %d" , res);
}