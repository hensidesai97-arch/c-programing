#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("prime numbers between 1 to 500 are: \n");
    for(int i=2;i<=500;i++){
        bool prime = true;
        for(int j = 2;j*j<=i;j++){
            if(i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            printf("%d\n",i);
        }
    }
    return 0;
}