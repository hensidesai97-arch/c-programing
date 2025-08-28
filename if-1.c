#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number: ");
    scanf("%d",&a);
     
    printf("enter second number: ");
    scanf("%d",&b);

    if(a>b)
    printf("largest number: %d\n",a);
    else 
    printf("smallest number: %d\n",a);
}