#include<stdio.h>
int main()
{
    int l,h,A;
    printf("enter a number: ");
    scanf("%d %d",&l,&h);

    A = h*l / 2 ;
    printf("Area of the triangle: %d\n",A);

    return 0;
}