// Find the First Element That Appears Again
// Problem : Given an integer array, find the index of the first element whose value has already appeared earlier.If no value repeats, return -1.
// -----------------------------------------------------------------------------------------------------------------------------------------
//   Example :
//   4 7 2 7 4 9
//   Output : 3
//   Why ? The element 7 at index 3 is the first element encountered whose value appeared earlier,at index 1.
// -------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int n;
    printf("enter your number :");
    scanf("%d", &n);
    int array[n], falge = 0, ans;
    for (int i = 0; i < n; i++)
    {
        printf("eneter your array element :");
        scanf("%d", &array[i]);
    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                falge = 1;
                break;
            }
        }
        if (falge == 1)
        {
            ans = i;
            break;
        }
    }
    if (falge == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", i);
    }
    return 0;
}
