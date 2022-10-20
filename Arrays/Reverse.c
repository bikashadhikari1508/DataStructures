#include<stdio.h>
#include<conio.h>
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
    for(i=0 ; i<arr.length ; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

//WE ARE TAKING AN AUXILARY ARRAY AND STORING THE VALUES FROM BACK SIDE AND THEN SENDING BACK TO THE PREVIOUS ARRAY
void Reverse(struct myArray *a)
{
    int *B;
    B= (int *)malloc(a->length*sizeof(int));     //Creating an array dynamically in heap
    int i,j;
    for(i=a->length-1,j=0 ; i>=0,j<a->length ; i--,j++)
    {
        B[j]=a->A[i];
    }
    for(i=0 ; i<a->length ; i++)
    {
        a->A[i]=B[i];
    }
}

//IN A SINGLE ARRAY WE ARE INTERCHANGING THE VALUES BY TAKING i FROM BEGINING ND j FROM ENDING
void Reverse2(struct myArray *a)
{
    int i,j,temp;
    i=0, j=a->length-1;
    while(i<=j)
    {
        temp=a->A[i];
        a->A[i]=a->A[j];
        a->A[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    struct myArray arr1={{10,23,25,40,66},10,5};
  //  Reverse(&arr1);
    Reverse2(&arr1);
    Display(arr1);
    return 0;
}