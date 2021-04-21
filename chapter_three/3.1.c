#include<stdio.h>

void chapter3_first(void);
int myBinarySearch(int arr[], int len, int n);

void chapter3_first()
{
    int arr[7] = { 1, 2, 3, 5, 6, 9, 10 };
    int index = myBinarySearch(arr, 7, 4);
    if(index != -1)
    {
        printf("Element is present at index: %d\n", index);
    }
    printf("Element is not in the array!\n");
}

int myBinarySearch(int arr[], int len, int n)
{
    int pivot = len / 2;
    for(int i = 0;i < len;i++)
    {
        if()
    }
    return -1;
}

/*

    { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 15, 18 };
    { 1, 2, 3, 4, 5, 7, 8 }
    { 1, 2, 3, 4 }
    { 1, 2 }
    { 1 }
    { 2 }
    { 3, 4 }
    { 5, 7, 8 }
    { 9, 10, 11, 12, 15, 18 }

*/
