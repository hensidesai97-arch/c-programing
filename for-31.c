#include<stdio.h>
#include<stdbool.h>
int main(){
    long long sum_of_primes = 0;
    for(int i=2;i<=500;i++){
        bool prime = true;
        for(int j = 2;j*j<=i;j++){
            if(i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            sum_of_primes += i;
        }
    }
    printf("summation of prime numbers between 1 and 500 is: %d\n",sum_of_primes);
    return 0;
}