#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Reverse array is:");
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }



    return 0;
}
