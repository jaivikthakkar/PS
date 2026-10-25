// Increasing sequence with a parity restriction
// Problem: Given an integer array, find the length of the longest contiguous section where:
// Every element is strictly greater than the previous element.
// No two adjacent elements are both odd.
// --------------------------------------------------------------------------------------------------------------------
// Input array:
// 2 4 7 9 12 15
// Output : 3
// Explanation : [ 2, 4, 7 ] is valid.The next element,
// 9, is odd and follows odd 7, so the section breaks.
// -------------------------------------------------------------------------------------------------------------------------------
// Example 2 Input array : 1 2 3 4 5 6
//  Output : 6
//  Explanation : The array is strictly increasing,
// and no two adjacent elements are both odd.
// -------------------------------------------------------------------------------------------------------------------------------
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
    for (int i = 0; i < n-1; i++)
    {
        if (array[i]<array[i+1] )
        {
            if (array[i]%2!=0 && array[i+1]%2!=0)
            {
                count=1;
            }
            else
            {
                count++;
            }
        }
        else
        {
            count=1;
        }
        if (max_count<count)
        {
            max_count=count;
        }
    }
    printf("%d",max_count);
    return 0;
}
