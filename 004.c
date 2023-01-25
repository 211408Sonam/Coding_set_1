"""
  Problem:

Program to find intersection of 2 arrays.
  
"""

#include <stdio.h>


int intersection(int arr1[], int arr2[], int arr3[], int n1, int n2)
{

    int i = 0;
    int j = 0;
    int k = 0;

    while ((i < n1) && (j < n2)) {
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }

    return k;
}

int main()
{
    int arr1[] = { 2, 8, 1, 1, 5, 6 };
    int arr2[] = { 3, 5, 2, 4, 1 };
    
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    int arr3[n1], temp;
    
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
    for(int i = 0; i<n2;i++)
    {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
    
    //Display Final Array
    int len = 0;
    int cnt = 0;

    len = intersection(arr1, arr2, arr3, n1, n2);

    printf("Intersection: ");
    for (cnt = 0; cnt < len; cnt++)
        printf("%d ", arr3[cnt]);
    printf("\n");

    return 0;
}

  
