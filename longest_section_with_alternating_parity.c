// Longest section with alternating parity
// Given an integer array, find the length of the longest contiguous section in which every pair of adjacent elements has different parity — one is even and the other is odd.
// -------------------------------------------------------
// 1 2 4 7 8 3 5
// Expected answer : 4
// One longest section is[7, 8, 3, 5].
// --------------------------------------------------------
// 2 4 6 8

// Expected answer : 1
// All elements are even,
// so no adjacent pair has different parity.
// -------------------------------------------------------
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
        if (array[i] % 2 != array[i + 1] % 2)
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
