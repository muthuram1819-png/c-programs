#include<stdio.h>
int main()
{

    int i,x=0,y=0,n;
    int step=10;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        switch(i%4)
        {
        case 1:
            x+=step;
            break;

        case 2:
            y+=step;
            break;

        case 3:
            x-=step;
            break;

        case 0:
            y-=step;
            break;

        }
        step+=10;

        }
        printf("%d %d\n",x,y);
        return 0;
    }
