#include<stdio.h>
int main()
{
    int n1,n2,n3,a[100],b[100],c[100],i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n1);
    printf("Enter the array1 elements:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter the number of elements:");
    scanf("%d",&n2);
    printf("Enter the array2 elements:");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }

    n3=n1+n2;
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }

    for(i=0;i<n3-1;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }
return 0;

}
