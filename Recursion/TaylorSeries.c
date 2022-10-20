#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,x;
    float res;
    printf("Enter for how many terms \n");
    scanf("%d" , &n);
    printf("Enter the power term.\n");
    scanf("%d", &x);
    float sum=1 , f=1 , d;
    int i,p;
    for(i=1 ; i<n ; i++)
    {
        p = pow(x , i);
        f = f*i;
        d= p/f;
        sum = sum + d;
    }
    res = sum;
    printf("Result is %f" , res);
}