#include<stdio.h>
int main(){
    int num,i,sum = 0;
    printf("enter a positive inreger: ");
    scanf("%d",&num);

    if(num <= 0){
        printf("enter positive inreger: ");
        return 1;
    }
    for(i=1;i<=num/2;i++){
        if(num%i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("%d is a perfect number\n",num);
    }
    else{
        printf("%d is not a perfect number\n",num);
    }
    return 0;
}