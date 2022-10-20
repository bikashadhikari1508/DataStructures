#include<iostream>
using namespace std;

int main()
{
    int n,i,j,temp,flag;
    cout<<"Enter num. of element\n";
    cin>>n;
    int A[n];                      // 8 5 7 3 2
    cout<<"Elements in an array\n";
    for(i=0 ; i<n ; i++)
        cin>>A[i];
    for(i=0 ; i<n-1 ; i++)    //For Passes
    {
        flag=0;
        for(j=0 ; j<n-1-i ; j++)
        {
            if(A[j]>A[j+1])
            {
                //swap
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Array is already sorted\n";break;
        }
    }
    cout<<"After Bubble Sort\n";
    for(i=0 ; i<n ; i++)
        cout<<A[i]<<" ";
    return 0;
}
