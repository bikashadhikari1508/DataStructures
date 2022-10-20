
//We assume that the first element is sorted in Insertion Sort
/*Algorithm 
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before.
   Move the greater elements one position up to make space for the swapped element.   */


#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,n;
    cout<<"ENter num of element\n";
    cin>>n;
    int A[n];                     // 8 5 7 3 2
    cout<<"Elements are\n";
    for(i=0 ; i<n ; i++)
    {
        cin>>A[i];
    }
    for(i=1 ; i<n ; i++)
    {
        temp=A[i];
        j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];   //Interchange
            j--;
        }
        A[j+1]=temp;
    }
    cout<<"After Insertion Sort\n";
    for(i=0 ; i<n ; i++)
        cout<<A[i]<<" ";
    return 0;
}
