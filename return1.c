#include<stdio.h>
int main()
{

    int i,n;
    printf("Enter the n value:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==8)
        {
        return 0;
        }
        printf("%d\n",i);
    }

}

