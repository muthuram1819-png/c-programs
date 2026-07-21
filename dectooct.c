#include<stdio.h>
int main()
{
int n,j,i=0,o[32];
printf("Enter the decimal value:");
scanf("%d",&n);
while(n>0)
{
o[i]=n%8;
n=n/8;
i++;
}

for(j=i-1;j>=0;j--)
{

    printf("%d",o[j]);
}

return 0;
}
