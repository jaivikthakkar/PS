// Find the First Point Where a Trend Breaks
// Given an integer array, find the index of the first element that breaks the strictly increasing order. If no element breaks the order, return -1.
// -------------------------------------------------------------------------------------------------------------------
// Example:
// 2 5 8 11 7 14 18
// Output : 4
// Using zero-based indexing,the element 7 is at index 4.
// --------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    int array[n],falge=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter your array element :");
        scanf("%d",&array[i]);
    }
    int i;
    for (i=0; i < n-1; i++)
    {
       if (array[i]<array[i+1])
       {
        falge=1;
       }
       else
       {
        falge=0;
        break;
       }
    }
    if (falge==1)
    {
        printf("-1");
    }
    else
    {
        printf("%d",i+1);
    }
    return 0;
}
