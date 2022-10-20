#include <bits/stdc++.h>
using namespace std;

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

//Calculate maximum number present in the array
int max(int A[], int n)
{
    int m = A[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (A[i] > m)
        {
            m = A[i];
        }
    }
    return m;
}

//Take that number of element in the auxuliary array
//Size=maximum+1
//So that last element could be insert in that array

void CountSort(int A[], int size)
{
    
    int res;
    res = max(A, size);
    int B[res+1];

    for (int i = 0; i < res+1; i++) //Initialize all element to zero at first
    {
        B[i] = 0;
    }

    for (int i = 0; i < size; i++) //From Array A
    {
        B[A[i]]++; //Increamenting that value by 1 (Array B)
    }

    //Now copying the value to the initial array
    int i=0, j = 0;
    while(i<res+1)
    {
        if (B[i] > 0)
        {
            A[j] = i;
            B[i]--;
            j++;
        }
        else
            i++;
    }
}

int main()
{
    int A[] = {5, 9, 3, 10, 1, 3, 20, 5, 15, 5};
    int size = 10;
    cout<<"BEFORE SORTING\n";
    PrintArray(A, size);

    CountSort(A, size);

    cout<<"AFTER SORTING\n";
    PrintArray(A, size);
    return 0;
}