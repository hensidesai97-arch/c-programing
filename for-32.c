#include<stdio.h>
#include<math.h>
int main(){
    int num, temp, square, lastdigit;
    long long power_of_10 =1;

    printf("enter a number: ");
    scanf("%d",&num);

    square = num*num;
    temp = num;
     while(temp>0){
        power_of_10 *= 10;
        temp /= 10;
     }
     lastdigit = square%power_of_10;

     if(lastdigit == num){
        printf("%d is an automorphic number\n",num);
     }
     else
     { printf("%d is not an automorphic number\n",num);
    }
    return 0;
}