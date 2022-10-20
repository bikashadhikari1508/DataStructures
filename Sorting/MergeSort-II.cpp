#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int start ,int end)
{
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=(end - mid);
    
    //for first arrays
    int *first = new int[len1];
    
    //for second arrays
    int *second = new int[len2];
    
    int k=start;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    
    
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k++];
    }
    
    
    //merge two sorted arrays
    int index1=0;
    int index2=0;
    k=start;    //main array index
    
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
            arr[k++]=first[index1++];
        else
            arr[k++]=second[index2++];
    }
    while(index1 < len1)
        arr[k++]=first[index1++];
    while(index2 <len2)
        arr[k++]=second[index2++];
    
}

void mergeSort(int arr[], int start, int end)
{
    if(start>=end)
        return;
    
    int mid=(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    
    merge(arr, start, end);
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8]={7,10,5,3,22,50,30,1};
    // int n=8;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting\n";
    printArray(arr,n);
    
    mergeSort(arr,0,n-1); 
    
    cout<<"After Sorting\n";
    printArray(arr,n);
    
    return 0;
}