#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct myArray
{
    int A[10];
    int size;
    int length;
};

int Get(struct myArray arr, int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
 
void Set(struct myArray *arr, int index, int val)
{
    if(index>=0 && index<arr->length)
    {
        arr->A[index]=val;
    }
}
void Display(struct myArray arr)
{
    int i;
    for(i=0 ; i<arr.length ; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int maximum(struct myArray arr)
{
    int i,max;
    max=arr.A[0];
    for(i=1 ; i<arr.length ; i++)
    {
        if(arr.A[i]>max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int minimum(struct myArray arr)
{
    int i,min;
    min=arr.A[0];
    for(i=1 ; i<arr.length ; i++)
    {
        if(arr.A[i]<min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct myArray arr)
{
    int sum=0,i;
    for(i=0 ; i<arr.length ; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}

float Average(struct myArray arr)
{
    int sum=0,i;
    for(i=0 ; i<arr.length ; i++)
    {
        sum = sum + arr.A[i];
    }
    return (float)sum/arr.length;
}
int main()
{
    struct myArray arr1={{10,23,25,40,66},10,5};
    printf("Value at given index is %d ", Get(arr1,2));     //Get function call
    printf("\n");
    Set(&arr1,2,50);
    Display(arr1);
    printf("\n");
    printf("Max is %d ",maximum(arr1));
    printf("\n");
    printf("Min is %d ",minimum(arr1));
    printf("\n");
    printf("Sum is %d ",Sum(arr1));
    printf("\n");
    printf("Average is %f ",Average(arr1));
    return 0;
}