#include<stdio.h>
int main()
{
    int l,b,A,P;
    printf("enter a number: ");
    scanf("%d %d",&l, &b);

    A = l*b ;
    printf("Area of the rectangle: %d\n",A);

    P = 2(l+b) ;
    printf("perimeter of rectangle: %d\n",P);
    
    return 0;
}