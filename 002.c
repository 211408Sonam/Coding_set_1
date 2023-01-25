"""
Problem:

Given an unsorted array of non-negative distinct integers, find the smallest missing non-negative element in it.
"""

  
#include <stdio.h>

int sort(int arr[], int n)

{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int FindMissing(int arr[], int low, int high) 
{
    if (low > high) 
    {
        return low;
    }
    
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == mid) 
    {
        return FindMissing(arr, mid + 1, high);
    } 
    else 
    {
        return FindMissing(arr, low, mid - 1);
    }
}

int main() {
  int arr[] = { 2, 5, 6, 3, 1, 0};
  int n = sizeof(arr) / sizeof(int);
  int low = 0, high = n - 1;

  sort(arr, n);
  printf("The smallest missing element is %d", FindMissing(arr, low, high));
  return 0;
}
