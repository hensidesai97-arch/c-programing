#include<stdio.h>
int main()
{
    float grosssales, discount;
    printf("enter the sales: ");
    scanf("%f",&grosssales);

    if(grosssales>20000)
    {discount = grosssales*0.15;}

    else if(grosssales>10000)
    {discount = grosssales*0.1;}
    
    else if(grosssales<10000)
    {discount = grosssales*0.05;}
     
    printf("net sales: %f",grosssales-discount);
    
}