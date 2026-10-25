//  longest stricly increasing with alternating parity.c
// Given an integer array, find the length of the longest contiguous section where every element is strictly greater than the previous element, and adjacent elements alternate parity.
#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("enter n :");
    scanf("%d", &n);
    int max_count = 1, count = 1, array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number :");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] % 2 != array[i + 1] % 2 && array[i] < array[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (max_count < count)
        {
            max_count = count;
        }
    }
    printf("%d", max_count);
    return 0;
}
