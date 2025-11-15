//3.	Write a recursive function to calculate factorial of a number.
#include<stdio.h>
int factorial(int x){
    if(x==0 || x==1)
    return 1;
    else
    return x*factorial(x-1);
}
int main(){
    int a;
    printf("enter number: ");
    scanf("%d",&a);

    printf("factorial of %d: %d\n",a,factorial(a));
    return 0;
}