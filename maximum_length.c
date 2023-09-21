#include<stdio.h>
void findMaxLenSubarray(int nums[], int n, int s)
{
    int len = 0;
    int ending_index = -1;
    for ( int i = 0; i < n; i++ )
    {
        int target = 0;
        for ( int j = i; j < n; j++ )
        {
            target += nums[j];
            if ( target == s )
            {
                if ( len < j - i + 1 )
                {
                    len = j - i + 1;
                    ending_index = j;
                }
            }
        }
    }
    printf("[%d, %d]", ending_index - len + 1, ending_index);
}
int main(void)
{
    int nums[] = { 5,6,-5,5,3,5,3,-2,0 };
    int target = 8;
    int n = sizeof(nums)/sizeof(nums[0]);
    findMaxLenSubarray(nums, n, target);
    return 0;
}
