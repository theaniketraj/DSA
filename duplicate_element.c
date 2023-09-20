#include<stdio.h>
int findDuplicate(int nums[], int n)
{
    int xor = 0;
    for(int i = 0; i < n; i++ )
    {
        xor ^= nums[i];
    }
    for(int i = 1; i <= n-1; i++)
    {
        xor ^= i;
    }
    return xor;
}
int main()
{
    int nums[] = { 1,2,3,4,2 };
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("The duplicate element is %d", findDuplicate(nums,n));
    return 0;
}
