#include<stdio.h>
int findMajorityElement(int nums[], int n)
{
    int m;
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        if ( i == 0 )
        {
            m = nums[j], i = 1;
        }
        else
        {
            ( m == nums[j] ) ? i++ : i--;
        }
    }
    return m;
}
int main(void)
{
    int nums[] = { 1,8,7,4,1,2,2,2,2,2,2 };
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("The majority element is %d", findMajorityElement(nums, n));
    return 0; 
}
