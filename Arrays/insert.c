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
void insert(int arr[] , int index , int size)
{
    int val;
    printf("Enter value to insert\n");
    scanf("%d" ,&val);
    int i;
    for(i=size-1 ; i>=index ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=val;
    size++;
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
    insert(arr , index ,size);
    return 0;
}