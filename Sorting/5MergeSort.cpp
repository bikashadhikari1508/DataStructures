//By using one Auxliary Array

#include <iostream>
using namespace std;

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

void MergeSort(int A[], int low, int high, int size)
{
    int mid = (low + high) / 2;
    int *B = new int[size];                     //Dynamically allocate
    int i, j, k;
    i = low;
    j = mid + 1;
    k=low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++;
            i++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        B[k]=A[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    for(i=low ; i<=high ; i++)
    {
        A[i] = B[i];
    }
    
}
int main()
{
    int A[10] = {2, 5, 7, 15, 1, 9, 20};
    int size = 7;
    int low = 0;
    int high = size-1;
    cout<<"Before Sorting\n";
    PrintArray(A, size);
    MergeSort(A , low , high , size);
    cout<<"After Sorting\n";
    PrintArray(A, size);
    return 0;
}