#include<stdio.h>
int main()
{

    int i,j,n;
    char k;
    printf("Enter the n value:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
         k=97;
        for(j=1;j<=i;j++)
        {

            printf("%c ",k);
            k++;

        }


        printf("\n");
    }
    return 0;
}

