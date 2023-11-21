#include <stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int p[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, p, n - 1);
    else
        return max(
            p[n - 1] + knapSack(W - wt[n - 1], wt, p, n - 1),
            knapSack(W, wt, p, n - 1));
}

int main()
{
    int n;
    printf("The no of Elements\n");
    scanf("%d", &n);

    int p[n];
    printf("Enter the profit\n", p);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    int wt[n];
    printf("Enter the weight\n", wt);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &wt[i]);
    }
    
    int W;
    printf("enter the value\n", W);
    scanf("%d", &W);

    printf("%d", knapSack(W, wt, p, n));

    return 0;
}