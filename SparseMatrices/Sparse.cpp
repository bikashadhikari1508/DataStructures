#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter rows and columns\n";                  //0 0 2 0, 1 0 0 0, 0 0 0 9, 0 0 5 4
    cin>>row>>col;
    int M[row][col];
    cout<<"Enter the elements in matrix\n";
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>M[i][j];
        }
        cout<<"\n";
    }
    cout<<"Values are\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Non ZEro Elements\n";
    int size=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(M[i][j]!=0)
            {
                size++;  
            }
        }
    }
    cout<<size<<endl;
    int N[size][3];
    N[0][0]=row;
    N[0][1]=col;
    N[0][2]=size;
    int k=1;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(M[i][j]!=0)
            {
                N[k][0]=i;
                N[k][1]=j;
                N[k][2]=M[i][j];
                k++;
            }
        }
    }
    cout<<"\n";
    cout<<"******TABLE********\n";
    for(i=0;i<=size;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<N[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

