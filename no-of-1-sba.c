// Find the number of 1's in a sorted binary array

#include<stdio.h>

// Function to find the total number of 1's in a sorted binary array
int count(int nums[], int n)
{
    // if the last array element is 0, no 1's can
    // be present since it is sorted
    if ( nums[n-1] == 0 )
    {
        return 0;
    }

    // if the first array element is 1, all its elements
    // are ones only since it is sorted
    if ( nums[0] )
    {
        return n;
    }

    // divide the array into left and right subarray and recur
    return count(nums, n/2) + count(nums + n/2, n - n/2);
}

int main(void)
{
    int nums[] = { 0, 0, 0, 0, 1, 1, 1 };
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("The total number of 1's present is %d", count(nums, n));

    return 0;
}
