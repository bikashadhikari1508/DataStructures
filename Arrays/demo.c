//Implementing array as an ADT in C lang

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct  myArray
{
    /* data */
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *a , int tsize , int usize)
{
    a->total_size=tsize;
    a->used_size= usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}

void setValue(struct myArray *a )
{
    int n,i;
    for(i=0 ; i<a->used_size ; i++)
    {
        printf("Enter element %d" ,i);
        printf("\t");
        scanf("%d" , &n);
        (a->ptr)[i]=n;
    }
}

void show(struct myArray *a )
{
    int i;
    for(i=0 ; i<a->used_size ; i++)
    {
        printf("%d\t", a->ptr[i]);
    }
}
int main()
{
    struct myArray obj;
    createArray(&obj, 10 , 2);
    printf("SetValue running\n");
    setValue(&obj);
    printf("Show running\n");
    show(&obj);
    return 0;
}