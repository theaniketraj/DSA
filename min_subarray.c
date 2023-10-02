#include<stdio.h>
#include<limits.h>
void findSubarray(int arr[], int n, int k)
{
    if ( n ==  0 || n <= k )
    {
        return;
    }
    int window_sum = 0;
    int min_window = INT_MAX;
    int last = 0;
    for ( int i = 0; i < n; i++ )
    {
        window_sum += arr[i];
        if ( i + 1 >= k )
        {
            if ( min_window = window_sum )
            {
                min_window = window_sum;
                last = i;
            }
            window_sum -= arr[ i + 1 - k ];
        }
    }
    printf("The minimum sum subarray is (%d, %d)", last - k + 1, last);
}
int main(void)
{
    int arr[] = { 10, 4, 2, 5, 6, 3, 8, 1 };
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    findSubarray(arr, n, k);
    return 0;
}
