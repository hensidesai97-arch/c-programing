#include<stdio.h>
int main()
{
    int a,b;
    printf("enter celcius: ");
    scanf("%d",&a);
    b = (1.8*a)+32;
    printf("fahrenheit: %d",b);
    return 0;
}