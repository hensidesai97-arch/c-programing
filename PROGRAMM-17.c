#include<stdio.h>
int main()
{
    int l,A,P;
    printf("enter a number: ");
    scanf("%d",&l);

    A = l*l ;
    printf("Area of the square: %d\n",A);

    P = 4*l ;
    printf("perimeter of square: %d\n",P);

    return 0;
}