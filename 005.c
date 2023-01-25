"""
  Problem:

Program to find union of 2 arrays.
  
"""
  
#include <stdio.h>


int Union(int arr1[], int arr2[], int arr3[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while ((i < n1) && (j < n2)) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr1[i] > arr2[j]) {
            arr3[k] = arr2[j];

            j++;
            k++;
        }
        else {
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }

    if (i == n1) {
        while (j < n2) {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    else {
        while (i < n1) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    return k;
}

int main()
{
    int arr1[] = { 21, 48, 12, 15, 63 };
    int arr2[] = { 33, 56, 20, 13, 14 };
    
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    int arr3[n1+n2], temp;
    
    //Sort Array 1
    for (int i = 0; i < n1; i++)
    {
        for (int j = i+1; j < n1; j++){
            if(arr1[i]>arr1[j]){
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    printf("Array 1: ");
    for(int i = 0; i<n1;i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("\n");
    
    //Sort Array 2 
    for (int i = 0; i < n2; i++)
    {
        for (int j = i+1; j < n2; j++){
            if(arr2[i]>arr2[j]){
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    
    printf("Array 2: ");
    for(int i = 0; i < n2;i++)
    {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
    
    //Display Final Array
    int n = 0;
    int i = 0;

    n = Union(arr1, arr2, arr3, n1, n2);

    printf("Union: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
