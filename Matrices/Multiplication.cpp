#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main() {
	// Your code goes here;
	int i,j;
	int row1,col1;
	
	cout<<"Enter the number of rows and column of 1st Matrix\n";
	cin>>row1>>col1;
	int A[row1][col1];
	cout<<"Enter elements of 1st matrix\n";
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"\n";
	
	int row2,col2;
	cout<<"Enter the number of rows and column of 2nd Matrix\n";
	cin>>row2>>col2;
	int B[row2][col2];
	cout<<"Enter elements of 2nd matrix\n";
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			cin>>B[i][j];
		}
	}
	
	cout<<"Elements of A matrix are\n";
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Elements of B matrix are\n";
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//Matrix Multiplication
	int C[row1][col2];
	for(i=0;i<row1;i++)
	{
	   for(j=0;j<col2;j++)
	   {
	       C[i][j]={0};
	       for(int k=0;k<col1;k++)
	       {
	           C[i][j]+=A[i][k]*B[k][j];
	       }
	   }
	}
	
	cout<<"Resultant matrix is \n";
	for(i=0;i<row1;i++)
	{
	    for(j=0;j<col2;j++)
	    {
	        cout<<C[i][j]<<" ";
	    }
	    cout<<"\n";
	}
}
