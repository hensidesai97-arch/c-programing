#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number: ");
    scanf("%d",&a);
     
    printf("enter second number: ");
    scanf("%d",&b);

    printf("enter third number: ");
    scanf("%d",&c); 

    if(a>b && a>c)
    printf("largest number: %d\n",a);
    if(b>a && b>c)
    printf("largest number: %d\n",b);
    if(c>a && c>b)
    printf("largest number: %d\n",c);

    
}