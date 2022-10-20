#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partion(int arr[], int low, int high)
{
    // take pivot as first element
    int pivot = arr[low];

    // count the number of elements that are lesser than pivot element
    int count = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    // place pivot element at correct position
    int pivotIndex = low + count;

    // swap the value  of pivotIndex with arr[low]
    swap(arr[pivotIndex], arr[low]);

    // now we have placed pivot element in its correct position
    // take two pointers i and j.  move i from left side and move j from right side.

    int i = low, j = high;
    while (i <= pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i <= pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
            // int temp = arr[i];
            // arr[i]= arr[j];
            // arr[j]=temp;
            // i++,j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int low, int high)
{
    // base case
    if (low >= high)
    {
        return;
    }
    int p = partion(arr, low, high);

    quickSort(arr, low, p - 1);  // left side
    quickSort(arr, p + 1, high); // right side
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
    int n = 5;
    int arr[n] = {4, 1, 3, 5, 2};

    cout<<"Before Sorting \n";
    printArray(arr,5);
    quickSort(arr, 0, n - 1);
    cout<<"After Sorting \n";
    printArray(arr,5);

    return 0;
}