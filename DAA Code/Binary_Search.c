#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of Elements\n");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int l = 0, h = 9, key, mid;
    printf("Enter Key:\n");
    scanf("%d", &key);
    
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            printf("Found at %d", mid);
            return 0;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    printf("Not found\n");
    return 0;
}
