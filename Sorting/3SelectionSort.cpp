#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int  n,i,j ,min;
    cout<<"Enter num. of element\n";
    cin>>n;
    int A[n];                      // 8 5 7 3 2(Take)
    cout<<"Elements in an array\n";
    for(i=0 ; i<n ; i++)
        cin>>A[i];
    cout<<"Before sorting\n";
    for(i=0 ; i<n ; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    for(i=0 ; i<n-1 ; i++)   //For number of passes
    {
        min=i;
        for(j=i+1 ; j<n ; j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
          //  swap(&A[i] , &A[min]);
          int temp;
          temp=A[i];
          A[i]=A[min];
          A[min]=temp;
        }
    }
    cout<<"After Selection Sorting\n";
    for(i=0 ; i<n ; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
