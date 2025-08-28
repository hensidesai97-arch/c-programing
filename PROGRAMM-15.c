#include<stdio.h>
int main()
{
    int a,b;
    printf("enter fahrenheit: ");
    scanf("%d",&a);
    b = 0.555555*(a-32);
    printf("celcius: %d",b);
    return 0;
}