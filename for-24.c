#include<stdio.h>
int main(){
    int digit,num;

    printf("enter number \n");
    scanf("%d",&num);

    while(num>0){
        digit = num%10;
        printf("%d\n",digit);
        num = num/10;
        }
}