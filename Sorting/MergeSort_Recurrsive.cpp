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

void Merge(int *A, int low, int mid, int high)
{
    int B[20];
    int i, j, k;
    i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;              //Always k will be incremented by 1
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void MergeRecurrsive(int *A, int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;
        MergeRecurrsive(A, low, mid);
        MergeRecurrsive(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {15, 5, 24, 8, 1, 3, 6, 10, 20};
    int size = 9;
    int low, high, mid;
    low = 0;
    high = size - 1;
    cout<<"Before Sorting\n";
    PrintArray(A , size);
    MergeRecurrsive(A , low , high);

    cout<<"After Sorting\n";
    PrintArray(A , size);
    return 0;
}