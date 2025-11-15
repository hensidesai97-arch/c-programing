//1.	Write a function power (a, b), to calculate the value of a raised to b.
#include<stdio.h>
int power(int x,int y){
    int result=1;
    for(int i=0;i<y;i++){
        result=result*x;
    }
    return result;
}
int main(){
    int a,b;
    printf("enter (a): ");
    scanf("%d",&a);

    printf("enter (b):");
    scanf("%d",&b);

    power(a,b);

    printf("%d raised to %d: %d\n",a,b,power(a,b));
    return 0;
}