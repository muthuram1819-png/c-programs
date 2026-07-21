#include <stdio.h>

int main()
{
    int n, a[100], i, first;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    first = a[0];

    for(i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    a[n - 1] = first;

    printf("After left rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
