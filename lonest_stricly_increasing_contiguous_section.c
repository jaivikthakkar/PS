// Longest strictly increasing contiguous section
// Given an array, find the length of the longest contiguous section in which every element is strictly greater than the element immediately before it.
// -----------------------------------------------------------
// 1 2 5 3 4 6 7 2
// The answer is 4, because[3, 4, 6, 7] is strictly increasing and has length 4.
// ----------------------------------------------------------------
// 9 8 7 6
//The answer is 1, because no adjacent pair increases.
// ------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int array[n],count=1,max_count=1;
    for (int i = 0; i < n; i++)
    {
       printf("enter your number :");
       scanf("%d",&array[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        if (array[i]<array[i+1])
        {
            count++;
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
