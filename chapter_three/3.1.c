#include<stdio.h>

void chapter3_first(void);
int binsearch_gchaperon(int arr[], int len, int n);
int binarySearch(int x, int arr[], int n);

void chapter3_first()
{
    int n = 9;
    int arr[7] = { 1, 2, 3, 5, 6, 9, 10 };
    int index = binsearch_gchaperon(arr, 7, n);
    if(index != -1)
        printf("Element %d is present at index: %d\n", n, index);
    else
        printf("Element %d is not in the array!\n", n);
}

int binarySearch(int x, int arr[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] > x)
            high = mid + 1;
        else
            low = mid + 1;
    }
    return -1;
}

int binsearch_gchaperon(int arr[], int len, int n)
{
    int low, high, mid;
    low = 0;
    high = len - 1;

    while(low < high)
    {
        mid = (low + high) / 2;
        if(arr[mid] >= n)
            high = mid;
        else
            low = mid + 1;
    }
    return arr[high] == n ? high : -1;
}
