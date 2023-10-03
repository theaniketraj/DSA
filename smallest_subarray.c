#include<stdio.h>
#include<limits.h>
int min(int x, int y)
{
    return ( x < y ) ? x : y;
}
int findSmallestSubarray(int arr[], int n, int k)
{
    int windowSum = 0;
    int len = INT_MAX;
    int left = 0;
    for ( int right = 0; right < n; right++ )
    {
        windowSum += arr[right];
        while ( windowSum > k && left <= right )
        {
            len = min( len, right - left + 1 );
            windowSum -= arr[left];
            left++;
        }
    }
    if ( len == INT_MAX )
    {
        return 0;
    }
    return len;
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8 };
    int k = 21;
    int n = sizeof(arr) / sizeof(arr[0]);
    int len = findSmallestSubarray(arr, n, k);
    if ( len != INT_MAX )
    {
        printf("The smallest subarray length is %d", len);
    }
    else
    {
        printf("No subarray exists");
    }
    return 0;
}
