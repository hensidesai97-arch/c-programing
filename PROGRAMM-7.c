#include<stdio.h>
int main()
{
    int a,b;
    printf("enter minutes: ");
    scanf("%d", &a);
    b = a/60;
    printf("hours = %d\n", b);
    return 0;
}