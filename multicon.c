#include<stdio.h>
int main()
{
    int i,j;
    for(i=1,j=10;i<=10&&j>=1;i++,j--)
    {
        if(i==6)
            break;

        printf("%d %d\n",i,j);

    }
    return 0;
}
