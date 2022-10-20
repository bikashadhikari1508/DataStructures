//Inserting an element in an sorted array from back side

#include<iostream>
using namespace std;

int main()
{
    int A[10]={2,5,7,10,15};
    int n;
    n=5;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    int ele,i;
    cout<<"Enter element to insert in sorted array\n";
    cin>>ele;
    i=n-1;
    while(i>=0 && A[i]>ele)  //While loop bcoz we dont know the how many times the loop will go
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=ele;
    n++;   //Since length of an array increased by 1
    cout<<"After inserting\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}