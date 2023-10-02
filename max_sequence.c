#include<stdio.h>
void findLongestSequence(int arr[], int n, int k)
{
    int left = 0;
    int count = 0;
    int window = 0;
    int leftIndex = 0;
    for ( int right = 0; right < n; right++ )
    {
        if ( arr[right] == 0 )
        {
            count++;
        }
        while ( count > k )
        {
            if ( arr[left] == 0 )
            {
                count--;
            }
            left++;
        }
        if ( right - left + 1 > window )
        {
            window = right - left + 1;
            leftIndex = left;
        }
    }
    if ( window == 0 )
    {
        return;
    }
    printf("The longest sequence has length %d from index %d to %d", window, leftIndex, ( leftIndex + window - 1 ));
}
int main()
{
    int arr[] = { 1,1,0,1,1,0,1,1,1,1,0,0 };
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    findLongestSequence(arr, n, k);
    return 0;
}
