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
    for(int i = n - 1; i >= 1; i--)
    {
        int j = rand() % (i+1);
        swap(A, i, j);
    }
}
int main(void)
{
    int A[] = { 1,2,3,4,5,6 };
    int n = sizeof(A) / sizeof(A[0]);
    srand(time(NULL));
    shuffle(A, n);
    for( int i = 0; i < n; i++ )
    {
        printf("%d", A[i]);
    }
    return 0;
}
