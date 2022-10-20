#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int Linear(int arr[] ,int length )
{
    int key,i;
    printf("ENter value to search\n");
    scanf("%d", &key);
    for(i=0 ; i<length ; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[20]={2,4,6,7,8,9,11};
    int length=7;
    int  res;
    res=Linear(arr, length );
    printf("Element found at %d position",res);
    return 0;
}