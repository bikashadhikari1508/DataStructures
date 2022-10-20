#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sparse[4][5]= 
    {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<" "<<sparse[i][j];  
        }
        cout<<"\n";
    }
    int size;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(sparse[i][j]!=0)
            {
                size++;
            }
        }
    }//calculation of non zero elements over 


    int newMatrix[size][3];
    int k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(sparse[i][j]!=0)
            {
                newMatrix[k][0]=i;
                newMatrix[k][1]=j;
                newMatrix[k][2]=sparse[i][j];
                k++;
            }
        }
    }
    cout<<"non zero matrix \n";
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<3; j++)
            cout <<" "<< newMatrix[i][j];
 
        cout <<"\n";
    }
    return 0;
}
