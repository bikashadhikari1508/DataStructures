#include<stdio.h>

struct Matrix
{
    /* data */
    int A[10];
    int n;
};

void Set(struct Matrix *m ,int i ,int j,int value)
{
    if(i==j)
    {
        m->A[i]=value;
    }
}

int Get(struct Matrix m,int i,int j) 
{
    if(i==j)
    {
        return m.A[i];
    }
    else
        return 0;
}

void Display(struct Matrix m)
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d ",m.A[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct  Matrix m;
    m.n=4;
    int res;
    Set(&m,0,0,5);Set(&m,1,1,8);Set(&m,2,2,9);Set(&m,3,3,12);
    Display(m);
    // res=Get(m,2,2);
    // printf("%d",res);
    return 0;
}