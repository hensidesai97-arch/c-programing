#include<stdio.h>
int main()
{
    float grosssalary, allowances, deductions;
    printf("grosssalary: ");
    scanf("%f",&grosssalary);

    if (grosssalary>10000)
    {allowances = (grosssalary*10) / 100;
    deductions = (grosssalary*3) / 100;}
    
    else if (grosssalary>5000)
    {allowances = (grosssalary*7) / 100;
    deductions = (grosssalary*2) / 100;}

    printf("net salary: %f\n",grosssalary + allowances - deductions);
    return 0;
}