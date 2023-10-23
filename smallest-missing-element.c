#include<stdio.h>

// Function to find the smallest missing element in a sorted
// array of distinct non-negative integers
int findSmallestMissing(int nums[], int low, int high)
{
    // base condition
    if ( low > high )
    {
        return low;
    }

    int mid = low + ( high - low ) / 2;

    // if the mid-index matches with its value, then the mismatch
    // lies on the right half
    if ( nums[mid] == mid )
    {
        return findSmallestMissing(nums, mid + 1, high );
    }
    else
    {
        // mismatch lies in the left half
        return findSmallestMissing(nums, low, mid - 1 );
    }
}

int main(void)
{
    int nums[] = { 0, 1, 2, 3, 4, 5, 6 };
    int n = sizeof(nums) / sizeof(nums[0]);

    int low = 0, high = n - 1;

    printf("The smallest missing element is %d", findSmallestMissing(nums, low, high));

    return 0;
}