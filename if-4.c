#include<stdio.h>
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);

    if(x%7 == 0)
    printf("divisible by 7");

    else
    printf("not divisible by 7");
}