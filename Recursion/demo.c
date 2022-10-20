#include<stdio.h>
#include<conio.h>
void fun(int);           //Function Declaration
int main()
{
    int x=3;
    printf("Recursion\n");
    fun(x);
    return 0;
}

void fun(int n)
{
    if(n>0)                //Base Condition
    {
        printf("%d\t",n);    //at first printing
        fun(n-1);             //then after condition
    }
}