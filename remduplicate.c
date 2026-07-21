#include<stdio.h>
int main()
{
    int n,a[100],i,j,found;
    printf("Enter the number of elements:");
    scanf("%d",&n);
     printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After removing duplicates:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
             found=0;

            if(a[i]==a[j])
            {
             found=1;
             break;
            }
        }
        if(found==0)
        {
            printf("%d",a[i]);
        }

    }

    return 0;
}
