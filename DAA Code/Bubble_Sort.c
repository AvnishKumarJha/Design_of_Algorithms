#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before Sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);
    printf("\nAfter Sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
