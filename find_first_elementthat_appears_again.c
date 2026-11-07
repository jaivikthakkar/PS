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
    scanf("%d",&n);
    int array[n],falge=0,i=0,j=0;
    for (i = 0; i <n; i++)
    {
        printf("eneter your array element :");
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for (int j = n-1; j>=0; j--)
        {
            if (array[i]==array[j])
            {
               falge=0;
               break;
            }
            else
            {
                falge=1;
            }
        }
        if (falge==0)
        {
            break;
        }

    }
    if (falge==1)
    {
        printf("-1");
    }
    else
    {
        printf("%d",j);
    }



    return 0;
}
