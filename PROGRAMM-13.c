#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the bytes: ");
    scanf("%f",&a);

    b = a / 1000;
    printf("KB: %f\n",b);
 
    c = a / (1000*1000);
    printf("MB: %f\n",c);

    d = a / (1000*1000*1000);
    printf("GB: %f\n",d);
    return 0;
}