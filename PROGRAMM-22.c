#include<stdio.h>
int main()
{
    float x,y,N;
    printf("gross salary: ");
    scanf("%f", &x);

    y = (x*10) / 100;
    N = x - y;

    printf("net salary = gross salary - some discount of gross salary \n");
    printf("so net salary: %f\n",N);

    return 0;
}