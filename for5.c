#include<stdio.h>
int main()
{

    int i,j,k,n;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=0;j<n-i-1;j++)
        {

            printf(" ");
        }


        for(j=0;j<=i;j++)
        {

            printf("%d ",k);
            k=k*(i-j)/(j+1);
        }
        printf("\n");
        }

        return 0;
    }

