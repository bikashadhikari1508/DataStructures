//Upper Triangular Matrix

#include<stdio.h>
#include<stdlib.h>      //for using malloc function

struct Matrix
{
    int *A;
    int n;
};

void Set(struct Matrix *m ,int i ,int j,int value)
{
    if(j>=i)
    {
        m->A[(i-1)*m->n-((i-2)*(i-1)/2) + (j-i)]=value;
    }
}

int Get(struct Matrix m,int i,int j) 
{
    if(j>=i)
    {
        return m.A[(i-1)*m.n-((i-2)*(i-1)/2)+j-i];
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
            if(j>=i)
                printf("%d ",m.A[(i-1)*m.n-((i-2)*(i-1)/2)+j-i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}


int main()
{
    struct Matrix m;
    int i,j,x;
    printf("Enter dimensions\n");
    scanf("%d",&m.n);
    m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    printf("Enter all elements\n");
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }

    printf("\n\n");
    Display(m);
    return 0;
}