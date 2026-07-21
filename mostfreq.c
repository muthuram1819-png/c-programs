#include <stdio.h>

int main()
{
    int n, a[100], i, j, count, max = 0, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > max)
        {
            max = count;
            element = a[i];
        }
    }

    printf("Most frequent element = %d", element);

    return 0;
}
