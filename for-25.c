#include<stdio.h>
int main(){
    int n,x=0,remainder,originalN;
    printf("enter an integer: ");
    scanf("%d",&n);
    originalN = n;

    while(n != 0){
        remainder = n%10;
        x = x*10 + remainder;
        n /=10;
    }

    if(originalN == x)
    printf("%d is a palindrome number \n",originalN);
    else
    printf("%d is not a palindrome number \n",originalN);
    return 0;
}