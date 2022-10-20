#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct Array
{
    /* data */
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("TRAVERSAL\n");
    for(i=0 ; i<arr.length ; i++)
    {
        printf("%d ", arr.A[i]);
    }

}

// void insert(struct Array *arr , int val,int index)
// {
//     arr[index]=val;

// }
int main()
{
    struct Array arr;
    int n,i,val,ind;
    printf("Enter size of array\n");
    scanf("%d" , &arr.size);
    arr.A = (int*)malloc(arr.size*sizeof(int)); 
    arr.length=0;
    printf("Enter the number of elements of an array\n");
    scanf("%d" , &n);
    printf("Array elements are\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length=n;

    Display(arr);

    // printf("Enter value to insert\n");
    // scanf("%d", &val);
    // printf("At which index\n");
    // scanf("%d" , &ind);
    // insert(&arr, val,ind);
    return 0;
}
