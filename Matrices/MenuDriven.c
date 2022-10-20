#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *A;
    int n, i , j , row , col , ch , newvalue;
    printf("Enter Dimensions\n");
    scanf("%d",&n);
    A=(int *)malloc(n*sizeof(int));
    do
    {
        /* code */
        printf("enter case\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Create\n");
            for(i=1;i<=n;i++)
            {
                scanf("%d",&A[i-1]);
            } 
            break;
        case 2:
            printf("Get\n");
            printf("Enter indices\n");
            scanf("%d%d",&i,&j);
            if(i==j)
            {
                printf("Value is %d ",A[i-1]);
            }
            else
            {
                printf("0 ");
            }
            printf("\n");
            break;
        case 3:
            printf("Set\n");
            printf("Enter value for changing\n");
            scanf("%d",&newvalue);
            printf("enter row and column\n"); 
            scanf("%d%d",&i,&j);
            if(i==j)
            {
                A[i-1]=newvalue;
            }
            break;
        case 4:
            printf("***Display****\n");
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(i==j)
                    {
                        printf("%d ",A[i-1]);
                    }
                    else
                    {
                        printf("0 ");
                    }
                    printf("\t");
                }
                printf("\n");
            }
            break;
        default :
            break;
        }
    } while (1);
    return 0;
}