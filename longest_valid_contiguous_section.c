// Longest valid contiguous section
// You are given an array of integers. Find the length of the longest contiguous section in which no two adjacent elements are equal.
// ---------------------------------------------------
// 1, 2, 2, 3, 4, 4, 5
// Expected answer : 3
// One longest valid section is[2, 3, 4]
// ---------------------------------------------------
// 4, 1, 2, 3, 0, 5
// Expected answer : 6
// Every adjacent pair is different.
// ------------------------------------------------------
#include <stdio.h>

int main()
{
    int n,i=0;
    printf("enter n :");
    scanf("%d",&n);
    int max_count=1,count=1,array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number :");
        scanf("%d",&array[i]);
    }
    for (int i=0; i < n-1; i++)
    {
        if (array[i]!=array[i+1])
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
    printf("%d",max_count);
    return 0;
}
