#include<stdio.h>
int main()
{
    float a,b;
    printf("enter grams : ");
    scanf("%f", &a);
    b = a/1000;
    printf("kilograms = %f\n", b);
    return 0;
}