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
    int array[n], falge = 0,ans;
    for (int i = 0; i < n; i++)
    {
        printf("eneter your array element :");
        scanf("%d", &array[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        int j=0;
        for ( j = n-1; j > i; j--)
        {
            if (array[i]==array[j])
            {
                falge=1;
                break;
            }
            else
            {
                falge=0;
            }
        }
        if (falge==1)
        {
           continue;
        }
        else
        {
            ans=i;
            break;
        }
    }
    if (falge==1)
    {
        printf("-1");
    }
    else
    {
        printf("%d",ans);
    }
    return 0;
}
