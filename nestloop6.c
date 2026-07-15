#include<stdio.h>
int main()
{
    int i,j,n,z,k,l,m,o;
    printf("Enter n value:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {

         for(k=i;k<n;k++)
         {

             printf(" ");

         }
         for(j=1;j<=i;j++)
         {

             printf("* ");

         }

         printf("\n");

         }
z=1;
         for(l=n-1;l>=1;l--)
         {
             for(o=1;o<=z;o++)
         {

             printf(" ");
         }


             for(m=l;m>=1;m--)
         {

             printf("* ");

         }

         z++;
         printf("\n");
         }




}
