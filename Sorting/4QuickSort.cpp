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

int partition(int A[], int low, int high)
{
    int pivot, i, j;
    int temp;
    pivot = A[low];
    i = low + 1;
    j = high;

    do
    {
        while (A[i] < pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            //bikash
        }
    } while (i < j);

    temp = A[low];                    //A[low] is pivot element  , we want the actual change in array . That's why A[low] written 
    A[low] = A[j];
    A[j] = temp;  

    return j ;                        // Return the index value where the partition will be sit  
}

void QuickSort(int A[], int low, int high)
{
    int partitionIndex; //Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low , high);
    //    PrintArray(A , 8);
        QuickSort(A, low, partitionIndex - 1);  //sort left subarray
        QuickSort(A, partitionIndex + 1, high); //sort right subarray
    }
}

int main()
{
    int A[] = {7, 9, 4, 10, 5, 2, 20, 15};
    int n = 8;
    cout<<"QUICK SORT ALGORITHIM\n";
    cout<<"\nBEFORE SORTING\n";
    PrintArray(A, n);
    QuickSort(A, 0 , n-1);
    cout<<"AFTER SORTING\n";
    PrintArray(A, n);
    return 0;
}
