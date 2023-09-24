#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
void shuffle(int A[], int n)
{
    for ( int i = 0; i <= n - 2; i++)
    {
        int j = i + rand() % (n-1);
        swap(A, i, j);
    }
}
int main(void)
{
    int A[] = { 1,2};
    int n = sizeof(A) / sizeof(A[0]);
    srand(time(NULL));
    shuffle(A, n);
    for ( int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    return 0;
}
