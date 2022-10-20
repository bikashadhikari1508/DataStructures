//Only the common elements are shown

#include <iostream>

using namespace std;

int main()
{
   int temp,min;
   int n1=5,n2=5;
   int arr1[n1]={4,2,6,1,9};
   int arr2[n2]={2,4,9,8,6};
   int size=0;
   int i,j,k;
   k=0;
   int arr3[size];
//    //Copy 1st array to 3rd array
//    for(int i=0 ; i<n1 ; i++)
//    {
//        arr3[i]=arr1[i];
//    }
   //Compare elements of 2nd array with 1st array if not present in 1st array copy to 3rd array
   for(int j=0 ; j<n2 ; j++)
   {
       for(int i=0 ; i<n1 ; i++)
       {
           if(arr2[j]==arr1[i])
           {
               arr3[size]=arr1[i];
               size++;
               break;
           }
           else
           {
                continue;
           }
        }
   }
    cout<<"Before sorting:\n";
    for(int k=0 ; k<size ; k++)
    {
        cout<<arr3[k]<<" ";
    }

    //Sorting(Selection Sort)   
    for (int i=0 ; i<size-1 ; i++)
    {
        min=i;
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr3[j]<arr3[min])
            {
                min=j;
            }
        }
        temp=arr3[i];
        arr3[i]=arr3[min];
        arr3[min]=temp;
    }
  
    cout<<"\nAfter sorting:\n";
    for(int k=0 ; k<size ; k++)
    {
        cout<<arr3[k]<<" ";
    }
    return 0;
}
