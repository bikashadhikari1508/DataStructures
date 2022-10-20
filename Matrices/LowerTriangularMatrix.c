#include<stdio.h>
#include<stdlib.h>

struct Matrix
{
    /* data */
    int A[20];
    int n;
};

void Set(struct Matrix *m ,int i ,int j,int value)
{
    if(i>=j)
    {
        m->A[(i*(i-1)/2)+(j-1)]=value;      //RowMajor Formula
    }
}

int Get(struct Matrix m,int i,int j) 
{
    if(i>=j)
    {
        return m.A[(i*(i-1)/2)+(j-1)];
    }
    else
        return 0;
}

void Display(struct Matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i>=j)
                printf("%d ",m.A[(i*(i-1)/2)+(j-1)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct  Matrix m;
    m.n=4;             //Dimensions
    Set(&m,1,1,40);Set(&m,2,1,30);Set(&m,2,2,1);Set(&m,3,1,70);Set(&m,3,2,3);Set(&m,3,3,50);Set(&m,4,1,20);Set(&m,4,2,10);Set(&m,4,3,6);Set(&m,4,4,15);
    Display(m);
    return 0;
}