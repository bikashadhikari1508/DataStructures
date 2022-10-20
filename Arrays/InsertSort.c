#include<stdio.h>
struct myArray
{
    int A[10];
    int size;
    int length;
};

void Display(struct myArray arr)
{
    int i;
    for(i=0 ; i<arr.length ; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
void Insert(struct myArray *a,int val)
{
    int i;
    i=a->length-1;
    while(i>=0 && a->A[i]> val)
    {
        a->A[i+1]=a->A[i];
        i--;
    }
    a->A[i+1]=val;
    a->length++;    //Since length of an array increased by 1
}

int main()
{
    struct myArray arr1={{10,23,25,40,66},10,5};
    int val;
    printf("Enter element to insert in sorted array\n");
    scanf("%d",&val);
    Insert(&arr1,val);
    Display(arr1);
}
