#include<stdio.h>
void insertionSort(int arr[], int n)
{
    for ( int i = 1; i < n; i++ )
    {
        int value = arr[i];
        int j = i;
        while ( j > 0 && arr[j-i] > value )
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = value;
    }
}
void printArray( int arr[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        printf("%d", arr[i]);
    }
}
int main(void)
{
    int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
