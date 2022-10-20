//Merging sorted array in a third array

#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int A[10];
    int size;
    int length;
};

void Display(struct myArray arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}

struct myArray* Merge(struct myArray *arr1, struct myArray *arr2)
{
    int i,j,k;
    struct myArray *arr3 = (struct myArray *)malloc(sizeof(struct myArray));
    i=j=k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(; i<arr1->length ; i++)           //by using: while(i<arr1->length){ arr3->A[k++]=arr1->A[i++]; }
    {
        arr3->A[k++]=arr1->A[i++];
    }
    for(; j<arr2->length ; j++)
    {
        arr3->A[k++]=arr1->A[j++];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}

int main()
{
    struct myArray arr1 = {{5,10,15,20},10,4};   //Sorted array
    struct myArray arr2 = {{4,8,12,16},10,4};    //Sorted array
    struct myArray *arr3;         //Auxuliary Array
    arr3=Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}
