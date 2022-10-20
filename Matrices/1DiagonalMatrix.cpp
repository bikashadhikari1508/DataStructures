#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter equal number of rows and coloumns\n";    //Take square matrix
    cin>>row>>col;
    int ele;
    int A[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            A[i][j]=0;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                cin>>ele;
                A[i][j]=ele;
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                cout<<A[i][j]<<" ";
            }
            else
            {
                A[i][j]=0;
                cout<<A[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
