#include<stdio.h>
int main()
{
    int p,r,n,i;
    printf("enter p: ");
    scanf("%d",&p);
    
    printf("enter r: ");
    scanf("%d",&r);
    
    printf("enter n: ");
    scanf("%d",&n);
    
    i = p * r * n / 100;
    printf("interest %d",i);
    return 0;
}