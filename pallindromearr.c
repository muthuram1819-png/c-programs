#include<stdio.h>
int main()
{
    int n,arr[100],i,flag=1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Array is palindrome");
    }
    else
    {
        printf("Array is not palindrome");
    }
    return 0;
}
