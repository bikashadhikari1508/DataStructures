#include<stdio.h>
#include<stdlib.h>

void Traversal(int arr[] , int n)
{
    int i;
    for(i=0; i<n ; i++)
    {
        printf("%d ", arr[i]);
    }
}
void delete(int arr[] ,int index , int size)
{
    int q,i;
    q= arr[index];
    for(i=index ; i<size ;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    for(i=0 ; i<size ;i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[20]={2 ,5 ,7 ,9, 12};
    int size=5;
    int capacity=20;
    Traversal(arr , size);
    printf("\n");
    int index=2 ;
    delete(arr , index , size);
    return 0;
}