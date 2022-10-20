#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int lastduplicate = 0;
    cout << "Enter num of elements\n";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Duplicates are\n";
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[i] != lastduplicate)
            {
                cout << arr[i] << " ";
                lastduplicate = arr[i];
            }
        }
    }
    return 0;
}


