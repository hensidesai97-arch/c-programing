#include<stdio.h>
#include<math.h>
int main(){
    int num, originalnum, remainder, n=0;
    double result = 0.0;

    printf("enter an integer: ");
    scanf("%d",&num);

    originalnum = num;

    for(originalnum = num; originalnum != 0; ++n){
        originalnum /=10;
    }
    originalnum = num;
    while(originalnum != 0){
        remainder = originalnum % 10;
        result += pow(remainder,n);
        originalnum /= 10;
    }
    if((int)result == num)
    printf("%d is an armstrong number\n",num);
    else
    printf("%d is not an armstrong number\n",num);
    return 0;
}