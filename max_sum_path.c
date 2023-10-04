#include<stdio.h>
int max(int x, int y)
{
    return ( x > y ) ? x : y;
}
int findMaxSum(int X[], int Y[], int m, int n)
{
    int sum = 0;
    int sum_x = 0, sum_y = 0;
    int i = 0, j = 0;
    while ( i < m && j < n )
    {
        while ( i < m - 1 && X[i] == X[i+1] )
        {
            sum_x += X[i++];
        }
        while ( j < n-1 && Y[j] == Y[j+1])
        {
            sum_y += Y[j++];
        }
        if ( Y[j] < X[i] )
        {
            sum_y += Y[j];
            j++;
        }
        else if ( X[i] < Y[j] )
        {
            sum_x += X[i];
            i++;
        }
        else 
        {
            sum += max ( sum_x, sum_y ) + X[i];
            i++, j++;
            sum_x = 0, sum_y = 0;
        }
    }
    while ( i < m )
    {
        sum_x += X[i++];
    }
    while ( j < n )
    {
        sum_y += Y[j++];
    }
    sum += max ( sum_x, sum_y );
    return sum;
}
int main()
{
    int X[] = { 3,6,7,8,10,12,15,18,100 };
    int Y[] = { 1,2,3,5,7,9,10,11,11,15,16,18,25,50 };
    int m = sizeof(X)/sizeof(X[0]);
    int n = sizeof(Y)/sizeof(Y[0]);
    printf("The maximum sum is %d", findMaxSum(X, Y, m, n));
    return 0;
}
