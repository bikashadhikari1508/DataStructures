//1.sorted array
//2. low,mid,high

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct myArray
{
    /* data */
    int A[10];
    int size;
    int length;
};
int Binary(struct myArray arr , int key)
{
    int mid,i,low,high;
    low=0;
    high=arr.length-1;
    while (low<=high)
    {
       mid=(low+high)/2;
       if(key==arr.A[mid])
       {
           return mid;
       }
       else if(key<arr.A[mid])
        {
            high = mid-1; 
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}

// int RBinSearch(int a[],int l,int h,int key)  //using recursion
// {
//     int mid=0;
//     if(l<=h)
//     {
//         mid=(l+h)/2;
//         if(key==a[mid])
//             return mid;
//         else if(key<a[mid])
//             return RBinSearch(a,l,mid-1,key);
//         else
//             return RBinSearch(a,mid+1,h,key);
//     }
//     return -1;
// }

int main()
{
    struct myArray arr1 ={ {2,3,4,5,6,12,15},10,7};
    int res;
    res = Binary(arr1 ,12);
    printf("Element found at %d ",res);
    return 0;
}