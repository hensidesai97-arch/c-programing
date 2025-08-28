#include<stdio.h>
int main()
{
    float x,y,z,N;
    printf("gross salary: ");
    scanf("%f", &x);

    y = (x*10) / 100;
    z = (x*3) / 100;
    N = x + y - z;

    printf("net salary = gross salary + allowance - deduction\n");
    printf("so net salary: %f\n",N);

}