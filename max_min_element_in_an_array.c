// PROGRAM TO REVERSE AN ARRAY
#include <stdio.h>
void printA(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int returnMax(int *A, int n)
{
    int max =0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
int returnMin(int *A, int n)
{
    int min =__INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        if (A[i] <=min)
        {
            min = A[i];
        }
    }
    return min;
}

int main()
{
    int A[] = {5, 2, 200, 7, 8, 97, 7};
    int size = sizeof(A) / sizeof(int);
    printA(A, size);
    int m = returnMax(A, size);
    printf("the max size in an array is %d \n", m);
    int mi = returnMin(A, size);
    printf("the min element  in an array is %d \n", mi);
    return 0;
}