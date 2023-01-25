"""
  Problem:

Given an array of integers where every integer occurs two times except for one
integer, which only occurs once, find and return the non-duplicated integer.
 
"""
  
#include <stdio.h>

int FindNum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    res = res ^ arr[i];
    return res;
}

int main()
{
    int arr[] = { 3, 3, 6, 6, 7, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    printf("The Element is %d",
    FindNum(arr, n));
    return 0;
}
