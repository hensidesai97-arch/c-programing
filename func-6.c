//6.	Write a program to implement a calculator using separate functions for add, subtract, multiply, and divide.
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
int pro(int a,int b){
    return a*b;
}
int divi(int a,int b){
    if(b==0){
        printf("invaid");
    }
    else
    return a/b;
}
int main(){
    int n;
    int a,b,result;
    printf("calculator;");
    printf("----------------------");
    printf("sum");
    printf("subtract");
    printf("multiplication");
    printf("divide\n");
    printf("enter choice(1-4): ");
    scanf("%d",&n);
    printf("enter numbers: ");
    scanf("%d %d",&a,&b);

    switch(n){
        case 1:
            //result=sum(a,b);
            printf("sum of that numbers: %d",sum(a,b));
        break;
        case 2:
            //result=diff(a,b);
            printf("subtracation of that numbers: %d",diff(a,b));
        break;
        case 3:
            //result=pro(a,b);
            printf("multiplication of that numbers: %d",pro(a,b));
        break;
        case 4:
            //result=div(a,b);
            printf("division of that numbers: %d",divi(a,b));
        break;
    }
    return 0;
}