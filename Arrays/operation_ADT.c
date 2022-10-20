#include<stdlib.h>
#include<stdio.h>

struct myArray 
{
    /* data */
    int size;
    int length;
    int *ptr;
};
void CreateArray(struct myArray *a , int tsize , int length)
{
    a->size=tsize;
    a->length= length;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}
void  SetValue(struct myArray *a)
{
    int i;
    printf("Elements are\n");
    for(i=0 ; i<a->length ;i++)
    {
        scanf("%d", &(a->ptr)[i]);
    }
}
void Display(struct myArray *a)
{
    int i;
    for(i=0 ; i<a->length ; i++)
    {
        printf("%d ", a->ptr[i]);
    }
}
void Append(struct myArray *a,int length)
{
    int val,i;
    printf("\nEnter value to append at last pos\n");
    scanf("%d", &val);
    a->ptr[length]=val;
    printf("After appending\n");
    for(i=0 ; i<=a->length ; i++)
    {
        printf("%d ", a->ptr[i]);
    }
    length++;
    // printf("\n%d", length);
}
void Insert(struct myArray *a ,int index)
{
    int val,i;
    printf("Enter value to insert at given index\n");
    scanf("%d", &val);
    if(index>=0 && index<a->length)
    {
        for(i=a->length-1 ; i>=index ; i--)
        {
            a->ptr[i+1]=a->ptr[i];
        }
        a->ptr[index]=val;
        a->length++;
        printf("\nAfter Inserting\n");
        for(i=0 ; i<a->length ; i++)
        {
            printf("%d ", a->ptr[i]);
        }
    }
}

void Delete(struct myArray *a ,int index)
{
    int i,q;
    q = a->ptr[index];
    printf("\nDeletion\n");
    if(index>=0 && index<a->length)
    {
        for(i=index ; i<a->length ; i++)
        {
            a->ptr[i]=a->ptr[i+1];
        }
        a->length--;
        printf("\nAfter Deleting\n");
        for(i=0 ; i<a->length ; i++)
        {
            printf("%d ", a->ptr[i]);
        }
    }
}
int main()
{
    struct myArray obj;
    CreateArray(&obj ,10,5);
    SetValue(&obj);
    Display(&obj);
    Append(&obj ,5);
    Insert(&obj , 2);
    Delete(&obj , 2);
    return 0;
}
