#include<stdio.h>
int main()
{
    int a,b,c,d,f,g,i,j,k,n,m=1;
    float e,h;
    printf("Enter the n value:");
    scanf("%d",&n);
    do{
     printf("\n1.Area of square\n2.Area of circle\n3.Area of triangle\n4.Area of rectangle\n");

     printf("\nEnter your choice:");
     scanf("%d",&a);
     switch(a)
     {

     case 1:
        printf("Enter the square height:");
        scanf("%d",&b);
        c=b*b;
        printf("Area of square is:%d\n",c);
        break;

     case 2:
        printf("Enter the circle radius:");
        scanf("%d",&d);
        e=3.14f*d*d;
        printf("Area of circle is:%f\n",e);
        break;

     case 3:
        printf("enter the bearth and height of triangle:");
        scanf("%d%d",&f,&g);
        h=0.5f*f*g;
        printf("Area of triangle is:%f\n",h);
        break;

     case 4:
        printf("Enter the bearth and height of rectangle:");
        scanf("%d%d",&i,&j);
        k=i*j;
        printf("Area of rectangle is:%d\n",k);
        break;

     default:
        printf("Invalid Choice");
     }
     m++;
    }while(m<=n);
    return 0;
}
